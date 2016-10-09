/*
********************************************************************************************
*
*        Copyright (c):  Fuzhou Rockchip Electronics Co., Ltd
*                             All rights reserved.
*
* FileName: System\Shell\ShellDevCmd.h
* Owner: aaron.sun
* Date: 2015.10.20
* Time: 11:44:42
* Version: 1.0
* Desc: shell device cmd
* History:
*    <author>    <date>       <time>     <version>     <Desc>
*    aaron.sun     2015.10.20     11:44:42   1.0
********************************************************************************************
*/


#ifndef __SYSTEM_SHELL_SHELLDEVCMD_H__
#define __SYSTEM_SHELL_SHELLDEVCMD_H__

/*
*---------------------------------------------------------------------------------------------------------------------
*
*                                                   #include define
*
*---------------------------------------------------------------------------------------------------------------------
*/



/*
*---------------------------------------------------------------------------------------------------------------------
*
*                                                   #define / #typedef define
*
*---------------------------------------------------------------------------------------------------------------------
*/

#define _SYSTEM_SHELL_SHELLDEVCMD_COMMON_  __attribute__((section("system_shell_shelldevcmd_common")))
#define _SYSTEM_SHELL_SHELLDEVCMD_INIT_  __attribute__((section("system_shell_shelldevcmd_init")))
#define _SYSTEM_SHELL_SHELLDEVCMD_SHELL_  __attribute__((section("system_shell_shelldevcmd_shell")))
/*
*---------------------------------------------------------------------------------------------------------------------
*
*                                                   global variable declare
*
*---------------------------------------------------------------------------------------------------------------------
*/



/*
*---------------------------------------------------------------------------------------------------------------------
*
*                                                   API Declare
*
*---------------------------------------------------------------------------------------------------------------------
*/
extern rk_err_t ShellDeviceParsing(HDC dev, uint8 * pstr);

#endif