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
static const char *ng0 = "";
static const char *ng1 = " clk=%b rst=%b led=%b fetch=%b decode=%b execute=%b memory=%b writeback=%b leds=%b";
static const char *ng2 = "E:/Documents/DSD_Group_Final/riscv-processor-dsd-project/Final_Version/CommonFiles/src/pipeline_tb.v";
static int ng3[] = {0, 0};
static int ng4[] = {1, 0};

void Monitor_46_3(char *);
void Monitor_46_3(char *);


static void Monitor_46_3_Func(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    t2 = xsi_vlog_time(t1, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(0, 0, 3, ng0, 2, t0, (char)118, t1, 64);
    t3 = (t0 + 2568);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 2728);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 1048U);
    t10 = *((char **)t9);
    t9 = (t0 + 1368U);
    t11 = *((char **)t9);
    t9 = (t0 + 1528U);
    t12 = *((char **)t9);
    t9 = (t0 + 1688U);
    t13 = *((char **)t9);
    t9 = (t0 + 1848U);
    t14 = *((char **)t9);
    t9 = (t0 + 2008U);
    t15 = *((char **)t9);
    t9 = (t0 + 2168U);
    t16 = *((char **)t9);
    xsi_vlogfile_write(1, 0, 3, ng1, 10, t0, (char)118, t5, 1, (char)118, t8, 1, (char)118, t10, 1, (char)118, t11, 1, (char)118, t12, 1, (char)118, t13, 1, (char)118, t14, 1, (char)118, t15, 1, (char)118, t16, 5);

LAB1:    return;
}

static void Initial_18_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 3648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18, ng2);

LAB4:    xsi_set_current_line(19, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(20, ng2);

LAB5:    xsi_set_current_line(20, ng2);
    t2 = (t0 + 3456);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB6;

LAB1:    return;
LAB6:    xsi_set_current_line(20, ng2);
    t3 = (t0 + 2568);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB10;

LAB8:    if (*((unsigned int *)t7) == 0)
        goto LAB7;

LAB9:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB10:    t14 = (t4 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t4) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB12;

LAB11:    t22 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 2568);
    xsi_vlogvar_assign_value(t24, t4, 0, 0, 1);
    goto LAB5;

LAB7:    *((unsigned int *)t4) = 1;
    goto LAB10;

LAB12:    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t4) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB11;

LAB13:    goto LAB1;

}

static void Initial_24_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 3896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(24, ng2);

LAB4:    xsi_set_current_line(25, ng2);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(26, ng2);
    t2 = (t0 + 3704);
    xsi_process_wait(t2, 200000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(27, ng2);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB1;

}

static void Initial_45_2(char *t0)
{

LAB0:    xsi_set_current_line(45, ng2);

LAB2:    xsi_set_current_line(46, ng2);
    Monitor_46_3(t0);

LAB1:    return;
}

static void Initial_52_4(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 4392U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng2);

LAB4:    xsi_set_current_line(53, ng2);
    t2 = (t0 + 4200);
    xsi_process_wait(t2, 10000000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(54, ng2);
    xsi_vlog_finish(1);
    goto LAB1;

}

void Monitor_46_3(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 4448);
    t2 = (t0 + 4960);
    xsi_vlogfile_monitor((void *)Monitor_46_3_Func, t1, t2);

LAB1:    return;
}


extern void work_m_00000000000637070880_3826161065_init()
{
	static char *pe[] = {(void *)Initial_18_0,(void *)Initial_24_1,(void *)Initial_45_2,(void *)Initial_52_4,(void *)Monitor_46_3};
	xsi_register_didat("work_m_00000000000637070880_3826161065", "isim/tb_Pipeline_top_isim_beh.exe.sim/work/m_00000000000637070880_3826161065.didat");
	xsi_register_executes(pe);
}
