/*==============================================================*/
/* DBMS name:      ORACLE Version 10g                           */
/* Created on:     2007-5-14 15:14:18                           */
/*==============================================================*/

/*
drop tablespace TS_YKT_CUR including contents cascade constraints;
drop tablespace TS_YKT_HIS including contents cascade constraints;
drop tablespace TS_YKT_MON including contents cascade constraints;
drop tablespace TS_YKT_WEB including contents cascade constraints;
drop tablespace TS_YKT_PHOTO including contents cascade constraints;
*/

create tablespace TS_YKT_CUR
datafile 
'/home/oracle/oradata/orcl/ts_yktcur.dbf' size 10M reuse  autoextend on  next 10M  maxsize 20000M
logging
extent management  local  autoallocate
segment space management auto
flashback on;

create tablespace TS_YKT_WEB
datafile  
'/home/oracle/oradata/orcl/ts_yktweb.dbf' size 10M reuse  autoextend on  next 10M  maxsize 20000M
logging
extent management  local  autoallocate
segment space management auto
flashback on;
create tablespace TS_YKT_PHOTO
datafile  
'/home/oracle/oradata/orcl/ts_yktphoto.dbf' size 10M reuse  autoextend on  next 10M  maxsize 20000M
logging
extent management  local  autoallocate
segment space management auto
flashback on;

create tablespace TS_YKT_HIS
datafile  
'/home/oracle/oradata/orcl/ts_ykthis01.dbf' size 10M reuse  autoextend on  next 10M  maxsize 20000M,
'/home/oracle/oradata/orcl/ts_ykthis02.dbf' size 10M reuse  autoextend on  next 10M  maxsize 20000M,
'/home/oracle/oradata/orcl/ts_ykthis03.dbf' size 10M reuse  autoextend on  next 10M  maxsize 20000M,
'/home/oracle/oradata/orcl/ts_ykthis04.dbf' size 10M reuse  autoextend on  next 10M  maxsize 20000M,
'/home/oracle/oradata/orcl/ts_ykthis05.dbf' size 10M reuse  autoextend on  next 10M  maxsize 20000M
logging
extent management  local  autoallocate
segment space management auto
flashback on;
