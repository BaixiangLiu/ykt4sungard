/* --------------------------------------------
 * 创建日期: 2008-06-27
 * 程序作者:
 * 版本信息: 1.0.0.0
 * 程序功能: 卡余额调整
 * --------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cpack.h"
#include "errdef.h"
#include "pubdef.h"
#include "pubdb.h"
#include "pubfunc.h"
#include "dbfunc.h"
#include "busqc.h"
#include "acctrans.h"
#include "transfunc.h"
static int doCard(TRANS& trans,T_t_card& tCard) {

    int ret=0;

    ret=DB_t_card_read_by_cardno(trans.cardno,&tCard);
    if(ret) {
        writelog(LOG_ERR,"cardno[%d]",trans.cardno);
        if(DB_NOTFOUND==ret)
            return E_NOTEXIST_CARDNO;
        else
            return E_DB_CARD_R;
    }
    if(tCard.status[0]!=STATUS_NORMAL) {
        return ERRINFO(E_CARD_LOGOUT,trans.cardno);
    }
    if('1'==tCard.lockflag[0]) {
        ERRTIP("请将该卡注销");
        return ERRINFO(E_CARDNO_LOCKED,trans.cardno);
    }
    if('1'==tCard.frozeflag[0]) {
        return ERRINFO(E_CARD_FREEZE,trans.cardno);
    }
    if('1'==tCard.lossflag[0]) {
        return ERRINFO(E_CARD_LOST,trans.cardno);
    }
    if('1'==tCard.badflag[0]) {
        return ERRINFO(E_CARD_BADRECORD,trans.cardno);
    }
    //比较卡物理ID是否相同
    if(strcmp(tCard.cardphyid,trans.cardphyid)!=0) {
        writelog(LOG_ERR,"db cardphyid[%s],input cardphyid[%s]",tCard.cardphyid,trans.cardphyid);
        return E_CARD_PHYNO_DIFFER;
    }
    //检查卡的有效期
    if(strcmp(tCard.expiredate,trans.transdate)<=0)
        return E_CARD_EXPIRED;
    return 0;
}

int F846322(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg) {
    int ret=0;
    CAccTrans *pAccTrans=CAccTrans::getInstance();
    TRANS& trans=pAccTrans->trans;
    des2src(pAccTrans->trans.opercode,rPack->semp);
    if(strlen(pAccTrans->trans.opercode)<1) {
        pAccTrans->trans.termid=rPack->lwithdraw_flag;
    }
    pAccTrans->trans.transcode=TC_CARDBALMOD;
    ret=pAccTrans->InitTrans();
    if(ret)
        return ret;

    des2src(pAccTrans->trans.chkopercode,rPack->semp_no);
    ret=chk_oper_pwd(pAccTrans->trans.chkopercode,rPack->scust_limit);
    if(ret)
        return ret;
    trans.cardflag=1;
    trans.usecardflag=1;
    trans.cardno=rPack->lvol0;
    pAccTrans->SetCardCntAndCardBal(rPack->lvol5,rPack->lvol6,rPack->lvol7);
    des2src(trans.cardphyid,rPack->sstation1);
    if(rPack->lbank_acc_type>0) {
        trans.transamt=rPack->damt0;
        trans.transflag=TF_DPS;
        trans.aftdpscnt++;
    } else {
        trans.transamt=-rPack->damt0;
        trans.transflag=TF_PAY;
        trans.aftpaycnt++;
    }
    if(amtcmp(trans.transamt,0)==0) {
        ERRTIP("调整金额不能为0");
        return E_COMMON_ERR;
    }
    trans.cardaftbal= D4U5(trans.cardbefbal+trans.transamt);
    T_t_card tCard;
    memset(&tCard,0,sizeof(tCard));
    ret=doCard(trans,tCard);
    if(ret) {
        return ret;
    }
    trans.feetype=tCard.feetype;
    trans.cardtype=tCard.cardtype;
    T_t_account tCardAccount;
    memset(&tCardAccount,0,sizeof(tCardAccount));
    ret=DB_t_account_read_lock_by_c0_and_accno(tCard.accno,&tCardAccount);
    if(ret) {
        if(DB_NOTFOUND==ret)
            return ERRINFO(E_NOTEXIST_CARDACCNO,tCard.accno);
        else
            return E_DB_ACCOUNT_R;
    }
    if(tCardAccount.status[0]!=STATUS_NORMAL) {
        DB_t_account_free_lock_by_c0();
        return ERRINFO(E_CARDACC_LOGOUT,tCardAccount.accno);
    }
    if(amtcmp(trans.cardbefbal,tCardAccount.availbal)==0) {
        DB_t_account_free_lock_by_c0();
        ERRTIP("该卡余额与账户余额一致,不需要调整");
        return E_COMMON_ERR;
    }
    if(amtcmp(trans.cardbefbal,tCardAccount.balance)==0) {
        DB_t_account_free_lock_by_c0();
        ERRTIP("该卡余额与账户余额一致,不需要调整");
        return E_COMMON_ERR;
    }
    if(amtcmp(trans.cardaftbal,tCardAccount.balance)>0) {
        DB_t_account_free_lock_by_c0();
        ERRTIP("调整后卡余额不能大于账户余额");
        return E_COMMON_ERR;
    }
    tCardAccount.dpscnt=trans.dpscnt;
    tCardAccount.paycnt=trans.paycnt;
    if(rPack->lbank_acc_type>0)
        tCardAccount.dpscnt=trans.aftdpscnt;
    if(rPack->lbank_acc_type<0)
        tCardAccount.paycnt=trans.aftpaycnt;
    tCardAccount.cardbal=trans.cardaftbal;
    strcpy(tCardAccount.transtime,trans.sysdatetime);
    ret=DB_t_account_update_lock_by_c0(&tCardAccount);
    if(ret) {
        if(DB_NOTFOUND==ret)
            return ERRINFO(E_NOTEXIST_CARDACCNO,tCard.accno);
        else
            return E_DB_ACCOUNT_U;
    }
    trans.custid=tCard.custid;
    T_t_transdtl transdtl;
    memset(&transdtl,0,sizeof(transdtl));

    des2src(transdtl.transdate,trans.transdate);
    des2src(transdtl.transtime,trans.transtime);
    strcpy(transdtl.accdate,trans.accdate);
    strcpy(transdtl.acctime,trans.acctime);
    transdtl.termid=trans.termid;
    transdtl.termseqno=trans.termseqno;
    transdtl.transcode=trans.transcode;
    transdtl.paytype=trans.fundtype;
    des2src(transdtl.voucherno,trans.voucherno);
    transdtl.cardno=trans.cardno;
    transdtl.purseno=trans.purseno;
    transdtl.cardbefbal=trans.cardbefbal;
    transdtl.amount=trans.transamt;
    transdtl.managefee=trans.totalfeeamt;
    transdtl.cardaftbal=trans.cardaftbal;
    transdtl.custid=trans.custid;
    des2src(transdtl.opercode,trans.opercode);
    des2src(transdtl.showcardno,tCard.showcardno);
    GetCustBaseInfoByCustID(transdtl.custid,transdtl.custname,transdtl.stuempno,NULL);
    transdtl.status[0]=DTLSTATUS_SUCCESS;
    transdtl.transflag = trans.transflag;
    if(TF_DPS==transdtl.transflag) {
        transdtl.cardcnt=trans.aftdpscnt;
    } else {
        transdtl.cardcnt=trans.aftpaycnt;
        ret=UpdateCardBitmap(trans.cardno,transdtl.cardcnt,CARDBITMAPTYPE_SYS_ONLINE);
        if(ret)
            return ret;
    }
    ret=SaveCardTransInfo();
    if(ret) {
        writelog(LOG_ERR,"SaveCardTransInfo ret=%d",ret);
    }
    ret=DB_t_transdtl_add(&transdtl);
    if(ret) {
        if(DB_REPEAT==ret)
            return E_DB_TRANSDTL_E;
        else
            return E_DB_TRANSDTL_I;
    }
    ST_CPACK aPack;
    ST_PACK *outPack = &(aPack.pack);

    ResetNormalCPack(&aPack,0,1);

    SetCol(handle,F_LVOL0,F_LVOL8,F_SDATE0,
           F_SDATE3,F_STIME3,F_SEMP,F_LWITHDRAW_FLAG,F_LSERIAL1,F_VSMESS,0);
    outPack->lvol0=tCard.cardno;
    outPack->lvol8=D4U5(pAccTrans->trans.cardaftbal*100,0);
    des2src(outPack->sdate3,pAccTrans->trans.accdate);
    des2src(outPack->stime3,pAccTrans->trans.acctime);
    des2src(outPack->semp,trans.opercode);
    outPack->lwithdraw_flag=trans.termid;
    outPack->lserial1=trans.termseqno;
    sprintf(trans.remark,"%s卡余额%.2lf元",pAccTrans->remark.c_str(),pAccTrans->trans.cardaftbal);
    des2src(outPack->vsmess,trans.remark);
    PutRow(handle,outPack,pRetCode,szMsg);
    return 0;
}
