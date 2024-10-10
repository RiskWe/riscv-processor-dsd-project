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
static const char *ng0 = "E:/Study Material/MyGitHub/riscv-processor-dsd-project/RISCV_SingleCycle/ImmGen.v";
static unsigned int ng1[] = {3U, 0U};
static int ng2[] = {20, 0};
static unsigned int ng3[] = {35U, 0U};
static unsigned int ng4[] = {99U, 0U};
static unsigned int ng5[] = {0U, 0U};
static int ng6[] = {19, 0};



static void Always_27_0(char *t0)
{
    char t7[8];
    char t8[8];
    char t18[8];
    char t22[8];
    char t31[8];
    char t41[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;

LAB0:    t1 = (t0 + 2528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 2848);
    *((int *)t2) = 1;
    t3 = (t0 + 2560);
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

LAB10:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 7, t2, 7);
    if (t6 == 1)
        goto LAB11;

LAB12:
LAB13:    goto LAB2;

LAB7:    xsi_set_current_line(30, ng0);
    t9 = (t0 + 1208U);
    t10 = *((char **)t9);
    memset(t8, 0, 8);
    t9 = (t8 + 4);
    t11 = (t10 + 4);
    t12 = *((unsigned int *)t10);
    t13 = (t12 >> 20);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t11);
    t15 = (t14 >> 20);
    *((unsigned int *)t9) = t15;
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t16 & 4095U);
    t17 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t17 & 4095U);
    t19 = ((char*)((ng2)));
    t20 = (t0 + 1208U);
    t21 = *((char **)t20);
    memset(t22, 0, 8);
    t20 = (t22 + 4);
    t23 = (t21 + 4);
    t24 = *((unsigned int *)t21);
    t25 = (t24 >> 31);
    t26 = (t25 & 1);
    *((unsigned int *)t22) = t26;
    t27 = *((unsigned int *)t23);
    t28 = (t27 >> 31);
    t29 = (t28 & 1);
    *((unsigned int *)t20) = t29;
    xsi_vlog_mul_concat(t18, 20, 1, t19, 1U, t22, 1);
    xsi_vlogtype_concat(t7, 32, 32, 2U, t18, 20, t8, 12);
    t30 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t30, t7, 0, 0, 32, 0LL);
    goto LAB13;

LAB9:    xsi_set_current_line(31, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t3 = (t8 + 4);
    t9 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 7);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t9);
    t15 = (t14 >> 7);
    *((unsigned int *)t3) = t15;
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t16 & 31U);
    t17 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t17 & 31U);
    t10 = (t0 + 1208U);
    t11 = *((char **)t10);
    memset(t18, 0, 8);
    t10 = (t18 + 4);
    t19 = (t11 + 4);
    t24 = *((unsigned int *)t11);
    t25 = (t24 >> 25);
    *((unsigned int *)t18) = t25;
    t26 = *((unsigned int *)t19);
    t27 = (t26 >> 25);
    *((unsigned int *)t10) = t27;
    t28 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t28 & 127U);
    t29 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t29 & 127U);
    t20 = ((char*)((ng2)));
    t21 = (t0 + 1208U);
    t23 = *((char **)t21);
    memset(t31, 0, 8);
    t21 = (t31 + 4);
    t30 = (t23 + 4);
    t32 = *((unsigned int *)t23);
    t33 = (t32 >> 31);
    t34 = (t33 & 1);
    *((unsigned int *)t31) = t34;
    t35 = *((unsigned int *)t30);
    t36 = (t35 >> 31);
    t37 = (t36 & 1);
    *((unsigned int *)t21) = t37;
    xsi_vlog_mul_concat(t22, 20, 1, t20, 1U, t31, 1);
    xsi_vlogtype_concat(t7, 32, 32, 3U, t22, 20, t18, 7, t8, 5);
    t38 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t38, t7, 0, 0, 32, 0LL);
    goto LAB13;

LAB11:    xsi_set_current_line(32, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1208U);
    t9 = *((char **)t4);
    memset(t8, 0, 8);
    t4 = (t8 + 4);
    t10 = (t9 + 4);
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 8);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 >> 8);
    *((unsigned int *)t4) = t15;
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t16 & 15U);
    t17 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t17 & 15U);
    t11 = (t0 + 1208U);
    t19 = *((char **)t11);
    memset(t18, 0, 8);
    t11 = (t18 + 4);
    t20 = (t19 + 4);
    t24 = *((unsigned int *)t19);
    t25 = (t24 >> 25);
    *((unsigned int *)t18) = t25;
    t26 = *((unsigned int *)t20);
    t27 = (t26 >> 25);
    *((unsigned int *)t11) = t27;
    t28 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t28 & 63U);
    t29 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t29 & 63U);
    t21 = (t0 + 1208U);
    t23 = *((char **)t21);
    memset(t22, 0, 8);
    t21 = (t22 + 4);
    t30 = (t23 + 4);
    t32 = *((unsigned int *)t23);
    t33 = (t32 >> 31);
    t34 = (t33 & 1);
    *((unsigned int *)t22) = t34;
    t35 = *((unsigned int *)t30);
    t36 = (t35 >> 31);
    t37 = (t36 & 1);
    *((unsigned int *)t21) = t37;
    t38 = ((char*)((ng6)));
    t39 = (t0 + 1208U);
    t40 = *((char **)t39);
    memset(t41, 0, 8);
    t39 = (t41 + 4);
    t42 = (t40 + 4);
    t43 = *((unsigned int *)t40);
    t44 = (t43 >> 31);
    t45 = (t44 & 1);
    *((unsigned int *)t41) = t45;
    t46 = *((unsigned int *)t42);
    t47 = (t46 >> 31);
    t48 = (t47 & 1);
    *((unsigned int *)t39) = t48;
    xsi_vlog_mul_concat(t31, 19, 1, t38, 1U, t41, 1);
    xsi_vlogtype_concat(t7, 32, 31, 5U, t31, 19, t22, 1, t18, 6, t8, 4, t3, 1);
    t49 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t49, t7, 0, 0, 32, 0LL);
    goto LAB13;

}


extern void work_m_00000000003539474846_2444586083_init()
{
	static char *pe[] = {(void *)Always_27_0};
	xsi_register_didat("work_m_00000000003539474846_2444586083", "isim/main_isim_beh.exe.sim/work/m_00000000003539474846_2444586083.didat");
	xsi_register_executes(pe);
}
