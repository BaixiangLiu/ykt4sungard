#ifndef BDFUNC_INC
#define BDFUNC_INC
/*  在每个业务处理过程中必须有如下这样一行：详细各项表示的含义，见BDefine.h中的描述：
   {1000     ,FTestProc   ,"Demo for SQC 业务处理函数编写样板"             ,"CYH Demo"          ,1     ,false,0,0,0,0,0},
   {功能号   ,过程函数>    ,"功能描述"                                     ,"编程人员姓名"       ,优先级,false,0,0,0,0,0},
*/
// 下面列出所有合法的业务处理过程函数列表：

///////////////////////////////////////////////////////////////////////////////////
int F240157(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F200000(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F200001(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F240000(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F240001(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F240002(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F240003(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F240004(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F240005(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F240006(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F240007(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F240008(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F240009(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F240010(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F240011(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F240020(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F240021(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F240022(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F240023(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F240024(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F240031(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F240032(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F240033(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F240034(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F700000(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F700001(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F700002(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
/*
int F800202(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F800203(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F800701(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F800703(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F800704(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F800742(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F800751(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F800761(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F800772(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F800782(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F800783(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F800785(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
*/
int F820001(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F820002(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F820003(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F820005(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F820101(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F820102(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F820103(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F820105(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F820108(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F820110(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F820111(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F820112(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F820113(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F820114(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F820301(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F820302(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F820305(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F820311(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F820321(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F820331(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F820332(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F820341(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F820350(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F820351(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F820352(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
//int F820356(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F820402(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F820404(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F820405(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
//int F820501(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F820502(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F820511(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F820522(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
//int F820704(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
//int F820705(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F841600(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F841601(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F841602(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F841603(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F841604(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F841605(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F841609(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F841610(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F841700(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F842001(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F842501(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F843335(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F843340(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F843341(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F843342(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F843343(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F843351(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F843355(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F843356(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F843357(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F843358(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F843359(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F843360(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F843361(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F843362(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F843363(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F843364(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F843368(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F843369(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F843370(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F843371(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F843373(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
//==============卡库存管理======================
int F845000(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F845001(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);

int F846101(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846102(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846103(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846104(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846105(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846106(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846107(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846108(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846109(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846110(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846111(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846112(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846115(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846116(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846123(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846130(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846201(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846202(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846203(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846204(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846205(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846206(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846210(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846301(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846302(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846303(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846305(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846307(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846308(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846309(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846310(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846311(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846312(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846313(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846314(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846315(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846316(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846317(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846318(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846320(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846321(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846322(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846323(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846324(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846325(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846326(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846327(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846328(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846329(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846330(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846331(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
//int F846332(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846333(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
//int F846334(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
//int F846335(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846336(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
//int F846337(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
//int F846338(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846340(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846341(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846401(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846402(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846403(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846404(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846405(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846501(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846502(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846600(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846601(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846602(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846603(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846605(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846606(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846701(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846702(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846703(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846704(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846705(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846706(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846707(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846708(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846709(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846710(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846711(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846712(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846713(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846714(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846715(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846716(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846717(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846718(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846719(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846720(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846721(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846722(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846723(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846724(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846725(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846726(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846727(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F846728(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F847102(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F847111(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F847127(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F847128(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F847129(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F847130(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F847131(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F847132(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F847133(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F847136(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F847137(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F847150(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F847166(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F847173(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F847185(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F847198(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F847226(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F847227(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F847228(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F847229(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F847230(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F847231(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F847302(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F847310(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
//int F847315(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F847316(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F847317(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F847318(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F847319(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F847320(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F847321(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F848004(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F848021(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F848250(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F848251(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F848252(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F848254(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F848255(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F848256(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F848257(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F848258(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F848259(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F848260(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F848264(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F848265(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F848266(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F848267(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F848268(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F848269(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F848270(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F848273(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F847232(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F849001(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F849002(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F849003(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F849004(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F849005(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F849006(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F849007(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F850000(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F850001(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F850002(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F850003(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F850004(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F850005(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F850006(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F850007(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F850010(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F850011(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F850012(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F850020(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F860001(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);

/*
int F9212(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F9213(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F900121(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F900122(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F900150(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F900172(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F900173(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F900174(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F900175(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F900210(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F900212(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F900213(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F900230(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F900240(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F900260(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F900281(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F900282(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F900283(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
*/
int F930001(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F930002(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F930003(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F930004(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F930005(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F930006(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F930007(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F930008(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F930009(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F930010(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F930011(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F930012(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F930013(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F930014(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F930015(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F930016(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F930017(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F930018(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F930019(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F930020(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F930021(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F930022(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F930031(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F930033(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F930034(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F930036(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F930037(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F930039(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F930046(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F930051(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F930052(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F930053(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F930054(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F930055(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F930056(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F930057(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F930058(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F930060(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F930061(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F930066(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F930068(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F930071(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F930098(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F930099(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F930101(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F930123(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F930203(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F940005(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F940031(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F950001(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F950002(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F950003(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F950004(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F950005(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F950006(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F950007(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F950008(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F950009(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F950010(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F950029(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F950031(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F950032(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F950035(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F950036(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F950037(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F950040(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F950041(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F950043(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F950044(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F950049(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F950050(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F950051(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F950052(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F950053(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F950055(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F950056(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F950065(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F950070(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F950072(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F950073(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F950074(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F950099(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F950156(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F950100(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F950101(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F950102(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F950103(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F950105(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F950106(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F950107(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F950156(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F950990(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F950996(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F950997(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F950998(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
int F950999(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);
/*

*/

/* 门禁后台功能号定义 */
/**************************************************************************/
int F849021(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);


// 通用前置机功能

//int FGetFile(TRUSERID *handle,int iRequest,ST_PACK *rPack,int *pRetCode,char *szMsg);

///////////////////////////////////////////////////////////////////////////////////

// 下面数据表为本业务处理单元能处理的所有合法业务处理过程及其相关参数
TBDefine g_XBDefines[]=
{
    /*
    INSERT_FUNCTION(1010,FTestIReply,"最快速的处理，用于测试速度","CYH Demo",1)
    INSERT_FUNCTION(1011,FTestBCCShm,"用于测试BCCSHM速度","CYH Demo",1)
    INSERT_FUNCTION(1012,FTestBUShm,"用于测试BUSHM速度","CYH Demo",1)
    INSERT_FUNCTION(1013,FBCCShmMultiRows,"用于测试BCCSHM的多包返回及其工作","CYH Demo",1)
    INSERT_FUNCTION(1014,FBCCShmGetRecord,"读取BCCSHM共享内存中的数据","CYH Demo",1)
    INSERT_FUNCTION(1015,FBCCShmSetRecord,"读取共享内存中的数据返回给客户端，将请求包中的值设置到共享内存中","CYH Demo",1)
    INSERT_FUNCTION(1016,FTestBCCIntCall,"用功能号1013测试BCC的IntCall/IntCallNext、RACall/RACallNext的功能","CYH Demo",1)
    INSERT_FUNCTION(1017,FTestBCCIntTransfer,"用功能号1013测试BCC的IntTransfer、RATransfer的功能","CYH Demo",1)
    INSERT_FUNCTION(1018,FTestBCCExtCall,"用1013功能测试外调功能ExtCall/ExtCallNext","CYH Demo",1)
    INSERT_FUNCTION(1019,FTestBCCExtTransfer,"用1013功能测试外部转发请求ExtTransfer","CYH Demo",1)
    INSERT_FUNCTION(1020,FTestPushData,"用1010功能来测试推送功能PushData","CYH Demo",2)
    INSERT_FUNCTION(1021,FTestBURunTime,"测试BCC中对BU组中的MAXRUNTIME是否如说明起作用","CYH Demo",3)
    INSERT_FUNCTION(1025,FGetBaseOperTimes,"检查1013中在不同平台下各个操作的耗时分时时间","CYH TEST",3)
    INSERT_FUNCTION(1030,FPTestExtCall,"用1010测试ExtCall的速度","CYH Demo",1)
    INSERT_FUNCTION(1031,FPTestIntCall,"用1010测试IntCall/RACall的速度","CYH Demo",1)
    INSERT_FUNCTION(1032,FPTestExtTransfer,"用1010测试ExtTransfer的速度","CYH Demo",1)
    INSERT_FUNCTION(1033,FPTestIntTransfer,"用1010测试IntTransfer/RATransfer的速度","CYH Demo",1)
    INSERT_FUNCTION(9990,FGetFile,"从BU端下载文件","CYH Demo",3)
  */
    INSERT_FUNCTION(240157 ,F240157, "xxx", "wj", 1)
    INSERT_FUNCTION(200000 ,F200000, "xxx", "wj", 1)
    INSERT_FUNCTION(200001 ,F200001, "xxx", "wj", 1)
    INSERT_FUNCTION(240000 ,F240000, "xxx", "wj", 1)
    INSERT_FUNCTION(240001 ,F240001, "xxx", "wj", 1)
    INSERT_FUNCTION(240002 ,F240002, "xxx", "wj", 1)
    INSERT_FUNCTION(240003 ,F240003, "xxx", "wj", 1)
    INSERT_FUNCTION(240004 ,F240004, "xxx", "wj", 1)
    INSERT_FUNCTION(240005 ,F240005, "xxx", "wj", 1)
    INSERT_FUNCTION(240006 ,F240006, "xxx", "wj", 1)
    INSERT_FUNCTION(240007 ,F240007, "xxx", "wj", 1)
    INSERT_FUNCTION(240008 ,F240008, "xxx", "wj", 1)
    INSERT_FUNCTION(240009 ,F240009, "xxx", "wj", 1)
    INSERT_FUNCTION(240010 ,F240010, "xxx", "wj", 1)
    INSERT_FUNCTION(240011 ,F240011, "xxx", "wj", 1)
    INSERT_FUNCTION(240020 ,F240020, "xxx", "wj", 1)
    INSERT_FUNCTION(240021 ,F240021, "xxx", "wj", 1)
    INSERT_FUNCTION(240022 ,F240022, "xxx", "wj", 1)
    INSERT_FUNCTION(240023 ,F240023, "xxx", "wj", 1)
    INSERT_FUNCTION(240024 ,F240024, "xxx", "wj", 1)
    INSERT_FUNCTION(240031 ,F240031, "对账单查询", "wj", 1)
    INSERT_FUNCTION(240032 ,F240032, "对账单处理", "wj", 1)
    INSERT_FUNCTION(240033 ,F240033, "对账单明细查询", "wj", 1)
    INSERT_FUNCTION(240034 ,F240034, "对账单明细处理", "wj", 1)
    INSERT_FUNCTION(700000 ,F700000, "xxx", "wj", 1)
    INSERT_FUNCTION(700001 ,F700001, "xxx", "wj", 1)
    INSERT_FUNCTION(700002 ,F700002, "xxx", "wj", 1)
//  INSERT_FUNCTION(800202 ,F800202, "xxx", "wj", 1)
//  INSERT_FUNCTION(800203 ,F800203, "xxx", "wj", 1)
//  INSERT_FUNCTION(800701 ,F800701, "xxx", "wj", 1)
//  INSERT_FUNCTION(800703 ,F800703, "xxx", "wj", 1)
//  INSERT_FUNCTION(800704 ,F800704, "xxx", "wj", 1)
//  INSERT_FUNCTION(800742 ,F800742, "xxx", "wj", 1)
//  INSERT_FUNCTION(800751 ,F800751, "xxx", "wj", 1)
//  INSERT_FUNCTION(800761 ,F800761, "xxx", "wj", 1)
//  INSERT_FUNCTION(800772 ,F800772, "xxx", "wj", 1)
//  INSERT_FUNCTION(800782 ,F800782, "xxx", "wj", 1)
//  INSERT_FUNCTION(800783 ,F800783, "xxx", "wj", 1)
//  INSERT_FUNCTION(800785 ,F800785, "xxx", "wj", 1)
    INSERT_FUNCTION(820001 ,F820001, "xxx", "wj", 1)
    INSERT_FUNCTION(820002 ,F820002, "xxx", "wj", 1)
    INSERT_FUNCTION(820003 ,F820003, "xxx", "wj", 1)
    INSERT_FUNCTION(820005 ,F820005, "xxx", "wj", 1)
    INSERT_FUNCTION(820101 ,F820101, "xxx", "wj", 1)
    INSERT_FUNCTION(820102 ,F820102, "xxx", "wj", 1)
    INSERT_FUNCTION(820103 ,F820103, "xxx", "wj", 1)
    INSERT_FUNCTION(820105 ,F820105, "设备信息查询", "wj", 1)
    INSERT_FUNCTION(820108 ,F820108, "xxx", "wj", 1)
    INSERT_FUNCTION(820110 ,F820110, "设备文件导入", "wj", 1)
    INSERT_FUNCTION(820111 ,F820111, "xxx", "wj", 1)
    INSERT_FUNCTION(820112 ,F820112, "xxx", "wj", 1)
    INSERT_FUNCTION(820113 ,F820113, "xxx", "wj", 1)
    INSERT_FUNCTION(820114 ,F820114, "xxx", "wj", 1)
    INSERT_FUNCTION(820301 ,F820301, "区域设置", "wj", 1)
    INSERT_FUNCTION(820302 ,F820302, "操作员流水查询", "wj", 1)
    INSERT_FUNCTION(820305 ,F820305, "收费操作员授权", "wj", 1)
    INSERT_FUNCTION(820311 ,F820311, "xxx", "wj", 1)
    INSERT_FUNCTION(820321 ,F820321, "操作员站点设置", "wj", 1)
    INSERT_FUNCTION(820331 ,F820331, "xxx", "wj", 1)
    INSERT_FUNCTION(820332 ,F820332, "xxx", "wj", 1)
    INSERT_FUNCTION(820341 ,F820341, "xxx", "wj", 1)
    INSERT_FUNCTION(820350 ,F820350, "前台注册", "wj", 1)
    INSERT_FUNCTION(820351 ,F820351, "xxx", "wj", 1)
    INSERT_FUNCTION(820352 ,F820352, "xxx", "wj", 1)
//  INSERT_FUNCTION(820356 ,F820356, "xxx", "tc", 1)
    INSERT_FUNCTION(820402 ,F820402, "全局参数修改", "wj", 1)
    INSERT_FUNCTION(820404 ,F820404, "全局参数查询全部", "wj", 1)
    INSERT_FUNCTION(820405 ,F820405, "全局参数查询", "wj", 1)
    INSERT_FUNCTION(820501 ,F820502, "重定向数据字典", "wj", 1)
    INSERT_FUNCTION(820502 ,F820502, "登录时数据字典查询", "wj", 1)
    INSERT_FUNCTION(820511 ,F820511, "xxx", "wj", 1)
    INSERT_FUNCTION(820522 ,F820522, "xxx", "wj", 1)
//  INSERT_FUNCTION(820704 ,F820704, "xxx", "wj", 1)
//  INSERT_FUNCTION(820705 ,F820705, "xxx", "wj", 1)
    INSERT_FUNCTION(841600 ,F841600, "下载照片", "wj", 1)
    INSERT_FUNCTION(841601 ,F841601, "xxx", "wj", 1)
    INSERT_FUNCTION(841602 ,F841602, "客户银行卡管理", "wj", 1)
    INSERT_FUNCTION(841603 ,F841603, "银行卡签约管理", "wj", 1)
    INSERT_FUNCTION(841604 ,F841604 ,"银行卡签约流水管理", "wj", 1)
    INSERT_FUNCTION(841605 ,F841605,"客户信息导入", "wj", 1)
    INSERT_FUNCTION(841609 ,F841609,"批量生成客户号", "wj", 1)
    INSERT_FUNCTION(841610 ,F841610,"客户身份禁用", "wj", 1)
    INSERT_FUNCTION(841700 ,F841700, "xxx", "lx", 1)
    INSERT_FUNCTION(842001 ,F842001, "部门信息设置", "wj", 1)
    INSERT_FUNCTION(842501 ,F842501, "xxx", "wj", 1)
    INSERT_FUNCTION(843335 ,F843335, "xxx", "wj", 1)
    INSERT_FUNCTION(843340 ,F843340, "xxx", "wj", 1)
    INSERT_FUNCTION(843341 ,F843341, "xxx", "wj", 1)
    INSERT_FUNCTION(843342 ,F843342, "xxx", "wj", 1)
    INSERT_FUNCTION(843343 ,F843343, "发行商户卡", "wj", 1)
    INSERT_FUNCTION(843351 ,F843351, "充值商户存款", "wj", 1)
    INSERT_FUNCTION(843355 ,F843355, "充值商户设备添加", "wj", 1)
    INSERT_FUNCTION(843356 ,F843356, "充值商户设备删除", "wj", 1)
    INSERT_FUNCTION(843357 ,F843357, "充值商户设备查询", "wj", 1)
    INSERT_FUNCTION(843358 ,F843358, "充值操作员添加", "wj", 1)
    INSERT_FUNCTION(843359 ,F843359, "充值操作员修改", "wj", 1)
    INSERT_FUNCTION(843360 ,F843360, "充值操作员删除", "wj", 1)
    INSERT_FUNCTION(843361 ,F843361, "充值操作员查询", "wj", 1)
    INSERT_FUNCTION(843362 ,F843362, "充值操作员设备添加", "wj", 1)
    INSERT_FUNCTION(843363 ,F843363, "充值操作员设备删除", "wj", 1)
    INSERT_FUNCTION(843364 ,F843364, "充值操作员设备查询", "wj", 1)
    INSERT_FUNCTION(843370 ,F843370, "设备商户文件导入管理", "wj", 1)
    INSERT_FUNCTION(843371 ,F843371, "设备商户查询", "wj", 1)
    INSERT_FUNCTION(843373 ,F843373, "客户类别设置", "wj", 1)

    INSERT_FUNCTION(845000 ,F845000, "保存CPU卡密钥", "wj", 1)
    INSERT_FUNCTION(845001 ,F845001, "PSAM卡管理", "wj", 1)
    //===================卡库存管理(846***)==========
    INSERT_FUNCTION(846101 ,F846101, "xxx", "lx", 1)
    INSERT_FUNCTION(846102 ,F846102, "xxx", "lx", 1)
    INSERT_FUNCTION(846103 ,F846103, "xxx", "lx", 1)
    INSERT_FUNCTION(846104 ,F846104, "xxx", "lx", 1)
    INSERT_FUNCTION(846105 ,F846105, "xxx", "lx", 1)
    INSERT_FUNCTION(846201 ,F846201, "xxx", "lx", 1)
    INSERT_FUNCTION(846202 ,F846202, "xxx", "lx", 1)
    INSERT_FUNCTION(846106 ,F846106, "xxx", "lx", 1)
    INSERT_FUNCTION(846107 ,F846107, "操作员当前显示卡号查询", "闻剑", 1)
    INSERT_FUNCTION(846108 ,F846108, "操作员卡使用情况查询", "闻剑", 1)
    INSERT_FUNCTION(846109 ,F846109, "操作员现金情况查询", "闻剑", 1)
    INSERT_FUNCTION(846110 ,F846110, "当日商户交易统计查询", "闻剑", 1)
    INSERT_FUNCTION(846111 ,F846111, "卡类别权限设置", "闻剑", 1)
    INSERT_FUNCTION(846112 ,F846112, "科目表查询", "闻剑", 1)
    INSERT_FUNCTION(846115 ,F846115, "卡库不平查询", "闻剑", 1)
    INSERT_FUNCTION(846116 ,F846116, "卡库不平处理", "闻剑", 1)
    INSERT_FUNCTION(846123 ,F846123, "信息查询", "闻剑", 1)
    INSERT_FUNCTION(846130 ,F846130, "新生换卡导入", "闻剑", 1)
    INSERT_FUNCTION(846203 ,F846203, "xxx", "lx", 1)
    INSERT_FUNCTION(846204 ,F846204, "xxx", "lx", 1)
    INSERT_FUNCTION(846205 ,F846205, "商户搭伙费费率设置", "wj", 1)
    INSERT_FUNCTION(846206 ,F846206, "水控水价设置", "wj", 1)
    INSERT_FUNCTION(846210 ,F846210, "充值操作员授权", "tc", 1)
    INSERT_FUNCTION(846301 ,F846301, "一卡通开户", "wj", 1)
    INSERT_FUNCTION(846302 ,F846302, "一卡通开户冲正", "wj", 1)
    INSERT_FUNCTION(846303 ,F846303, "一卡通销户", "wj", 1)
    INSERT_FUNCTION(846305 ,F846305, "一卡通补办", "wj", 1)
    INSERT_FUNCTION(846307 ,F846307, "一卡通挂失解挂", "wj", 1)
    INSERT_FUNCTION(846308 ,F846308, "一卡通冻结解冻", "wj", 1)
    INSERT_FUNCTION(846309 ,F846309, "一卡通坏卡登记", "wj", 1)
    INSERT_FUNCTION(846310 ,F846310, "一卡通回收卡", "wj", 1)
    INSERT_FUNCTION(846311 ,F846311, "CPU卡支付", "wj", 1)
    INSERT_FUNCTION(846312 ,F846312, "柜台充值", "wj", 1)
    INSERT_FUNCTION(846313 ,F846313, "柜台充值", "wj", 1)
    INSERT_FUNCTION(846314 ,F846314, "柜台支取", "wj", 1)
    INSERT_FUNCTION(846315 ,F846315, "交易冲正", "wj", 1)
    INSERT_FUNCTION(846316 ,F846316, "充值冲正", "wj", 1)
    INSERT_FUNCTION(846317 ,F846317, "消费冲正", "wj", 1)
    INSERT_FUNCTION(846318 ,F846318, "多媒体领取补助", "wj", 1)
    INSERT_FUNCTION(846320 ,F846320, "更新卡信息", "wj", 1)
    INSERT_FUNCTION(846321 ,F846321, "换卡", "wj", 1)
    INSERT_FUNCTION(846322 ,F846322, "卡余额调整", "wj", 1)
    INSERT_FUNCTION(846323 ,F846323, "水控补助开水钱包充值", "wj", 1)
    INSERT_FUNCTION(846324 ,F846324, "水控补助开水钱包充值失败处理", "wj", 1)
    INSERT_FUNCTION(846325 ,F846325, "CPU卡换卡", "wj", 1)
    INSERT_FUNCTION(846326 ,F846326, "水控调整", "wj", 1)
    INSERT_FUNCTION(846327 ,F846327, "新生换卡", "wj", 1)
    INSERT_FUNCTION(846328 ,F846328, "卡卡转账", "wj", 1)
    INSERT_FUNCTION(846329 ,F846329, "第三方卡卡转账接口", "wj", 1)
    INSERT_FUNCTION(846330 ,F846330, "第三方收费接口", "wj", 1)
    INSERT_FUNCTION(846331 ,F846331, "电子帐户开户", "wj", 1)
    //INSERT_FUNCTION(846332 ,F846332, "电子帐户销户", "wj", 1)
    INSERT_FUNCTION(846333 ,F846333, "电子帐户充值", "wj", 1)
    //INSERT_FUNCTION(846334 ,F846334, "电子帐户取款", "wj", 1)
    //INSERT_FUNCTION(846335 ,F846335, "电子帐户止付解付", "wj", 1)
    INSERT_FUNCTION(846336 ,F846336, "电子钱包转账", "wj", 1)
    //INSERT_FUNCTION(846337 ,F846337, "电子钱包密码修改", "wj", 1)
    //INSERT_FUNCTION(846338 ,F846338, "电子钱包密码重置", "wj", 1)
	//INSERT_FUNCTION(846339 ,F846339, "电子钱包激活", "nlh", 1)
	INSERT_FUNCTION(846340 ,F846340, "电子钱包第三方扣款", "nlh", 1)
	INSERT_FUNCTION(846341 ,F846341, "电子钱包第三方扣款冲正", "nlh", 1)
    INSERT_FUNCTION(846401 ,F846401, "POS流水文件导入", "wj", 1)
    INSERT_FUNCTION(846402 ,F846402, "POS流水录入增删改查", "wj", 1)
    INSERT_FUNCTION(846403 ,F846403, "POS流水录入审核", "wj", 1)
    INSERT_FUNCTION(846404 ,F846404, "POS异常流水管理", "wj", 1)
    INSERT_FUNCTION(846405 ,F846405, "水控费率卡管理", "tc", 1)
    INSERT_FUNCTION(846501 ,F846501, "网点设置", "wj", 1)
    INSERT_FUNCTION(846502 ,F846502, "交易收费配置", "wj", 1)
    INSERT_FUNCTION(846600 ,F846600, "开户客户信息查询", "wj", 1)
    INSERT_FUNCTION(846601 ,F846601, "手续费查询", "wj", 1)
    INSERT_FUNCTION(846602 ,F846602, "已开户客户信息查询", "wj", 1)
    INSERT_FUNCTION(846603 ,F846603, "电子钱包已开户客户信息查询", "wj", 1)
    INSERT_FUNCTION(846605 ,F846605, "卡交易流水查询", "wj", 1)
    INSERT_FUNCTION(846606 ,F846606, "帐户交易明细查询", "wj", 1)
    INSERT_FUNCTION(846701 ,F846701, "科目余额表查询", "wj", 1)
    INSERT_FUNCTION(846702 ,F846702, "系统统计表查询", "wj", 1)
    INSERT_FUNCTION(846703 ,F846703, "操作员现金报表查询", "wj", 1)
    INSERT_FUNCTION(846704 ,F846704, "操作员卡分类报表查询", "wj", 1)
    INSERT_FUNCTION(846705 ,F846705, "科目总账表查询", "wj", 1)
    INSERT_FUNCTION(846706 ,F846706, "商户结算报表查询", "wj", 1)
    INSERT_FUNCTION(846707 ,F846707, "商户POS结算报表查询", "wj", 1)
    INSERT_FUNCTION(846708 ,F846708, "商户POS餐次结算报表查询", "wj", 1)
    INSERT_FUNCTION(846709 ,F846709, "商户汇总结算表查询", "wj", 1)
    INSERT_FUNCTION(846710 ,F846710, "商户餐次汇总结算表查询", "wj", 1)
    INSERT_FUNCTION(846711 ,F846711, "操作员票据现金汇总表查询", "wj", 1)
    INSERT_FUNCTION(846712 ,F846712, "商户搭伙费汇总表查询", "wj", 1)
    INSERT_FUNCTION(846713 ,F846713, "操作员销户现金汇总表查询", "wj", 1)
    INSERT_FUNCTION(846714 ,F846714, "商户营业报表查询", "wj", 1)
    INSERT_FUNCTION(846715 ,F846715, "操作员业务统计报表", "wj", 1)
    INSERT_FUNCTION(846716 ,F846716, "操作员现金汇总报表", "wj", 1)
    INSERT_FUNCTION(846717 ,F846717, "充值商户汇总结算表", "wj", 1)
    INSERT_FUNCTION(846718 ,F846718, "充值商户明细报表", "wj", 1)
    INSERT_FUNCTION(846719 ,F846719, "操作员当日分类统计表", "wj", 1)
    INSERT_FUNCTION(846720 ,F846720, "商户解款余额查询", "wj", 1)
    INSERT_FUNCTION(846721 ,F846721, "商户解款", "wj", 1)
    INSERT_FUNCTION(846722 ,F846722, "商户解款明细查询", "wj", 1)
    INSERT_FUNCTION(846723 ,F846723, "车载报表一", "xlh", 1)
    INSERT_FUNCTION(846724 ,F846724, "车载报表二", "xlh", 1)
    INSERT_FUNCTION(846725 ,F846725, "车载报表三", "xlh", 1)
    INSERT_FUNCTION(846726 ,F846726, "车载报表四", "xlh", 1)
    INSERT_FUNCTION(846727 ,F846727, "收支平衡报表", "xlh", 1)
    INSERT_FUNCTION(846728 ,F846728, "测试", "czk", 1)
    INSERT_FUNCTION(847102 ,F847102, "卡密码修改", "wj", 1)
    INSERT_FUNCTION(847111 ,F847111, "卡密码修改", "wj", 1)
    INSERT_FUNCTION(847127 ,F847127, "手工借贷", "wj", 1)
    INSERT_FUNCTION(847128 ,F847128, "小钱包冲正", "xlh", 1)
    INSERT_FUNCTION(847129 ,F847129, "补助冲正", "xlh", 1)
    INSERT_FUNCTION(847130 ,F847130, "补助信息导入", "wj", 1)
    INSERT_FUNCTION(847131 ,F847131, "补助信息查询", "wj", 1)
    INSERT_FUNCTION(847150 ,F847150, "帐户查询", "wj", 1)
    INSERT_FUNCTION(847132 ,F847132, "下发补助", "wj", 1)
    INSERT_FUNCTION(847133 ,F847133, "网银补助", "wj", 1)
    INSERT_FUNCTION(847136 ,F847136, "商户卡回收", "wj", 1)
    INSERT_FUNCTION(847137 ,F847137, "商户卡查询", "wj", 1)
    INSERT_FUNCTION(847150 ,F847150, "帐户查询", "wj", 1)
    INSERT_FUNCTION(847166 ,F847166, "消费机与LANPORT查询", "wj", 1)
    INSERT_FUNCTION(847173 ,F847173, "卡信息查询", "wj", 1)
    INSERT_FUNCTION(847185 ,F847185, "圈存补帐", "wj", 1)
    INSERT_FUNCTION(847198 ,F847198, "收费类别配置", "wj", 1)
    INSERT_FUNCTION(847226 ,F847226, "发行授权卡", "wj", 1)
    INSERT_FUNCTION(847227 ,F847227, "回收授权卡", "wj", 1)
    INSERT_FUNCTION(847228 ,F847228, "回收授权卡", "wj", 1)
    INSERT_FUNCTION(847229 ,F847229, "回收授权卡", "wj", 1)
    INSERT_FUNCTION(847230 ,F847230, "回收授权卡", "wj", 1)
    INSERT_FUNCTION(847231 ,F847231, "回收授权卡", "wj", 1)
    INSERT_FUNCTION(847302 ,F847302, "水控补写卡", "wj", 1)
    INSERT_FUNCTION(847310 ,F847310, "卡库不平查询", "wj", 1)
    INSERT_FUNCTION(847316 ,F847316, "第三方支付测试", "tc", 1)
    INSERT_FUNCTION(847317 ,F847317, "第三方支付成功", "tc", 1)
    INSERT_FUNCTION(847318 ,F847318, "外接系统挂失", "wj", 1)
    INSERT_FUNCTION(847319 ,F847319, "移动对账查询", "wj", 1)
    INSERT_FUNCTION(847320 ,F847320, "修改对账状态", "wj", 1)
    INSERT_FUNCTION(847321 ,F847321, "移动对账", "wj", 1)
    //INSERT_FUNCTION(847401 ,F847401, "移动对账", "xlh", 1)
    INSERT_FUNCTION(848004 ,F848004, "手持机名单下发", "wj", 1)
    INSERT_FUNCTION(848021 ,F848021, "门禁时间周管理", "wj", 1)
    INSERT_FUNCTION(848250 ,F848250, "门禁时间段管理", "wj", 1)
    INSERT_FUNCTION(848251 ,F848251, "门禁时间段管理", "wj", 1)
    INSERT_FUNCTION(848252 ,F848252, "门禁时间段管理", "wj", 1)
    INSERT_FUNCTION(848254 ,F848254, "门禁时间段明细查询", "wj", 1)
    INSERT_FUNCTION(848255 ,F848255, "门禁节假日管理", "wj", 1)
    INSERT_FUNCTION(848256 ,F848256, "门禁时间段管理", "wj", 1)
    INSERT_FUNCTION(848257 ,F848257, "门禁组管理", "wj", 1)
    INSERT_FUNCTION(848258 ,F848258, "门禁组门禁机管理", "wj", 1)
    INSERT_FUNCTION(848259 ,F848259, "门禁机权限管理", "wj", 1)
    INSERT_FUNCTION(848260 ,F848260, "门禁组权限管理", "wj", 1)
    INSERT_FUNCTION(848264 ,F848264, "门禁机操作员查询", "wj", 1)
    INSERT_FUNCTION(848265 ,F848265, "门禁组操作员查询", "wj", 1)
    INSERT_FUNCTION(848266 ,F848266, "门禁节假日详细查询", "wj", 1)
    INSERT_FUNCTION(848267 ,F848267, "门禁名单分配", "wj", 1)
    INSERT_FUNCTION(848268 ,F848268, "门禁名单删除", "wj", 1)
    INSERT_FUNCTION(848269 ,F848269, "已分配人员查询", "wj", 1)
    INSERT_FUNCTION(848270 ,F848270, "门禁流水查询", "wj", 1)
    INSERT_FUNCTION(848273 ,F848273, "常开时间段设置", "wj", 1)
    INSERT_FUNCTION(847232 ,F847232, "通用前置机参数设置", "wj", 1)
    INSERT_FUNCTION(849001 ,F849001, "消费终端登录", "tc", 1)
    INSERT_FUNCTION(849002 ,F849002, "消费终端查询客户", "tc", 1)
    INSERT_FUNCTION(849003 ,F849003, "pos联机充值", "wj", 1)
    INSERT_FUNCTION(849004 ,F849004, "pos联机充值冲正", "wj", 1)
    INSERT_FUNCTION(849005 ,F849005, "pos联机充值授权", "wj", 1)
    INSERT_FUNCTION(849006 ,F849006, "pos联机领取补助", "wj", 1)
    INSERT_FUNCTION(849007 ,F849007, "前置机下载补助名单", "wj", 1)
    INSERT_FUNCTION(850000 ,F850000, "请求交易参考号", "wj", 1)
    INSERT_FUNCTION(850001 ,F850001, "交易撤销", "wj", 1)
    INSERT_FUNCTION(850002 ,F850002, "写卡异常处理", "wj", 1)
    INSERT_FUNCTION(850003 ,F850003, "CPU读卡器签到", "wj", 1)
    INSERT_FUNCTION(850004 ,F850004, "第三方用户登录", "wj", 1)
    INSERT_FUNCTION(850005 ,F850005, "支付-账户查询", "wj", 1)
    INSERT_FUNCTION(850006 ,F850006, "支付-支付交易", "wj", 1)
    INSERT_FUNCTION(850007 ,F850007, "充值机充值", "wj", 1)
    INSERT_FUNCTION(850010 ,F850010, "水控转账", "wj", 1)
    INSERT_FUNCTION(850011 ,F850011, "后付费补扣", "tc", 1)
    INSERT_FUNCTION(850012 ,F850012, "水控流水查询", "tc", 1)
    INSERT_FUNCTION(850020 ,F850020, "水控充值", "wj", 1)
    INSERT_FUNCTION(860001 ,F860001, "CPU卡流水采集", "wj", 1)
/*
    INSERT_FUNCTION(900212 ,F900212, "圈存分校区结算表", "wj", 1)
    INSERT_FUNCTION(900213 ,F900213, "水控分校区结算表", "wj", 1)
    INSERT_FUNCTION(9121 ,F900121, "旧报表-科目交易情况表查询", "wj", 1)
    INSERT_FUNCTION(9122 ,F900122, "旧报表-交易科目情况表查询", "wj", 1)
    INSERT_FUNCTION(9150 ,F900150, "旧报表-操作员汇总表查询", "wj", 1)
    INSERT_FUNCTION(9172 ,F900172, "旧报表-商户结算表(一)查询", "wj", 1)
    INSERT_FUNCTION(9173 ,F900173, "旧报表-商户结算表(三)查询", "wj", 1)
    INSERT_FUNCTION(9174, F900174, "旧报表-普通商户营业结算表", "wj", 1)
    INSERT_FUNCTION(9175, F900175, "旧报表-普通商户营业结算表", "wj", 1)
    INSERT_FUNCTION(9210 ,F900210, "旧报表-银行转账对账表查询", "wj", 1)
    INSERT_FUNCTION(9212 ,F9212, "旧报表-银行转账对账表二查询", "wj", 1)
    INSERT_FUNCTION(9213 ,F9213, "旧报表-水控分校区结算表", "wj", 1)
    INSERT_FUNCTION(9230 ,F900230, "旧报表-科目余额表查询", "wj", 1)
    INSERT_FUNCTION(9240 ,F900240, "旧报表-POS充值情况表查询", "wj", 1)
    INSERT_FUNCTION(9260 ,F900260, "旧报表-操作员卡片使用情况查询", "wj", 1)
    INSERT_FUNCTION(9281 ,F900281, "旧报表-操作员现金报表查询", "wj", 1)
    INSERT_FUNCTION(9282 ,F900282, "旧报表-充值商户明细报表查询", "wj", 1)
    INSERT_FUNCTION(9283 ,F900283, "旧报表-充值商户汇总报表", "wj", 1)
*/
    INSERT_FUNCTION(930001 ,F930001, "39", "wj", 1)
    INSERT_FUNCTION(930002 ,F930002, "39", "wj", 1)
    INSERT_FUNCTION(930003 ,F930003, "39", "wj", 1)
    INSERT_FUNCTION(930004 ,F930004, "39", "wj", 1)
    INSERT_FUNCTION(930005 ,F930005, "39", "wj", 1)
    INSERT_FUNCTION(930006 ,F930006, "39", "wj", 1)
    INSERT_FUNCTION(930007 ,F930007, "39", "wj", 1)
    INSERT_FUNCTION(930008 ,F930008, "39", "wj", 1)
    INSERT_FUNCTION(930009 ,F930009, "39", "wj", 1)
    INSERT_FUNCTION(930010 ,F930010, "39", "wj", 1)
    INSERT_FUNCTION(930011 ,F930011, "39", "wj", 1)
    INSERT_FUNCTION(930012 ,F930012, "39", "wj", 1)
    INSERT_FUNCTION(930013 ,F930013, "39", "wj", 1)
    INSERT_FUNCTION(930014 ,F930014, "39", "wj", 1)
    INSERT_FUNCTION(930015 ,F930015, "39", "wj", 1)
    INSERT_FUNCTION(930016 ,F930016, "39", "wj", 1)
    INSERT_FUNCTION(930017 ,F930017, "39", "wj", 1)
    INSERT_FUNCTION(930018 ,F930018, "39", "wj", 1)
    INSERT_FUNCTION(930019 ,F930019, "39", "wj", 1)
    INSERT_FUNCTION(930020 ,F930020, "39", "wj", 1)
    INSERT_FUNCTION(930021 ,F930021, "39", "wj", 1)
    INSERT_FUNCTION(930022 ,F930022, "39", "wj", 1)
    INSERT_FUNCTION(930031 ,F930031, "前置机上传消费流水", "wj", 1)
    INSERT_FUNCTION(930033 ,F930033, "前置机上传补助流水", "wj", 1)
    INSERT_FUNCTION(930034 ,F930034, "前置机上传充值流水", "wj", 1)
    INSERT_FUNCTION(930036 ,F930036, "前置机上传充值管理费流水", "wj", 1)
    INSERT_FUNCTION(930037 ,F930037, "前置机下载设备档案", "wj", 1)
    INSERT_FUNCTION(930039 ,F930039, "前置机下载黑名单", "wj", 1)
    INSERT_FUNCTION(930046 ,F930046, "更新设备黑名单版本", "wj", 1)
    INSERT_FUNCTION(930051 ,F930051, "前置机预注册", "wj", 1)
    INSERT_FUNCTION(930052 ,F930052, "前置机签到", "wj", 1)
    INSERT_FUNCTION(930053 ,F930053, "前置机签退", "wj", 1)
    INSERT_FUNCTION(930054 ,F930054, "设备签到", "wj", 1)
    INSERT_FUNCTION(930055 ,F930055, "设备签退", "wj", 1)
    INSERT_FUNCTION(930056 ,F930056, "下传设备监控参数", "wj", 1)
    INSERT_FUNCTION(930057 ,F930057, "上传设备监控参数", "wj", 1)
    INSERT_FUNCTION(930058 ,F930058, "上传设备监控参数", "wj", 1)
    INSERT_FUNCTION(930060 ,F930060, "强制设备签退", "wj", 1)
    INSERT_FUNCTION(930061 ,F930061, "下传累计密码启用金额", "wj", 1)
    INSERT_FUNCTION(930066 ,F930066, "水控下载黑名单", "wj", 1)
    INSERT_FUNCTION(930068 ,F930068, "定时水控下载黑名单", "wj", 1)
    INSERT_FUNCTION(930071 ,F930071, "设备应答", "wj", 1)
    INSERT_FUNCTION(930098 ,F930098, "三九指令应答", "wj", 1)
    INSERT_FUNCTION(930099 ,F930099, "三九指令请求", "wj", 1)
    INSERT_FUNCTION(930101 ,F930101, "三九采集考勤流水", "wj", 1)
    INSERT_FUNCTION(930123 ,F930123, "汉军GCU 查询所有门人员名单", "wj", 1)
    INSERT_FUNCTION(930203 ,F930203, "上送门禁流水", "wj", 1)
    INSERT_FUNCTION(940005 ,F940005, "子系统名单同步查询", "wj", 1)
    INSERT_FUNCTION(940031 ,F940031, "车载流水采集", "xlh", 1)
    INSERT_FUNCTION(950001 ,F950001, "通用前置机签到", "wj", 1)
    INSERT_FUNCTION(950002 ,F950002, "通用前置机下载设备运行参数", "wj", 1)
    INSERT_FUNCTION(950003 ,F950003, "通用前置机下载汇多设备档案", "wj", 1)
    INSERT_FUNCTION(950004 ,F950004, "通用前置机", "wj", 1)
    INSERT_FUNCTION(950005 ,F950005, "通用前置机", "wj", 1)
    INSERT_FUNCTION(950006 ,F950006, "通用前置机", "wj", 1)
    INSERT_FUNCTION(950007 ,F950007, "通用前置机", "wj", 1)
    INSERT_FUNCTION(950008 ,F950008, "通用前置机", "wj", 1)
    INSERT_FUNCTION(950009 ,F950009, "通用前置机", "wj", 1)
    INSERT_FUNCTION(950010 ,F950010, "通用前置机", "wj", 1)
    INSERT_FUNCTION(950029 ,F950029, "通用前置机", "wj", 1)
    INSERT_FUNCTION(950031 ,F950031, "通用前置机", "wj", 1)
    INSERT_FUNCTION(950032 ,F950032, "联机POS签到", "wj", 1)
    INSERT_FUNCTION(950035 ,F950035, "批量下载子系统黑名单", "nlh", 1)
    INSERT_FUNCTION(950036 ,F950036, "考勤记录上传", "nlh", 1)
    INSERT_FUNCTION(950037 ,F950037, "新开普用户卡", "nlh", 1)
    INSERT_FUNCTION(950040 ,F950040, "通用前置机", "wj", 1)
    INSERT_FUNCTION(950041 ,F950041, "下发搭伙费1", "wj", 1)
    INSERT_FUNCTION(950043 ,F950043, "下发搭伙费2", "wj", 1)
    INSERT_FUNCTION(950044 ,F950044, "下发水控费率", "tc", 1)
    INSERT_FUNCTION(950049 ,F950049, " m1卡 POS机签到,下载工作密钥", "nlh", 1)
    INSERT_FUNCTION(950050 ,F950050, "cpu卡功能", "tc", 1)
    INSERT_FUNCTION(950051 ,F950051, "cpu卡功能", "tc", 1)
    INSERT_FUNCTION(950052 ,F950052, "cpu卡功能", "tc", 1)
    INSERT_FUNCTION(950053 ,F950053, "cpu卡功能", "tc", 1)
    INSERT_FUNCTION(950055 ,F950055, "cpu卡功能", "tc", 1)
    INSERT_FUNCTION(950056 ,F950056, "cpu卡功能", "tc", 1)
    INSERT_FUNCTION(950065 ,F950065, "cpu卡功能", "tc", 1)
    INSERT_FUNCTION(950070 ,F950070, "充值机签到", "tc", 1)
    INSERT_FUNCTION(950071 ,F930071, "设备应答", "wj", 1)
    INSERT_FUNCTION(950072 ,F950072, "充值机充值请求", "tc", 1)
    INSERT_FUNCTION(950073 ,F950073, "充值机充值冲正请求", "tc", 1)
    INSERT_FUNCTION(950074 ,F950074, "操作员充值机充值查询", "tc", 1)
    INSERT_FUNCTION(950099 ,F950099, "通用前置机", "wj", 1)
    INSERT_FUNCTION(950150 ,F950050, "鑫三强POS机签到", "tc", 1)
    INSERT_FUNCTION(950155 ,F950055, "鑫三强交易流水上传", "tc", 1)
    INSERT_FUNCTION(950156 ,F950156, "鑫三强交易流水批上送", "tc", 1)
    INSERT_FUNCTION(950100 ,F950100, "通用前置机", "wj", 1)
    INSERT_FUNCTION(950101 ,F950101, "通用前置机", "wj", 1)
    INSERT_FUNCTION(950102 ,F950102, "通用前置机", "wj", 1)
    INSERT_FUNCTION(950103 ,F950103, "重庆城管门禁前置使用的下发名单功能号", "wyb", 1)
    INSERT_FUNCTION(950105 ,F950105, "通用前置机", "tc", 1)
    INSERT_FUNCTION(950106 ,F950106, "下载管理卡", "tc", 1)
    INSERT_FUNCTION(950107 ,F950107, "设备更换", "tc", 1)
    INSERT_FUNCTION(950990 ,F950990, "下载照片", "wj", 1)
    INSERT_FUNCTION(950996 ,F950996, "黑名单文件", "tc", 1)
    INSERT_FUNCTION(950997 ,F950997, "圈存对账", "wj", 1)
    INSERT_FUNCTION(950998 ,F950998, "下载文件", "wj", 1)
    INSERT_FUNCTION(950999 ,F950999, "上传文件", "wj", 1)
    //===============================================
    /*
    */
    /* 门禁功能号定义 */
    /********************************/
//  INSERT_FUNCTION(849020 ,F849020, "xxx", "tc", 1)
//  INSERT_FUNCTION(849021 ,F849021, "xxx", "tc", 1)

    INSERT_FUNCTION(0,NULL,"END BPFunctions List","CYH Marked",0)  // the last mark line，Don't remove this line
};
#endif
