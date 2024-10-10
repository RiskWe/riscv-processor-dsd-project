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
static const char *ng0 = "E:/Study Material/MyGitHub/riscv-processor-dsd-project/RISCV_SingleCycle/ALU_unit.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {6U, 0U};
static int ng5[] = {1, 0};



static void Always_28_0(char *t0)
{
    char t9[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 3168);
    *((int *)t2) = 1;
    t3 = (t0 + 2880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29, ng0);

LAB5:    xsi_set_current_line(30, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 4);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB13;

LAB14:
LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(31, ng0);

LAB16:    xsi_set_current_line(31, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 1, 0LL);
    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t4);
    t12 = (t10 & t11);
    *((unsigned int *)t9) = t12;
    t2 = (t3 + 4);
    t7 = (t4 + 4);
    t8 = (t9 + 4);
    t13 = *((unsigned int *)t2);
    t14 = *((unsigned int *)t7);
    t15 = (t13 | t14);
    *((unsigned int *)t8) = t15;
    t16 = *((unsigned int *)t8);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB17;

LAB18:
LAB19:    t37 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t37, t9, 0, 0, 32, 0LL);
    goto LAB15;

LAB9:    xsi_set_current_line(32, ng0);

LAB20:    xsi_set_current_line(32, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t4);
    t12 = (t10 | t11);
    *((unsigned int *)t9) = t12;
    t2 = (t3 + 4);
    t7 = (t4 + 4);
    t8 = (t9 + 4);
    t13 = *((unsigned int *)t2);
    t14 = *((unsigned int *)t7);
    t15 = (t13 | t14);
    *((unsigned int *)t8) = t15;
    t16 = *((unsigned int *)t8);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB21;

LAB22:
LAB23:    t37 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t37, t9, 0, 0, 32, 0LL);
    goto LAB15;

LAB11:    xsi_set_current_line(33, ng0);

LAB24:    xsi_set_current_line(33, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t3, 32, t4, 32);
    t2 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t2, t9, 0, 0, 32, 0LL);
    goto LAB15;

LAB13:    xsi_set_current_line(34, ng0);

LAB25:    xsi_set_current_line(34, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t9, 0, 8);
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t7);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t3);
    t14 = *((unsigned int *)t8);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t3);
    t18 = *((unsigned int *)t8);
    t19 = (t17 | t18);
    t22 = (~(t19));
    t23 = (t16 & t22);
    if (t23 != 0)
        goto LAB29;

LAB26:    if (t19 != 0)
        goto LAB28;

LAB27:    *((unsigned int *)t9) = 1;

LAB29:    t21 = (t9 + 4);
    t24 = *((unsigned int *)t21);
    t25 = (~(t24));
    t26 = *((unsigned int *)t9);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB32:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_minus(t9, 32, t3, 32, t4, 32);
    t2 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t2, t9, 0, 0, 32, 0LL);
    goto LAB15;

LAB17:    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t8);
    *((unsigned int *)t9) = (t18 | t19);
    t20 = (t3 + 4);
    t21 = (t4 + 4);
    t22 = *((unsigned int *)t3);
    t23 = (~(t22));
    t24 = *((unsigned int *)t20);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (~(t26));
    t28 = *((unsigned int *)t21);
    t29 = (~(t28));
    t6 = (t23 & t25);
    t30 = (t27 & t29);
    t31 = (~(t6));
    t32 = (~(t30));
    t33 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t33 & t31);
    t34 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t34 & t32);
    t35 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t35 & t31);
    t36 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t36 & t32);
    goto LAB19;

LAB21:    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t8);
    *((unsigned int *)t9) = (t18 | t19);
    t20 = (t3 + 4);
    t21 = (t4 + 4);
    t22 = *((unsigned int *)t20);
    t23 = (~(t22));
    t24 = *((unsigned int *)t3);
    t6 = (t24 & t23);
    t25 = *((unsigned int *)t21);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t30 = (t27 & t26);
    t28 = (~(t6));
    t29 = (~(t30));
    t31 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t31 & t28);
    t32 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t32 & t29);
    goto LAB23;

LAB28:    t20 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB29;

LAB30:    xsi_set_current_line(34, ng0);
    t37 = ((char*)((ng5)));
    t38 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t38, t37, 0, 0, 1, 0LL);
    goto LAB32;

}


extern void work_m_00000000000701525613_2928071898_init()
{
	static char *pe[] = {(void *)Always_28_0};
	xsi_register_didat("work_m_00000000000701525613_2928071898", "isim/main_isim_beh.exe.sim/work/m_00000000000701525613_2928071898.didat");
	xsi_register_executes(pe);
}
