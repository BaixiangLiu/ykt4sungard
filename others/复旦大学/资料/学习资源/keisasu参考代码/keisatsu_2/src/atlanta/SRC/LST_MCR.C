/*************************************************************************
*	System		: SAKAKI
*	File Name	: LST_MCR.C
*	Author		: 桑原 美紀
*	Date		: 1998/05/19
*	RealTimeOS	: ＲＩＳＣ（ＳＨ７０４３）モニター
*	Description	: キーマクロコメントリスト
*	Maintenance	: 
*
*	Copyright (C) 1996 Murata Machinery,Ltd. All rights reserved.
*************************************************************************/
#include	"\src\atlanta\define\product.h"
#include	"\src\atlanta\define\apl_msg.h"
#include	"\src\atlanta\define\std.h"
#include	"\src\atlanta\define\sysmailb.h"

#include	"\src\atlanta\define\cmn_def.h"
#include	"\src\atlanta\define\lst_def.h"

#include	"\src\atlanta\define\cmn_pro.h"
#include	"\src\atlanta\define\lst_pro.h"

#include	"\src\atlanta\ext_v\bkupram.h"
#include	"\src\atlanta\ext_v\lst_data.h"
#include	"\src\atlanta\ext_v\lst_wrd.h"

#if	( PRO_PANEL == ANK )
#include "\src\atlanta\opr\ank\define\opr_def.h"
#endif
#if	( PRO_PANEL == KANJI )
#include "\src\atlanta\opr\kanji\define\opr_def.h"
#endif


#if (PRO_KEY_MACRO == ENABLE)	/* 1998/06/24 By M.Kuwahara */
/*************************************************************************
	module		:[キーマクロコメントリスト]
	function	:[キーマクロコメントリストを印刷する]
	common		:[
		List		:
		SYB_KeyMacro
	]
	condition	:[]
	commment	:[]
	return		:[印刷結果]
	machine		:[SH7043]
	language	:[SHC]
	keyword		:[LST]
	date		:[98/05/19]
	author		:[桑原美紀]
*************************************************************************/
WORD				Print_KeyMacro_List(
						 void )				/*なし*/
{
	UBYTE	i;						/*loop*/
	register WORD	ret;					/*実行結果*/

	/*ﾃﾞｰﾀなしﾁｪｯｸ*/
	for ( i = 0; i < SYS_KEYMACRO_MAX; i++ ) {
		if (( SYB_KeyMacro[i].Step[0] != 0xFF ) ||	
			( SYB_KeyMacro[i].Title[0] != 0x00)) {
			break;
		}
	}
	if ( i == SYS_KEYMACRO_MAX ) {
		return ( MSG_PRN_LST_NO_LIST );
	}

	if ( (ret = CharacterPrint( LST_OPEN )) != OK ) {
		return ( ret );
	}

	/*１改行＋発信元名、番号印刷＋２改行＋見出し＋１改行*/
#if ( PRO_PANEL == KANJI ) || ( PRO_JIS_CODE == ENABLE )
		if ( (ret = Print_Head1_Common( PWRD_KeyMacroList_K, LST_NOT, 23-1 )) != OK ) {
			return ( ret );
		}
#else
	if ( (ret = Print_Head1_Common( PWRD_KeyMacroList, LST_XXX_TWI_XXX, 18-1 )) != OK ) {
		return ( ret );
	}
#endif

	/*現在時間*/
	if ( (ret = CurrentTimePrint( 42-1 )) != OK ) {
		return ( ret );
	}

	/*�ｮ�｢�ﾎ�｢�｢�｢�｢�｢�ｲ*/
	Print_KeyMacroList_Line( 0, List.S.Print, List.S.Attribute );
	if ( (ret = CharacterPrint( LST_PRINT )) != OK ) {
		return ( ret );
	}

	/*�､ No.�､  ﾀｲﾄﾙ   �､*/
	Print_KeyMacroList_Line( 1, List.S.Print, List.S.Attribute );
	if ( (ret = CharacterPrint( LST_PRINT )) != OK ) {
		return ( ret );
	}

	for ( i = 0; i < SYS_KEYMACRO_MAX; i++ ) {
		if (( SYB_KeyMacro[i].Step[0] != 0xFF ) ||	/* ステップかコメントが登録されている時 */
			( SYB_KeyMacro[i].Title[0] != 0x00 )) {
			/*�ｾ�｢�｢�ﾞ�｢�｢�｢�ﾆ*/
			Print_KeyMacroList_Line( 2, List.S.Print, List.S.Attribute );
			if ( (ret = CharacterPrint( LST_PRINT )) != OK ) {
				return ( ret );
			}

			/*�､ 9 �､xxxxxx�､*/
			Prn_Att_Str_Clear( List.S.Print, List.S.Attribute );
			List.S.Print[19-1] = LST_KLINEI;
#if (PRO_PANEL == ANK)
			List.S.Print[20-1] = '[';
			List.S.Print[23-1] = ']';
			CMN_UnsignedIntToASC( &List.S.Print[21-1], (UWORD)i+26, 2, '0' );
#endif
#if (PRO_PANEL == KANJI)
			List.S.Print[20-1] = LCD_PICFONT;
			List.S.Print[23-1] = LCD_PICFONT_LOWER;
			CMN_UnsignedIntToASC( &List.S.Print[21-1], (UWORD)i+26, 2, '0' );
#endif
			List.S.Print[24-1] = LST_KLINEI;
			if (SYB_KeyMacro[i].Title[0] == 0x00) {		/* タイトル無しの時 */
				AttributeSet( &List.S.Print[25-1], &List.S.Attribute[25-1], PWRD_NoTitle, LST_NOT );
			}
			else{
				CMN_StringCopy(&List.S.Print[25-1], SYB_KeyMacro[i].Title );
			}
			List.S.Print[62-1] = LST_KLINEI;
			if ( (ret = CharacterPrint( LST_PRINT )) != OK ) {
				return ( ret );
			}
		}
	}
	/*�ｶ�｢�｢�ﾖ�｢�｢�｢�｢�ｺ*/
	Print_KeyMacroList_Line( 3, List.S.Print, List.S.Attribute );
	if ( (ret = CharacterPrint( LST_PRINT )) != OK ) {
		return ( ret );
	}

	/*１行印字（改行）*/
	if ( (ret = CharacterPrint( LST_LINE_FEED )) != OK ) {
		return ( ret );
	}

	if ( (ret = CharacterPrint( LST_CLOSE )) != OK ) {
		return ( ret );
	}
	return ( OK );
}

/*************************************************************************
	module		:[キーマクロタイトルリストの横区切り罫線作成]
	function	:[キーマクロタイトルリストの横区切り罫線を作成する。
	common		:[]
	condition	:[]
	commment	:[]
	return		:[印刷結果]
	machine		:[SH7043]
	language	:[SHC]
	keyword		:[LST]
	date		:[98/05/19]
	author		:[桑原美紀]
*************************************************************************/
void			Print_KeyMacroList_Line(
						 UBYTE Category,			/*罫線種類*/
						 register UBYTE *AscString,	/*印刷文字列*/
						 register UBYTE *AttString )/*修飾文字列*/
{
	Prn_Att_Str_Clear( AscString, AttString );
	switch ( Category ) {
		case 0:
			/*�ｮ�｢�ﾎ�｢�｢�｢�｢�｢�ｲ*/
			AscString[19-1] = LST_KLINE7;
			CMN_MemorySet( &AscString[20-1], 43, LST_KLINE_ );
			AscString[24-1] = LST_KLINE8;
			AscString[62-1] = LST_KLINE9;
			break;
		case 1:
			/*�､No.�､  ﾀｲﾄﾙ  �､*/
			AscString[19-1] = LST_KLINEI;
			AttributeSet( &AscString[21-1], &AttString[21-1], PWRD_No, LST_NOT );
			AscString[24-1] = LST_KLINEI;
			AttributeSet( &AscString[40-1], &AttString[40-1], PWRD_Title, LST_NOT );
			AscString[62-1] = LST_KLINEI;
			break;
		case 2:
			/*�ｾ�｢�｢�ﾞ�｢�｢�｢�ﾆ*/
			AscString[19-1] = LST_KLINE4;
			CMN_MemorySet( &AscString[20-1], 43, LST_KLINE_ );
			AscString[24-1] = LST_KLINE5;
			AscString[62-1] = LST_KLINE6;
			break;
		case 3:
			/*�ｶ�｢�｢�ﾖ�｢�｢�｢�｢�ｺ*/
			AscString[19-1] = LST_KLINE1;
			CMN_MemorySet( &AscString[20-1], 43, LST_KLINE_ );
			AscString[24-1] = LST_KLINE2;
			AscString[62-1] = LST_KLINE3;
			break;
	}
}

#endif
