/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1648555110_1_
#define _BUR_1648555110_1_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_GLOBAL signed short real_speed;
_GLOBAL plcbit Button_4;
_GLOBAL plcbit Button_2;
_GLOBAL plcbit Button_3;
_GLOBAL plcbit led1;
_GLOBAL plcbit led2;
_GLOBAL plcbit led3;
_GLOBAL plcbit led4;
_GLOBAL plcbit led[4];
_GLOBAL plcbit Button_1;
_GLOBAL signed short start;
_GLOBAL struct DRIVE EVIRD;
_GLOBAL signed short speed;
_GLOBAL plcbit gAxis01_ModuleOk;
_GLOBAL struct SdcDiDoIf_typ gAxis01_DiDoIf;
_GLOBAL struct SdcDrvIf16_typ gAxis01_DrvIf;
_GLOBAL struct SdcHwCfg_typ gAxis01_HW;
_GLOBAL struct ACP10AXIS_typ gAxis01;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/Global.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Library/Library.fun\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1648555110_1_ */

