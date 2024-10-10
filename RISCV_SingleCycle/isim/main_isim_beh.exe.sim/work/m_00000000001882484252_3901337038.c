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
static const char *ng0 = "E:/Study Material/MyGitHub/riscv-processor-dsd-project/RISCV_SingleCycle/Control_Unit.v";
static unsigned int ng1[] = {51U, 0U};
static unsigned int ng2[] = {33U, 0U};
static unsigned int ng3[] = {3U, 0U};
static unsigned int ng4[] = {240U, 0U};
static unsigned int ng5[] = {35U, 0U};
static unsigned int ng6[] = {136U, 0U};
static unsigned int ng7[] = {99U, 0U};
static unsigned int ng8[] = {5U, 0U};



static void Always_27_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    t1 = (t0 + 3328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 3648);
    *((int *)t2) = 1;
    t3 = (t0 + 3360);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(28, ng0);

LAB5:    xsi_set_current_line(29, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 7, t4, 7);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 7, t2, 7);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 7, t2, 7);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 7, t2, 7);
    if (t6 == 1)
        goto LAB13;

LAB14:
LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(30, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 2, 0LL);
    t9 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t9, t7, 2, 0, 1, 0LL);
    t10 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t10, t7, 3, 0, 1, 0LL);
    t11 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t11, t7, 4, 0, 1, 0LL);
    t12 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t12, t7, 5, 0, 1, 0LL);
    t13 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t13, t7, 6, 0, 1, 0LL);
    t14 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t14, t7, 7, 0, 1, 0LL);
    goto LAB15;

LAB9:    xsi_set_current_line(31, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 2, 0LL);
    t7 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t7, t3, 2, 0, 1, 0LL);
    t8 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t8, t3, 3, 0, 1, 0LL);
    t9 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t9, t3, 4, 0, 1, 0LL);
    t10 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t10, t3, 5, 0, 1, 0LL);
    t11 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t11, t3, 6, 0, 1, 0LL);
    t12 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t12, t3, 7, 0, 1, 0LL);
    goto LAB15;

LAB11:    xsi_set_current_line(32, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 2, 0LL);
    t7 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t7, t3, 2, 0, 1, 0LL);
    t8 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t8, t3, 3, 0, 1, 0LL);
    t9 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t9, t3, 4, 0, 1, 0LL);
    t10 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t10, t3, 5, 0, 1, 0LL);
    t11 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t11, t3, 6, 0, 1, 0LL);
    t12 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t12, t3, 7, 0, 1, 0LL);
    goto LAB15;

LAB13:    xsi_set_current_line(33, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 2, 0LL);
    t7 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t7, t3, 2, 0, 1, 0LL);
    t8 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t8, t3, 3, 0, 1, 0LL);
    t9 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t9, t3, 4, 0, 1, 0LL);
    t10 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t10, t3, 5, 0, 1, 0LL);
    t11 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t11, t3, 6, 0, 1, 0LL);
    t12 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t12, t3, 7, 0, 1, 0LL);
    goto LAB15;

}


extern void work_m_00000000001882484252_3901337038_init()
{
	static char *pe[] = {(void *)Always_27_0};
	xsi_register_didat("work_m_00000000001882484252_3901337038", "isim/main_isim_beh.exe.sim/work/m_00000000001882484252_3901337038.didat");
	xsi_register_executes(pe);
}
