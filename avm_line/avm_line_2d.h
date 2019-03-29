/*******************************************************************************
* File Name          : avm_line_2d.h
* Author             : Chenx 
* Revision           : 2.1
* Date               : 16/05/2018
* Description        : draw_line_2d interface
*******************************************************************************/
#ifndef __AVM_LINE_2D_H__
#define __AVM_LINE_2D_H__

#include "avmlib_sdk.h"

/*
*************************************************************************
*************************************************************************
*                    LOCAL  DEFINE
*************************************************************************
*************************************************************************
*/


/*
*************************************************************************
*************************************************************************
*                      F U N C T I O N
*************************************************************************
*************************************************************************
*/

AVM_ERR avm_line_2d_init();
AVM_ERR avm_line_2d_draw(int sub_mode,double angle);

#endif