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
static const char *ng0 = "D:/Homeworks/FPGA_codes/HW3_1_A/HW3_1_A.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {5U, 0U};
static unsigned int ng7[] = {6U, 0U};
static unsigned int ng8[] = {7U, 0U};
static unsigned int ng9[] = {8U, 0U};
static unsigned int ng10[] = {9U, 0U};
static unsigned int ng11[] = {10U, 0U};
static unsigned int ng12[] = {11U, 0U};
static int ng13[] = {1, 0};
static int ng14[] = {0, 0};



static void Always_35_0(char *t0)
{
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

LAB0:    t1 = (t0 + 3824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 4640);
    *((int *)t2) = 1;
    t3 = (t0 + 3856);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(36, ng0);
    t4 = (t0 + 2024U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 2744);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2904);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 3, 0LL);

LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(37, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2904);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 3, 0LL);
    goto LAB7;

}

static void Always_41_1(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    int t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 4656);
    *((int *)t2) = 1;
    t3 = (t0 + 4104);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(42, ng0);
    t5 = (t0 + 2184U);
    t6 = *((char **)t5);
    t5 = (t0 + 2904);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    xsi_vlogtype_concat(t4, 4, 4, 2U, t8, 3, t6, 1);

LAB5:    t9 = ((char*)((ng1)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 4, t9, 4);
    if (t10 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng2)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t10 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng3)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t10 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng4)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t10 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng5)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t10 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng6)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t10 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng7)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t10 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng8)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t10 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng9)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t10 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng10)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t10 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng11)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t10 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng12)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t10 == 1)
        goto LAB28;

LAB29:
LAB31:
LAB30:    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2744);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB32:    goto LAB2;

LAB6:    xsi_set_current_line(43, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2744);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 3, 0LL);
    goto LAB32;

LAB8:    xsi_set_current_line(44, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 2744);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 0LL);
    goto LAB32;

LAB10:    xsi_set_current_line(45, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 2744);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 0LL);
    goto LAB32;

LAB12:    xsi_set_current_line(46, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 2744);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 0LL);
    goto LAB32;

LAB14:    xsi_set_current_line(47, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 2744);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 0LL);
    goto LAB32;

LAB16:    xsi_set_current_line(48, ng0);
    t3 = ((char*)((ng4)));
    t5 = (t0 + 2744);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 0LL);
    goto LAB32;

LAB18:    xsi_set_current_line(49, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 2744);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 0LL);
    goto LAB32;

LAB20:    xsi_set_current_line(50, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 2744);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 0LL);
    goto LAB32;

LAB22:    xsi_set_current_line(51, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 2744);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 0LL);
    goto LAB32;

LAB24:    xsi_set_current_line(52, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 2744);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 0LL);
    goto LAB32;

LAB26:    xsi_set_current_line(53, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 2744);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 0LL);
    goto LAB32;

LAB28:    xsi_set_current_line(54, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 2744);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 3, 0LL);
    goto LAB32;

}

static void Cont_57_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t8[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
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
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;

LAB0:    t1 = (t0 + 4320U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2904);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng6)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB7;

LAB4:    if (t20 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t8) = 1;

LAB7:    memset(t4, 0, 8);
    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t24) != 0)
        goto LAB10;

LAB11:    t31 = (t4 + 4);
    t32 = *((unsigned int *)t4);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB12;

LAB13:    t36 = *((unsigned int *)t4);
    t37 = (~(t36));
    t38 = *((unsigned int *)t31);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t31) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t40, 8);

LAB20:    t41 = (t0 + 4752);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    memset(t45, 0, 8);
    t46 = 1U;
    t47 = t46;
    t48 = (t3 + 4);
    t49 = *((unsigned int *)t3);
    t46 = (t46 & t49);
    t50 = *((unsigned int *)t48);
    t47 = (t47 & t50);
    t51 = (t45 + 4);
    t52 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t52 | t46);
    t53 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t53 | t47);
    xsi_driver_vfirst_trans(t41, 0, 0);
    t54 = (t0 + 4672);
    *((int *)t54) = 1;

LAB1:    return;
LAB6:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t30 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB11;

LAB12:    t35 = ((char*)((ng13)));
    goto LAB13;

LAB14:    t40 = ((char*)((ng14)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t35, 32, t40, 32);
    goto LAB20;

LAB18:    memcpy(t3, t35, 8);
    goto LAB20;

}


extern void work_m_00000000001667893538_3480641351_init()
{
	static char *pe[] = {(void *)Always_35_0,(void *)Always_41_1,(void *)Cont_57_2};
	xsi_register_didat("work_m_00000000001667893538_3480641351", "isim/HW3_1_A_tb_isim_beh.exe.sim/work/m_00000000001667893538_3480641351.didat");
	xsi_register_executes(pe);
}
