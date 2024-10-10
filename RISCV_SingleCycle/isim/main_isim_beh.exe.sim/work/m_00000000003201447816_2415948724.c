/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "E:/Study Material/MyGitHub/riscv-processor-dsd-project/RISCV_SingleCycle/PCplus4.v";
static int ng1[] = {4, 0};



static void Cont_26_0(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 2368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(26, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    xsi_vlog_unsigned_add(t5, 32, t2, 32, t4, 32);
    t3 = (t0 + 2768);
    t6 = (t3 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 8);
    xsi_driver_vfirst_trans(t3, 0, 31);
    t10 = (t0 + 2688);
    *((int *)t10) = 1;

LAB1:    return;
}


extern void work_m_00000000003201447816_2415948724_init()
{
	static char *pe[] = {(void *)Cont_26_0};
	xsi_register_didat("work_m_00000000003201447816_2415948724", "isim/main_isim_beh.exe.sim/work/m_00000000003201447816_2415948724.didat");
	xsi_register_executes(pe);
}
