/* --------------------------------------------
 * 程序名称: F847125.sqc
 * 创建日期: 2004-12-16
 * 程序作者: 闻剑
 * 版本信息: 1.0.0.0
 * 程序功能:  发行临时卡(非记名 )
 * --------------------------------------------
 * 修改日期:
 * 修改人员:
 * 修改描述:
 * 版本信息:
 * 备注信息:
 * --------------------------------------------*/
#define _IN_SQC_
#include <stdio.h>
#include <string.h>
#include "pubdef.h"
#include "errdef.h"
#include "pubfunc.h"
#include "pubdb.h"
#include "dbfunc.h"
#include "account.h"
#include "fdsqc.h"

static int process(InAcc *IA,T_t_tif_tradeserial *p) {
    int ret = 0;

    //根据卡号和钱包号得到消费者账号(借方)

    IA->iMainDevId=p->maindeviceid;			//工作站标识
    IA->iDevId=p->deviceid;					//设备ID
    IA->iSerialNo=p->serial_no;				//流水号
    IA->iTradeNo=p->serial_type;				//交易码
    strcpy(IA->sTxDate,p->operate_date);		//交易日期
    strcpy(IA->sTxTime,p->operate_time);		//交易时间
    strcpy(IA->sTxCollectDate,p->collect_date);	//采集日期
    strcpy(IA->sTxCollectTime,p->collect_time);	//采集时间
    strcpy(IA->sTxAccDate,p->enteract_date);	//记账日期
    strcpy(IA->sTxAccTime,p->enteract_time);	//记账时间

//	strcpy(IA->sActno[0],p->out_account_id);		//账号

//	IA->dAmt[0]=p->trade_fee;				//充值金额(不包含搭伙费)
//	IA->dAmt[1]=p->managefee;					//充值金额(搭伙费)
//	IA->dAmt[2]=p->depositfee;				//预提费用
//	IA->dAmt[3]=p->in_fee;					//手续费/管理费
//	IA->dAmt[4]=p->cost_fee;					//卡成本费

    p->in_balance=0;							//入卡值
    IA->iUseCardFlag=USE_CARD_TYPE_ONLINE;	//联机交易
    IA->iTxCnt=p->trade_count;				//交易次数
    IA->dInCardBala=p->in_balance;			//入卡值
    IA->dOutCardBala=-1;						//出卡值
    //修改借方和贷方帐户余额，记会计分录帐
    ret=AccountProcess(IA);
    if(ret) {
        writelog(LOG_ERR,"AccountProcess ret[%d]",ret);
        return ret;
    }
    p->out_balance=IA->dOutCardBala;		//出卡值
    return 0;
}

int F847125(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg) {
    int	hi_custtype = 0;										//客户类型
    int i=0;
    int ret = 0;
    int iSeqNo=0;
    char h_showcardid[11] = "";								//显示卡号
    char h_password[7] = "";									//卡密码
    double h_temp_Card_id = 0;								//卡号
    char seed_key[17] = "";									//种子密钥
    char card_endtime[8 + 1] = "";							//卡的有效截至日期
    char logicdate[11]="";
    char sysdate[11]="";
    char systime[9]="";
    char sMsg[256]="";
    char temp[256] ="";
    double dSerial_no = 0;
    char sMaxCardBalance[20]="";
    double dMaxCardBalance=0;
    T_t_card tCard;
    T_t_aif_account  tAccount;
    T_t_tif_tradeserial  tradeserial;
    T_t_customer  tCustomer;
    T_t_feetype tFeetype;
    T_t_custtypefee tCuttype;
    InAcc	IA;
    ST_CPACK aPack;
    ST_PACK *out_pack = &(aPack.pack);
    ResetNormalCPack(&aPack,0,1);
    SetCol(handle,0);
    SetCol(handle,F_LVOL0,F_LVOL1,F_LVOL5,
           F_SCUST_NO,	F_SCUST_NO2,F_SCUST_AUTH,F_SCUST_AUTH2,
           F_SDATE0,F_SNAME,F_SNAME2,
           F_SOPEN_EMP,F_SSTATUS0,
           F_DAMT2,F_DAMT3,F_DAMT4,F_DAMT5,F_LSERIAL1,F_VSMESS,0);

    memset(&IA,0,sizeof(IA));
    memset(&tCard, 0, sizeof(tCard));
    memset(&tAccount,0,sizeof(tAccount));
    memset(&tradeserial,0,sizeof(tradeserial));
    memset(&tCustomer,0,sizeof(tCustomer));

#ifdef DEBUG
    writelog(LOG_DEBUG,"rPack->damt0[%lf]",rPack->damt0);
    writelog(LOG_DEBUG,"rPack->scust_auth2[%s]",rPack->scust_auth2);
#endif

    tradeserial.trade_fee=rPack->damt0;					//发生额
    hi_custtype = rPack->lvol3;									//客户类别
    trim(rPack->scust_no);
    des2src(h_showcardid,rPack->scust_no);					//显示卡号
    des2src(tCard.cardphyid, rPack->sbank_acc);				//物理卡号
    des2src(card_endtime,rPack->sdate0);
    getsysdate(sysdate);
    getsystime(systime);
    ret=GetLogicDate(logicdate);								//业务日期
    if(ret) {
        *pRetCode=ret;
        goto L_RETU;
    }
    ret=IsInvalidDateTime(card_endtime,"YYYYMMDD");
    if(ret) {
        *pRetCode=ret;
        goto L_RETU;
    }
    if(strlen(h_showcardid)>10) {
        *pRetCode=E_INPUT_SHOWID;
        goto L_RETU;
    }
    ret=IsExistShowCardNo(h_showcardid);
    if(ret) {
        *pRetCode = ret;
        goto L_RETU;
    }
    ret=IsExistCardByPhyCardNo(tCard.cardphyid);			//物理卡号
    if(ret) {
        writelog(LOG_ERR,"cardphyid[%s]",tCard.cardphyid);
        *pRetCode = ret;
        goto L_RETU;
    }
    //检查金额是否超过最大额度
    ret=GetParameter(GLOBE_MAXCARDBALANCE,sMaxCardBalance);
    if(ret) {
        *pRetCode=ret;
        goto L_RETU;
    }
    dMaxCardBalance=atof(sMaxCardBalance);

    if(amtcmp(tradeserial.trade_fee,dMaxCardBalance)>0) {
        writelog(LOG_ERR,"tradeserial.trade_fee[%lf]",tradeserial.trade_fee);
        *pRetCode=E_AMT_EXCEED_MAX;
        goto L_RETU;
    }
//先增加客户
    ret = GetParameter(GLOBE_FLAG_TEMPCARD_CUTTYPE,temp);
    if(ret) {
        *pRetCode = ret;
        goto L_RETU;
    }
    hi_custtype = atoi(temp);
    memset(&tCuttype,0,sizeof tCuttype);
    if(hi_custtype <= 0) {
        *pRetCode = E_GLOBAL_PARAM_ERROR;
        strcpy(szMsg,"请正确配置临时人员客户类别");
        goto L_RETU;
    }
    ret = DB_t_custtypefee_read_by_custtype(hi_custtype,&tCuttype);
    if(ret) {
        if(DB_NOTFOUND == ret) {
            *pRetCode = E_DB_CUTTYPEFEE_N;
            strcpy(szMsg,"请正确配置临时人员收费类别");
        } else
            *pRetCode = E_DB_CUTTYPEFEE_R;
        goto L_RETU;
    }

    ret = GetParameter(GLOBE_FLAG_TEMPCARD_FEETYPE,temp);
    if(ret) {
        *pRetCode = ret;
        goto L_RETU;
    }
    tCustomer.feetype = atoi(temp);
    if(tCustomer.feetype <= 1) {
        *pRetCode = E_GLOBAL_PARAM_ERROR;
        strcpy(szMsg,"请正确配置临时人员收费类别");
        goto L_RETU;
    }
    memset(&tFeetype,0,sizeof tFeetype);
    ret = DB_t_feetype_read_by_feetype(tCustomer.feetype,&tFeetype);
    if(ret) {
        if(DB_NOTFOUND == ret) {
            *pRetCode = E_DB_FEETYPE_N;
            strcpy(szMsg,"请正确配置临时人员收费类别");
        } else
            *pRetCode = E_DB_FEETYPE_R;
        goto L_RETU;
    }
    ret=getNewUniqNo(KEYTYPE_CUSTOMER, &iSeqNo);
    if(ret) {
        *pRetCode=ret;
        writelog(LOG_ERR,"getNewUniqNo err[%d]",ret);
        goto L_RETU;
    }
    tCustomer.custid=iSeqNo;
    tCustomer.custtype=hi_custtype;					//客户类型
    //tCustomer.feetype=tCustomer.custtype;
    tCustomer.cut_state=CUSTSTAT_REGIST;
    des2src(tCustomer.is_havecard,TYPE_YES);
//	tCustomer.area=rPack->lvol10;						//区域
    /*
    	ret=GetTempPersonId(tCustomer.stuempno);	//员工号
    	if(ret)
    	{
    		*pRetCode=ret;
    		goto L_RETU;
    	}
    */
//	des2src(tCustomer.stuempno,h_showcardid);
    snprintf(tCustomer.custname,20,"临%.10s",h_showcardid);			//客户 名称
    des2src(tCustomer.opendate,sysdate);							//注册日期
    ret=DB_t_customer_add(&tCustomer);
    if(ret) {
        *pRetCode = E_DB_CUSTOMER_I;
        writelog(LOG_ERR,"DB_t_customer_add ret[%d]",ret);
        goto L_RETU;
    }
    //	准备数据插入卡信息表
    memcpy(seed_key,STATIC_SEED_KEY,sizeof(seed_key));						//读种子密钥

    //	默认密码, 初始取身份证的后6位, 没有身份证号用默认密码
    strcpy(h_password,DEFAULT_CUST_PWD);
    ret = getNewUniqNo(KEYTYPE_CARD_ID,&h_temp_Card_id);						//获取最大卡号
    if(ret) {
        *pRetCode = ret;
        writelog(LOG_ERR,"ret[%d]",ret);
        goto L_RETU;
    }
    tCard.cardno = D2I(h_temp_Card_id);											//卡号
    des2src(tCard.showid,h_showcardid);											//显示卡号
    des2src(tCard.is_main,TYPE_YES);  											//是否为主卡
    des2src(tCard.cardattr,CARDSTAT_REG);										//卡状态
    tCard.type_id = CT_TEMP_NONAME;											//卡类别
    EncodePwd(seed_key,h_password,tCard.password,0);							//卡密码
    tCard.custid = tCustomer.custid;											//客户标识
    tCard.account_count = ACCOUNT_COUNT_ONE;									//卡对应帐户个数
    des2src(tCard.begintime,logicdate);											//注册时间
    des2src(tCard.endtime, card_endtime);										//截至时间
    tCard.phytype = PHYTYPE_NO_ONE;											//设备物理型号;默认为1
    //	插入卡信息
    ret = DB_t_card_add(&tCard);
    if (ret) {
        if(DB_REPEAT==ret)
            *pRetCode = E_DB_CARD_E;
        else
            *pRetCode = E_DB_CARD_I;
        goto L_RETU;
    }
    //	准备数据插入帐户信息表
    ret = getNewActno(tAccount.account_id);  	    //获得最大帐号
    if (ret) {
        *pRetCode = ret;
        goto L_RETU;
    }
    des2src(tAccount.open_date,logicdate);		   								//开户时间
    des2src(tAccount.open_time,systime);
    tAccount.current_state = ACCOUNTSTAT_REGIST;      							//当前状态
    tAccount.act_type = ACCTYPE_PERMAIN;				        					//帐号类别
    tAccount.custid = tCustomer.custid;				        					//客户号
    des2src(tAccount.custname,tCustomer.custname);								//客户名称
    tAccount.custtype = hi_custtype;												//客户类别
    des2src(tAccount.stuempno,tCustomer.stuempno); 							//客户学号或员工号
    tAccount.cardno =tCard.cardno; 											//关联卡号
    tAccount.purseno = PURSE_NO_ONE;										//关联卡钱包号
    tAccount.card_type = tCard.type_id;											//卡类别
    des2src(tAccount.subno,SUBJECT_INDIVIDUALSAVING);						//所属科目
    des2src(tAccount.isautotra,TYPE_NO); 										//是否自动转帐
    //	插入帐户信息表
    ret = DB_t_aif_account_add(&tAccount);
    if (ret) {
        if(DB_REPEAT==ret)
            *pRetCode = E_DB_ACCOUNT_E;
        else
            *pRetCode = E_DB_ACCOUNT_I;
        goto L_RETU;
    }
    //准备数据插入交易流水表
    ret = getNewUniqNo(KEYTYPE_TRADESERIAL,&dSerial_no);  						//获得最大流水号
    if(ret) {
        *pRetCode = ret;
        goto L_RETU;
    }
    tradeserial.serial_no = D2I(dSerial_no);											//流水号
    tradeserial.other_seri_no = 0;														//上传端流水号
    tradeserial.serial_type = TXCODE_CARD_OPEN_FOR_TEMP;								//交易代码
    tradeserial.serial_state = SERISTAT_DEBT;												//流水状态
    des2src(tradeserial.operate_date,sysdate);											//发生日期
    des2src(tradeserial.operate_time,systime);											//发生时间
    des2src(tradeserial.collect_date,sysdate);												//采集日期
    des2src(tradeserial.collect_time,systime);												//采集时间
    des2src(tradeserial.enteract_date,logicdate);											//处理日期
    des2src(tradeserial.enteract_time,systime);											//处理时间
    tradeserial.maindeviceid = rPack->lvol6;												//上传工作站标识
    tradeserial.deviceid = rPack->lvol7;													//采集设备标识
    tradeserial.cardno = tCard.cardno;													//卡号
    des2src(tradeserial.showid,tCard.showid);												//显示卡号
    tradeserial.purseno = PURSE_NO_ONE;												//钱包号
    tradeserial.custid = tCustomer.custid;											//客户标识
    des2src(tradeserial.opercode,rPack->scust_limit);									//操作员代码
    tradeserial.sys_id = 0;																//外部系统标识
    tradeserial.trade_count=1;														//当前卡交易次数

    des2src(IA.sArrInActno[0],tAccount.account_id);						//帐户
    IA.iCardNo=tCard.cardno;
    IA.iFeeType=tCustomer.feetype;
    IA.dArrInAmt[0]=tradeserial.trade_fee;

    IA.iArrInFeeSwitch[0]=rPack->lvol0;
    IA.iArrInFeeSwitch[1]=rPack->lvol1;
    IA.iArrInFeeSwitch[2]=rPack->lvol2;
    IA.iArrInFeeSwitch[3]=rPack->lvol3;
    IA.iArrInFeeSwitch[4]=rPack->lvol4;
    IA.iArrInFeeSwitch[5]=rPack->lvol5;
    IA.iArrInFeeSwitch[6]=rPack->lvol6;
    IA.iArrInFeeSwitch[7]=rPack->lvol7;
    IA.iArrInFeeSwitch[8]=rPack->lvol8;
    IA.iArrInFeeSwitch[9]=rPack->lvol9;
    IA.iArrInFeeSwitch[10]=rPack->lvol10;

    //	调用入账子模块
    ret=process(&IA,&tradeserial);
    if(ret) {
        *pRetCode=ret;
        writelog(LOG_ERR,"process ret[%d]",ret);
        goto L_RETU;
    }
    sprintf(out_pack->vsmess,"流水号:%d 卡号:%d ",IA.iSerialNo,IA.iCardNo);
    for(i=1; i<=IA.iOutTxTypeCnt; i++) {
        switch(IA.iArrOutTxType[i]) {
        case TXTYPE_TOLL_DEPOSIT:
        case TXTYPE_TOLL_DEPOSIT_BILL:
        case TXTYPE_TOLL_DEPOSIT_FUNDBOOK:
        case TXTYPE_DEDUCT_DEPOSIT:
        case TXTYPE_RETURN_DEPOSIT:
            tradeserial.depositfee=IA.dArrOutAmt[i];
            break;
        case TXTYPE_PRE_TOLL_BOARD:
        case TXTYPE_PRE_TOLL_BOARD_BILL:
        case TXTYPE_PRE_TOLL_BOARD_FUNDBOOK:
        case TXTYPE_TOLL_BOARD:
        case TXTYPE_DEDUCT_BOARD:
        case TXTYPE_RETURN_BOARD:
        case TXTYPE_RETURN_BOARD_BILL:
        case TXTYPE_RETURN_BOARD_FUNDBOOK:
            tradeserial.managefee=IA.dArrOutAmt[i];
            break;
        case TXTYPE_TOLL_CHARGE:
        case TXTYPE_TOLL_CHARGE_BILL:
        case TXTYPE_TOLL_CHARGE_FUNDBOOK:
            tradeserial.in_fee=IA.dArrOutAmt[i];
            break;
        case TXTYPE_TOLL_CARDCOST:
        case TXTYPE_TOLL_CARDCOST_BILL:
        case TXTYPE_TOLL_CARDCOST_FUNDBOOK:
            tradeserial.cost_fee=IA.dArrOutAmt[i];
            break;
        default:
            break;
        }
        if(amtcmp(IA.dArrOutAmt[i],0)!=0) {
            sprintf(sMsg,"%s:%.2lf元 ",IA.sArrOutTxName[i],IA.dArrOutAmt[i]);
            strcat(out_pack->vsmess,sMsg);
        }
    }
    sprintf(sMsg,"卡当前余额:%.2lf元",tradeserial.out_balance);
    strcat(out_pack->vsmess,sMsg);
    writelog(LOG_DEBUG,out_pack->vsmess);
    //	插入交易流水表
    ret = DB_t_tif_tradeserial_add(&tradeserial);
    if (ret) {
        if(DB_REPEAT==ret)
            *pRetCode = E_DB_TRADESERIAL_E;
        else
            *pRetCode = E_DB_TRADESERIAL_I;
        goto L_RETU;
    }
    if(amtcmp(tradeserial.out_balance,0)<0) {
        *pRetCode=E_ENTER_ACCOUNT;
        goto L_RETU;
    }
    //	返回卡号\密码\显示卡号\客户类型\图书证号\有效截至日期
    out_pack->lvol0 = (int)h_temp_Card_id;						//交易卡号
    out_pack->lvol1 = tCustomer.custtype;						//客户类别
    out_pack->lvol5 = tCustomer.feetype;						//收费类别
    des2src(out_pack->scust_no,h_showcardid);					//显示卡号
    des2src(out_pack->scust_no2,tCustomer.deptcode);			//部门号
//	des2src(out_pack->scust_auth,tCustomer.stuempno);			//学号
    des2src(out_pack->scust_auth2,tCustomer.man_id);			//身份证号
    des2src(out_pack->sname,tCustomer.custname);				//客户姓名
    des2src(out_pack->sname2,tCustomer.lib_cardid);				//图书证号
    des2src(out_pack->sstatus0,tCustomer.sex);					//性别
    des2src(out_pack->sopen_emp,h_password);					//卡密码
    des2src(out_pack->sdate0,card_endtime);					//有效截至日期

    out_pack->damt2=tradeserial.out_balance;					//出卡值
    out_pack->damt3=tradeserial.managefee;						//搭伙费
    out_pack->damt4=tradeserial.cost_fee;						//卡 成本 费
    out_pack->damt5=tradeserial.in_fee;							//手续费
    out_pack->lserial1=tradeserial.serial_no;						//流水号

    PutRow(handle,out_pack,pRetCode,szMsg);
    return 0;
L_RETU:
    return -1;
}
