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
static const char *ng0 = "E:/Study Material/MyGitHub/riscv-processor-dsd-project/RISCV_SingleCycle/ALU_Control.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {2U, 0U};
static unsigned int ng3[] = {16U, 0U};
static unsigned int ng4[] = {6U, 0U};
static unsigned int ng5[] = {32U, 0U};
static unsigned int ng6[] = {40U, 0U};
static unsigned int ng7[] = {39U, 0U};
static unsigned int ng8[] = {38U, 0U};
static unsigned int ng9[] = {1U, 0U};



static void Always_28_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int t9;
    char *t10;
    char *t11;

LAB0:    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 3008);
    *((int *)t2) = 1;
    t3 = (t0 + 2720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29, ng0);

LAB5:    xsi_set_current_line(30, ng0);
    t5 = (t0 + 1208U);
    t6 = *((char **)t5);
    t5 = (t0 + 1048U);
    t7 = *((char **)t5);
    t5 = (t0 + 1368U);
    t8 = *((char **)t5);
    xsi_vlogtype_concat(t4, 6, 6, 3U, t8, 2, t7, 1, t6, 3);

LAB6:    t5 = ((char*)((ng1)));
    t9 = xsi_vlog_unsigned_case_compare(t4, 6, t5, 6);
    if (t9 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t9 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t9 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t9 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t9 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t9 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t9 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng7)));
    t9 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t9 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng8)));
    t9 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t9 == 1)
        goto LAB17;

LAB18:
LAB19:    goto LAB2;

LAB7:    xsi_set_current_line(31, ng0);
    t10 = ((char*)((ng2)));
    t11 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t11, t10, 0, 0, 4, 0LL);
    goto LAB19;

LAB9:    xsi_set_current_line(32, ng0);
    t3 = ((char*)((ng4)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB19;

LAB11:    xsi_set_current_line(33, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB19;

LAB13:    xsi_set_current_line(34, ng0);
    t3 = ((char*)((ng4)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB19;

LAB15:    xsi_set_current_line(35, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB19;

LAB17:    xsi_set_current_line(36, ng0);
    t3 = ((char*)((ng9)));
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 4, 0LL);
    goto LAB19;

}


extern void work_m_00000000004250218921_3148384703_init()
{
	static char *pe[] = {(void *)Always_28_0};
	xsi_register_didat("work_m_00000000004250218921_3148384703", "isim/main_isim_beh.exe.sim/work/m_00000000004250218921_3148384703.didat");
	xsi_register_executes(pe);
}
