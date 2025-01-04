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
static const char *ng0 = "E:/Documents/DSD_Group_Final/riscv-processor-dsd-project/Final_Version/CommonFiles/src/clock.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};



static void Initial_10_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(10, ng0);

LAB2:    xsi_set_current_line(11, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1880);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(12, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 2040);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 24);

LAB1:    return;
}

static void Always_15_1(char *t0)
{
    char t13[8];
    char t14[8];
    char t30[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;

LAB0:    t1 = (t0 + 3208U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15, ng0);
    t2 = (t0 + 3528);
    *((int *)t2) = 1;
    t3 = (t0 + 3240);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(15, ng0);

LAB5:    xsi_set_current_line(16, ng0);
    t4 = (t0 + 1480U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(18, ng0);

LAB10:    xsi_set_current_line(19, ng0);
    t2 = (t0 + 2040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 24, t5, 32);
    t11 = (t0 + 2040);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 24, 0LL);
    xsi_set_current_line(20, ng0);
    t2 = (t0 + 2040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 608);
    t11 = *((char **)t5);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_minus(t13, 32, t11, 32, t5, 32);
    memset(t14, 0, 8);
    t12 = (t4 + 4);
    t15 = (t13 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t13);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t15);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t12);
    t19 = *((unsigned int *)t15);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB14;

LAB11:    if (t20 != 0)
        goto LAB13;

LAB12:    *((unsigned int *)t14) = 1;

LAB14:    t24 = (t14 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t14);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB15;

LAB16:
LAB17:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(16, ng0);

LAB9:    xsi_set_current_line(17, ng0);
    t11 = (t0 + 1320U);
    t12 = *((char **)t11);
    t11 = (t0 + 1880);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 1, 0LL);
    goto LAB8;

LAB13:    t23 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB14;

LAB15:    xsi_set_current_line(20, ng0);

LAB18:    xsi_set_current_line(21, ng0);
    t31 = (t0 + 1880);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memset(t30, 0, 8);
    t34 = (t33 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (~(t35));
    t37 = *((unsigned int *)t33);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB22;

LAB20:    if (*((unsigned int *)t34) == 0)
        goto LAB19;

LAB21:    t40 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t40) = 1;

LAB22:    t41 = (t30 + 4);
    t42 = (t33 + 4);
    t43 = *((unsigned int *)t33);
    t44 = (~(t43));
    *((unsigned int *)t30) = t44;
    *((unsigned int *)t41) = 0;
    if (*((unsigned int *)t42) != 0)
        goto LAB24;

LAB23:    t49 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t49 & 1U);
    t50 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t50 & 1U);
    t51 = (t0 + 1880);
    xsi_vlogvar_wait_assign_value(t51, t30, 0, 0, 1, 0LL);
    xsi_set_current_line(22, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2040);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 24, 0LL);
    goto LAB17;

LAB19:    *((unsigned int *)t30) = 1;
    goto LAB22;

LAB24:    t45 = *((unsigned int *)t30);
    t46 = *((unsigned int *)t42);
    *((unsigned int *)t30) = (t45 | t46);
    t47 = *((unsigned int *)t41);
    t48 = *((unsigned int *)t42);
    *((unsigned int *)t41) = (t47 | t48);
    goto LAB23;

}


extern void work_m_00000000000154271499_0213060440_init()
{
	static char *pe[] = {(void *)Initial_10_0,(void *)Always_15_1};
	xsi_register_didat("work_m_00000000000154271499_0213060440", "isim/tb_isim_beh.exe.sim/work/m_00000000000154271499_0213060440.didat");
	xsi_register_executes(pe);
}
