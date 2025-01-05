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
static const char *ng0 = "E:/Business_Meghana/Final/substractor_float.v";
static unsigned int ng1[] = {1U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {0U, 0U};



static void Always_21_0(char *t0)
{
    char t6[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;

LAB0:    t1 = (t0 + 4768U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(21, ng0);
    t2 = (t0 + 5088);
    *((int *)t2) = 1;
    t3 = (t0 + 4800);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(21, ng0);

LAB5:    xsi_set_current_line(23, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 31);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 31);
    t13 = (t12 & 1);
    *((unsigned int *)t4) = t13;
    t14 = (t0 + 2088);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 1);
    xsi_set_current_line(24, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t15, 0, 8);
    t2 = (t15 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 31);
    t10 = (t9 & 1);
    *((unsigned int *)t15) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 31);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    memset(t6, 0, 8);
    t5 = (t15 + 4);
    t16 = *((unsigned int *)t5);
    t17 = (~(t16));
    t18 = *((unsigned int *)t15);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;

LAB9:    t14 = (t6 + 4);
    t21 = (t15 + 4);
    t22 = *((unsigned int *)t15);
    t23 = (~(t22));
    *((unsigned int *)t6) = t23;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t21) != 0)
        goto LAB11;

LAB10:    t28 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t28 & 1U);
    t29 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t29 & 1U);
    t30 = (t0 + 2248);
    xsi_vlogvar_assign_value(t30, t6, 0, 0, 1);
    xsi_set_current_line(25, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 23);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 23);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t12 & 255U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 255U);
    t5 = (t0 + 2568);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 8);
    xsi_set_current_line(26, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 23);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 23);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t12 & 255U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 255U);
    t5 = (t0 + 2728);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 8);
    xsi_set_current_line(27, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t15, 0, 8);
    t2 = (t15 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 0);
    *((unsigned int *)t15) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t12 & 8388607U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 8388607U);
    t5 = ((char*)((ng1)));
    xsi_vlogtype_concat(t6, 24, 24, 2U, t5, 1, t15, 23);
    t7 = (t0 + 3208);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 24);
    xsi_set_current_line(28, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t15, 0, 8);
    t2 = (t15 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 0);
    *((unsigned int *)t15) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t12 & 8388607U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 8388607U);
    t5 = ((char*)((ng1)));
    xsi_vlogtype_concat(t6, 24, 24, 2U, t5, 1, t15, 23);
    t7 = (t0 + 3368);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 24);
    xsi_set_current_line(31, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2728);
    t7 = (t5 + 56U);
    t14 = *((char **)t7);
    memset(t6, 0, 8);
    t21 = (t4 + 4);
    if (*((unsigned int *)t21) != 0)
        goto LAB13;

LAB12:    t30 = (t14 + 4);
    if (*((unsigned int *)t30) != 0)
        goto LAB13;

LAB16:    if (*((unsigned int *)t4) > *((unsigned int *)t14))
        goto LAB14;

LAB15:    t32 = (t6 + 4);
    t8 = *((unsigned int *)t32);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(35, ng0);

LAB21:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2568);
    t7 = (t5 + 56U);
    t14 = *((char **)t7);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 8, t4, 8, t14, 8);
    t21 = (t0 + 3048);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 8);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3048);
    t7 = (t5 + 56U);
    t14 = *((char **)t7);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_rshift(t6, 24, t4, 24, t14, 8);
    t21 = (t0 + 3208);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 24);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2888);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);

LAB19:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3368);
    t7 = (t5 + 56U);
    t14 = *((char **)t7);
    memset(t6, 0, 8);
    t21 = (t4 + 4);
    if (*((unsigned int *)t21) != 0)
        goto LAB23;

LAB22:    t30 = (t14 + 4);
    if (*((unsigned int *)t30) != 0)
        goto LAB23;

LAB26:    if (*((unsigned int *)t4) < *((unsigned int *)t14))
        goto LAB25;

LAB24:    *((unsigned int *)t6) = 1;

LAB25:    t32 = (t6 + 4);
    t8 = *((unsigned int *)t32);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB27;

LAB28:    xsi_set_current_line(45, ng0);

LAB31:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3208);
    t7 = (t5 + 56U);
    t14 = *((char **)t7);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 25, t4, 24, t14, 24);
    t21 = (t0 + 3848);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 25);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2408);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);

LAB29:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 3848);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t12 & 16777215U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 16777215U);
    t14 = (t0 + 3528);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 24);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t14 = (t5 + 4);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t5);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t7);
    t12 = *((unsigned int *)t14);
    t13 = (t11 ^ t12);
    t16 = (t10 | t13);
    t17 = *((unsigned int *)t7);
    t18 = *((unsigned int *)t14);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t22 = (t16 & t20);
    if (t22 != 0)
        goto LAB33;

LAB32:    if (t19 != 0)
        goto LAB34;

LAB35:    t30 = (t6 + 4);
    t23 = *((unsigned int *)t30);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB36;

LAB37:    xsi_set_current_line(55, ng0);

LAB40:    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 24);

LAB38:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t15, 0, 8);
    t5 = (t15 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t15) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t12 & 8388607U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 8388607U);
    t14 = (t0 + 2888);
    t21 = (t14 + 56U);
    t30 = *((char **)t21);
    t31 = (t0 + 2408);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    xsi_vlogtype_concat(t6, 32, 32, 3U, t33, 1, t30, 8, t15, 23);
    t34 = (t0 + 1928);
    xsi_vlogvar_assign_value(t34, t6, 0, 0, 32);
    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB11:    t24 = *((unsigned int *)t6);
    t25 = *((unsigned int *)t21);
    *((unsigned int *)t6) = (t24 | t25);
    t26 = *((unsigned int *)t14);
    t27 = *((unsigned int *)t21);
    *((unsigned int *)t14) = (t26 | t27);
    goto LAB10;

LAB13:    t31 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB15;

LAB14:    *((unsigned int *)t6) = 1;
    goto LAB15;

LAB17:    xsi_set_current_line(31, ng0);

LAB20:    xsi_set_current_line(32, ng0);
    t33 = (t0 + 2568);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = (t0 + 2728);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_minus(t15, 8, t35, 8, t38, 8);
    t39 = (t0 + 3048);
    xsi_vlogvar_assign_value(t39, t15, 0, 0, 8);
    xsi_set_current_line(33, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3048);
    t7 = (t5 + 56U);
    t14 = *((char **)t7);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_rshift(t6, 24, t4, 24, t14, 8);
    t21 = (t0 + 3368);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 24);
    xsi_set_current_line(34, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2888);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    goto LAB19;

LAB23:    t31 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB25;

LAB27:    xsi_set_current_line(42, ng0);

LAB30:    xsi_set_current_line(43, ng0);
    t33 = (t0 + 3208);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = (t0 + 3368);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_minus(t15, 25, t35, 24, t38, 24);
    t39 = (t0 + 3848);
    xsi_vlogvar_assign_value(t39, t15, 0, 0, 25);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2408);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB29;

LAB33:    *((unsigned int *)t6) = 1;
    goto LAB35;

LAB34:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB35;

LAB36:    xsi_set_current_line(52, ng0);

LAB39:    xsi_set_current_line(53, ng0);
    t31 = (t0 + 3528);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t0 + 1528U);
    t35 = *((char **)t34);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_lshift(t15, 24, t33, 24, t35, 5);
    t34 = (t0 + 3688);
    xsi_vlogvar_assign_value(t34, t15, 0, 0, 24);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1528U);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 8, t4, 8, t7, 5);
    t5 = (t0 + 2888);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 8);
    goto LAB38;

}


extern void work_m_00000000000171778796_1254803134_init()
{
	static char *pe[] = {(void *)Always_21_0};
	xsi_register_didat("work_m_00000000000171778796_1254803134", "isim/tb_top_fp_operations_isim_beh.exe.sim/work/m_00000000000171778796_1254803134.didat");
	xsi_register_executes(pe);
}
