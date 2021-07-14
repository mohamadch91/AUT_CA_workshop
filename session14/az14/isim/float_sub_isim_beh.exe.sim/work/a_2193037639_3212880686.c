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
static const char *ng0 = "S:/uni/4/Az memar/session14/az14/floating_subtractor.vhd";
extern char *IEEE_P_1242562249;
extern char *IEEE_P_2592010699;

char *ieee_p_1242562249_sub_1547198987_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_1547270861_1035706684(char *, char *, char *, char *, char *, char *);
int ieee_p_1242562249_sub_1657552908_1035706684(char *, char *, char *);
char *ieee_p_1242562249_sub_1919365254_1035706684(char *, char *, char *, char *, int );
unsigned char ieee_p_1242562249_sub_2110411308_1035706684(char *, char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
char *ieee_p_2592010699_sub_3293060193_503743352(char *, char *, char *, char *, unsigned char );
char *ieee_p_2592010699_sub_393209765_503743352(char *, char *, char *, char *);


static void work_a_2193037639_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(22, ng0);

LAB3:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 4664);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast(t1);

LAB2:    t7 = (t0 + 4536);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2193037639_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(23, ng0);

LAB3:    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t1 = (t0 + 4728);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast(t1);

LAB2:    t7 = (t0 + 4552);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2193037639_3212880686_p_2(char *t0)
{
    char t19[16];
    char t21[16];
    char t33[16];
    char t42[16];
    char t43[16];
    char *t1;
    char *t2;
    int t3;
    unsigned char t4;
    char *t5;
    char *t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t20;
    char *t22;
    char *t23;
    int t24;
    unsigned int t25;
    unsigned char t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    int t31;
    int t32;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned char t40;
    char *t41;
    char *t44;

LAB0:    xsi_set_current_line(36, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 7528U);
    t3 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t2, t1);
    t4 = (t3 == 0);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 7608U);
    t3 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t2, t1);
    t4 = (t3 == 0);
    if (t4 != 0)
        goto LAB7;

LAB8:    xsi_set_current_line(41, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t8 = (31 - 30);
    t9 = (t8 * 1U);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t5 = (t19 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 30;
    t6 = (t5 + 4U);
    *((int *)t6) = 23;
    t6 = (t5 + 8U);
    *((int *)t6) = -1;
    t3 = (23 - 30);
    t15 = (t3 * -1);
    t15 = (t15 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t15;
    t7 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t1, t19);
    t6 = (t0 + 1832U);
    t13 = *((char **)t6);
    t15 = (31 - 30);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t6 = (t13 + t17);
    t14 = (t21 + 0U);
    t18 = (t14 + 0U);
    *((int *)t18) = 30;
    t18 = (t14 + 4U);
    *((int *)t18) = 23;
    t18 = (t14 + 8U);
    *((int *)t18) = -1;
    t24 = (23 - 30);
    t25 = (t24 * -1);
    t25 = (t25 + 1);
    t18 = (t14 + 12U);
    *((unsigned int *)t18) = t25;
    t31 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t6, t21);
    t32 = (t7 - t31);
    t18 = (t0 + 4856);
    t20 = (t18 + 56U);
    t22 = *((char **)t20);
    t23 = (t22 + 56U);
    t27 = *((char **)t23);
    *((int *)t27) = t32;
    xsi_driver_first_trans_fast(t18);
    xsi_set_current_line(44, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t4 = (t3 >= 0);
    if (t4 != 0)
        goto LAB9;

LAB11:    xsi_set_current_line(48, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t8 = (31 - 30);
    t9 = (t8 * 1U);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t5 = (t0 + 4792);
    t6 = (t5 + 56U);
    t13 = *((char **)t6);
    t14 = (t13 + 56U);
    t18 = *((char **)t14);
    memcpy(t18, t1, 8U);
    xsi_driver_first_trans_delta(t5, 1U, 8U, 0LL);
    xsi_set_current_line(49, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t8 = (31 - 22);
    t9 = (t8 * 1U);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t5 = (t33 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 22;
    t6 = (t5 + 4U);
    *((int *)t6) = 0;
    t6 = (t5 + 8U);
    *((int *)t6) = -1;
    t3 = (0 - 22);
    t15 = (t3 * -1);
    t15 = (t15 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t15;
    t6 = ieee_p_2592010699_sub_3293060193_503743352(IEEE_P_2592010699, t21, t1, t33, (unsigned char)0);
    t13 = (t21 + 12U);
    t15 = *((unsigned int *)t13);
    t15 = (t15 * 1U);
    t14 = (t0 + 2312U);
    t18 = *((char **)t14);
    t7 = *((int *)t18);
    t24 = (1 * t7);
    t31 = (-(t24));
    t14 = xsi_vhdl_bitvec_srl(t14, t6, t15, t31);
    t20 = ieee_p_2592010699_sub_393209765_503743352(IEEE_P_2592010699, t19, t14, t21);
    t22 = (t19 + 12U);
    t16 = *((unsigned int *)t22);
    t16 = (t16 * 1U);
    t4 = (23U != t16);
    if (t4 == 1)
        goto LAB14;

LAB15:    t23 = (t0 + 4984);
    t27 = (t23 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memcpy(t30, t20, 23U);
    xsi_driver_first_trans_delta(t23, 9U, 23U, 0LL);

LAB10:    xsi_set_current_line(53, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = (31 - 31);
    t8 = (t3 * -1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t4 = *((unsigned char *)t1);
    t11 = (t4 == (unsigned char)2);
    if (t11 != 0)
        goto LAB16;

LAB18:    xsi_set_current_line(66, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = (31 - 31);
    t8 = (t3 * -1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t4 = *((unsigned char *)t1);
    t11 = (t4 == (unsigned char)2);
    if (t11 != 0)
        goto LAB25;

LAB27:    xsi_set_current_line(74, ng0);
    t1 = (t0 + 4792);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t13 = *((char **)t6);
    *((unsigned char *)t13) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    xsi_set_current_line(75, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t8 = (31 - 22);
    t9 = (t8 * 1U);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t6 = ((IEEE_P_2592010699) + 4024);
    t13 = (t33 + 0U);
    t14 = (t13 + 0U);
    *((int *)t14) = 22;
    t14 = (t13 + 4U);
    *((int *)t14) = 0;
    t14 = (t13 + 8U);
    *((int *)t14) = -1;
    t3 = (0 - 22);
    t15 = (t3 * -1);
    t15 = (t15 + 1);
    t14 = (t13 + 12U);
    *((unsigned int *)t14) = t15;
    t5 = xsi_base_array_concat(t5, t21, t6, (char)99, (unsigned char)3, (char)97, t1, t33, (char)101);
    t14 = (t0 + 1672U);
    t18 = *((char **)t14);
    t15 = (31 - 22);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t14 = (t18 + t17);
    t22 = ((IEEE_P_2592010699) + 4024);
    t23 = (t43 + 0U);
    t27 = (t23 + 0U);
    *((int *)t27) = 22;
    t27 = (t23 + 4U);
    *((int *)t27) = 0;
    t27 = (t23 + 8U);
    *((int *)t27) = -1;
    t7 = (0 - 22);
    t25 = (t7 * -1);
    t25 = (t25 + 1);
    t27 = (t23 + 12U);
    *((unsigned int *)t27) = t25;
    t20 = xsi_base_array_concat(t20, t42, t22, (char)99, (unsigned char)3, (char)97, t14, t43, (char)101);
    t27 = ieee_p_1242562249_sub_1547198987_1035706684(IEEE_P_1242562249, t19, t5, t21, t20, t42);
    t28 = (t0 + 5048);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t41 = (t30 + 56U);
    t44 = *((char **)t41);
    memcpy(t44, t27, 24U);
    xsi_driver_first_trans_fast(t28);

LAB26:
LAB17:    xsi_set_current_line(80, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = (23 - 23);
    t8 = (t3 * -1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t4 = *((unsigned char *)t1);
    t11 = (t4 == (unsigned char)3);
    if (t11 != 0)
        goto LAB31;

LAB33:
LAB32:    xsi_set_current_line(87, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t8 = (23 - 22);
    t9 = (t8 * 1U);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t5 = (t0 + 4792);
    t6 = (t5 + 56U);
    t13 = *((char **)t6);
    t14 = (t13 + 56U);
    t18 = *((char **)t14);
    memcpy(t18, t1, 23U);
    xsi_driver_first_trans_delta(t5, 9U, 23U, 0LL);
    xsi_set_current_line(90, ng0);

LAB36:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = (22 - 31);
    t8 = (t3 * -1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t4 = *((unsigned char *)t1);
    t11 = (t4 == (unsigned char)2);
    if (t11 != 0)
        goto LAB37;

LAB39:    xsi_set_current_line(94, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = (31 - 31);
    t8 = (t3 * -1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t4 = *((unsigned char *)t1);
    t11 = (t4 == (unsigned char)3);
    if (t11 != 0)
        goto LAB42;

LAB44:
LAB43:
LAB3:    xsi_set_current_line(101, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 5112);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t13 = (t6 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 32U);
    xsi_driver_first_trans_fast(t1);
    t1 = (t0 + 4568);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(37, ng0);
    t5 = (t0 + 1832U);
    t6 = *((char **)t5);
    t7 = (31 - 31);
    t8 = (t7 * -1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t5 = (t6 + t10);
    t11 = *((unsigned char *)t5);
    t12 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t11);
    t13 = (t0 + 1832U);
    t14 = *((char **)t13);
    t15 = (31 - 30);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t13 = (t14 + t17);
    t20 = ((IEEE_P_2592010699) + 4024);
    t22 = (t21 + 0U);
    t23 = (t22 + 0U);
    *((int *)t23) = 30;
    t23 = (t22 + 4U);
    *((int *)t23) = 0;
    t23 = (t22 + 8U);
    *((int *)t23) = -1;
    t24 = (0 - 30);
    t25 = (t24 * -1);
    t25 = (t25 + 1);
    t23 = (t22 + 12U);
    *((unsigned int *)t23) = t25;
    t18 = xsi_base_array_concat(t18, t19, t20, (char)99, t12, (char)97, t13, t21, (char)101);
    t25 = (1U + 31U);
    t26 = (32U != t25);
    if (t26 == 1)
        goto LAB5;

LAB6:    t23 = (t0 + 4792);
    t27 = (t23 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memcpy(t30, t18, 32U);
    xsi_driver_first_trans_fast(t23);
    goto LAB3;

LAB5:    xsi_size_not_matching(32U, t25, 0);
    goto LAB6;

LAB7:    xsi_set_current_line(39, ng0);
    t5 = (t0 + 1672U);
    t6 = *((char **)t5);
    t5 = (t0 + 4792);
    t13 = (t5 + 56U);
    t14 = *((char **)t13);
    t18 = (t14 + 56U);
    t20 = *((char **)t18);
    memcpy(t20, t6, 32U);
    xsi_driver_first_trans_fast(t5);
    goto LAB3;

LAB9:    xsi_set_current_line(45, ng0);
    t1 = (t0 + 1672U);
    t5 = *((char **)t1);
    t8 = (31 - 30);
    t9 = (t8 * 1U);
    t10 = (0 + t9);
    t1 = (t5 + t10);
    t6 = (t0 + 4792);
    t13 = (t6 + 56U);
    t14 = *((char **)t13);
    t18 = (t14 + 56U);
    t20 = *((char **)t18);
    memcpy(t20, t1, 8U);
    xsi_driver_first_trans_delta(t6, 1U, 8U, 0LL);
    xsi_set_current_line(46, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t8 = (31 - 22);
    t9 = (t8 * 1U);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t5 = (t33 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 22;
    t6 = (t5 + 4U);
    *((int *)t6) = 0;
    t6 = (t5 + 8U);
    *((int *)t6) = -1;
    t3 = (0 - 22);
    t15 = (t3 * -1);
    t15 = (t15 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t15;
    t6 = ieee_p_2592010699_sub_3293060193_503743352(IEEE_P_2592010699, t21, t1, t33, (unsigned char)0);
    t13 = (t21 + 12U);
    t15 = *((unsigned int *)t13);
    t15 = (t15 * 1U);
    t14 = (t0 + 2312U);
    t18 = *((char **)t14);
    t7 = *((int *)t18);
    t14 = xsi_vhdl_bitvec_srl(t14, t6, t15, t7);
    t20 = ieee_p_2592010699_sub_393209765_503743352(IEEE_P_2592010699, t19, t14, t21);
    t22 = (t19 + 12U);
    t16 = *((unsigned int *)t22);
    t16 = (t16 * 1U);
    t4 = (23U != t16);
    if (t4 == 1)
        goto LAB12;

LAB13:    t23 = (t0 + 4920);
    t27 = (t23 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memcpy(t30, t20, 23U);
    xsi_driver_first_trans_delta(t23, 9U, 23U, 0LL);
    goto LAB10;

LAB12:    xsi_size_not_matching(23U, t16, 0);
    goto LAB13;

LAB14:    xsi_size_not_matching(23U, t16, 0);
    goto LAB15;

LAB16:    xsi_set_current_line(54, ng0);
    t5 = (t0 + 1832U);
    t6 = *((char **)t5);
    t7 = (31 - 31);
    t15 = (t7 * -1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t5 = (t6 + t17);
    t12 = *((unsigned char *)t5);
    t26 = (t12 == (unsigned char)2);
    if (t26 != 0)
        goto LAB19;

LAB21:    xsi_set_current_line(62, ng0);
    t1 = (t0 + 4792);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t13 = *((char **)t6);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    xsi_set_current_line(63, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t8 = (31 - 22);
    t9 = (t8 * 1U);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t6 = ((IEEE_P_2592010699) + 4024);
    t13 = (t33 + 0U);
    t14 = (t13 + 0U);
    *((int *)t14) = 22;
    t14 = (t13 + 4U);
    *((int *)t14) = 0;
    t14 = (t13 + 8U);
    *((int *)t14) = -1;
    t3 = (0 - 22);
    t15 = (t3 * -1);
    t15 = (t15 + 1);
    t14 = (t13 + 12U);
    *((unsigned int *)t14) = t15;
    t5 = xsi_base_array_concat(t5, t21, t6, (char)99, (unsigned char)3, (char)97, t1, t33, (char)101);
    t14 = (t0 + 1832U);
    t18 = *((char **)t14);
    t15 = (31 - 22);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t14 = (t18 + t17);
    t22 = ((IEEE_P_2592010699) + 4024);
    t23 = (t43 + 0U);
    t27 = (t23 + 0U);
    *((int *)t27) = 22;
    t27 = (t23 + 4U);
    *((int *)t27) = 0;
    t27 = (t23 + 8U);
    *((int *)t27) = -1;
    t7 = (0 - 22);
    t25 = (t7 * -1);
    t25 = (t25 + 1);
    t27 = (t23 + 12U);
    *((unsigned int *)t27) = t25;
    t20 = xsi_base_array_concat(t20, t42, t22, (char)99, (unsigned char)3, (char)97, t14, t43, (char)101);
    t27 = ieee_p_1242562249_sub_1547198987_1035706684(IEEE_P_1242562249, t19, t5, t21, t20, t42);
    t28 = (t0 + 5048);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t41 = (t30 + 56U);
    t44 = *((char **)t41);
    memcpy(t44, t27, 24U);
    xsi_driver_first_trans_fast(t28);

LAB20:    goto LAB17;

LAB19:    xsi_set_current_line(55, ng0);
    t13 = (t0 + 1672U);
    t14 = *((char **)t13);
    t25 = (31 - 22);
    t34 = (t25 * 1U);
    t35 = (0 + t34);
    t13 = (t14 + t35);
    t18 = (t19 + 0U);
    t20 = (t18 + 0U);
    *((int *)t20) = 22;
    t20 = (t18 + 4U);
    *((int *)t20) = 0;
    t20 = (t18 + 8U);
    *((int *)t20) = -1;
    t24 = (0 - 22);
    t36 = (t24 * -1);
    t36 = (t36 + 1);
    t20 = (t18 + 12U);
    *((unsigned int *)t20) = t36;
    t20 = (t0 + 1832U);
    t22 = *((char **)t20);
    t36 = (31 - 22);
    t37 = (t36 * 1U);
    t38 = (0 + t37);
    t20 = (t22 + t38);
    t23 = (t21 + 0U);
    t27 = (t23 + 0U);
    *((int *)t27) = 22;
    t27 = (t23 + 4U);
    *((int *)t27) = 0;
    t27 = (t23 + 8U);
    *((int *)t27) = -1;
    t31 = (0 - 22);
    t39 = (t31 * -1);
    t39 = (t39 + 1);
    t27 = (t23 + 12U);
    *((unsigned int *)t27) = t39;
    t40 = ieee_p_1242562249_sub_2110411308_1035706684(IEEE_P_1242562249, t13, t19, t20, t21);
    if (t40 != 0)
        goto LAB22;

LAB24:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 4792);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t13 = *((char **)t6);
    *((unsigned char *)t13) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);

LAB23:    xsi_set_current_line(60, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t8 = (31 - 22);
    t9 = (t8 * 1U);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t6 = ((IEEE_P_2592010699) + 4024);
    t13 = (t33 + 0U);
    t14 = (t13 + 0U);
    *((int *)t14) = 22;
    t14 = (t13 + 4U);
    *((int *)t14) = 0;
    t14 = (t13 + 8U);
    *((int *)t14) = -1;
    t3 = (0 - 22);
    t15 = (t3 * -1);
    t15 = (t15 + 1);
    t14 = (t13 + 12U);
    *((unsigned int *)t14) = t15;
    t5 = xsi_base_array_concat(t5, t21, t6, (char)99, (unsigned char)3, (char)97, t1, t33, (char)101);
    t14 = (t0 + 1832U);
    t18 = *((char **)t14);
    t15 = (31 - 22);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t14 = (t18 + t17);
    t22 = ((IEEE_P_2592010699) + 4024);
    t23 = (t43 + 0U);
    t27 = (t23 + 0U);
    *((int *)t27) = 22;
    t27 = (t23 + 4U);
    *((int *)t27) = 0;
    t27 = (t23 + 8U);
    *((int *)t27) = -1;
    t7 = (0 - 22);
    t25 = (t7 * -1);
    t25 = (t25 + 1);
    t27 = (t23 + 12U);
    *((unsigned int *)t27) = t25;
    t20 = xsi_base_array_concat(t20, t42, t22, (char)99, (unsigned char)3, (char)97, t14, t43, (char)101);
    t27 = ieee_p_1242562249_sub_1547270861_1035706684(IEEE_P_1242562249, t19, t5, t21, t20, t42);
    t28 = (t0 + 5048);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t41 = (t30 + 56U);
    t44 = *((char **)t41);
    memcpy(t44, t27, 24U);
    xsi_driver_first_trans_fast(t28);
    goto LAB20;

LAB22:    xsi_set_current_line(56, ng0);
    t27 = (t0 + 4792);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = (t29 + 56U);
    t41 = *((char **)t30);
    *((unsigned char *)t41) = (unsigned char)2;
    xsi_driver_first_trans_delta(t27, 0U, 1, 0LL);
    goto LAB23;

LAB25:    xsi_set_current_line(67, ng0);
    t5 = (t0 + 1832U);
    t6 = *((char **)t5);
    t15 = (31 - 22);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t5 = (t6 + t17);
    t13 = (t19 + 0U);
    t14 = (t13 + 0U);
    *((int *)t14) = 22;
    t14 = (t13 + 4U);
    *((int *)t14) = 0;
    t14 = (t13 + 8U);
    *((int *)t14) = -1;
    t7 = (0 - 22);
    t25 = (t7 * -1);
    t25 = (t25 + 1);
    t14 = (t13 + 12U);
    *((unsigned int *)t14) = t25;
    t14 = (t0 + 1672U);
    t18 = *((char **)t14);
    t25 = (31 - 22);
    t34 = (t25 * 1U);
    t35 = (0 + t34);
    t14 = (t18 + t35);
    t20 = (t21 + 0U);
    t22 = (t20 + 0U);
    *((int *)t22) = 22;
    t22 = (t20 + 4U);
    *((int *)t22) = 0;
    t22 = (t20 + 8U);
    *((int *)t22) = -1;
    t24 = (0 - 22);
    t36 = (t24 * -1);
    t36 = (t36 + 1);
    t22 = (t20 + 12U);
    *((unsigned int *)t22) = t36;
    t12 = ieee_p_1242562249_sub_2110411308_1035706684(IEEE_P_1242562249, t5, t19, t14, t21);
    if (t12 != 0)
        goto LAB28;

LAB30:    xsi_set_current_line(70, ng0);
    t1 = (t0 + 4792);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t13 = *((char **)t6);
    *((unsigned char *)t13) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);

LAB29:    xsi_set_current_line(72, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t8 = (31 - 22);
    t9 = (t8 * 1U);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t6 = ((IEEE_P_2592010699) + 4024);
    t13 = (t33 + 0U);
    t14 = (t13 + 0U);
    *((int *)t14) = 22;
    t14 = (t13 + 4U);
    *((int *)t14) = 0;
    t14 = (t13 + 8U);
    *((int *)t14) = -1;
    t3 = (0 - 22);
    t15 = (t3 * -1);
    t15 = (t15 + 1);
    t14 = (t13 + 12U);
    *((unsigned int *)t14) = t15;
    t5 = xsi_base_array_concat(t5, t21, t6, (char)99, (unsigned char)3, (char)97, t1, t33, (char)101);
    t14 = (t0 + 1672U);
    t18 = *((char **)t14);
    t15 = (31 - 22);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t14 = (t18 + t17);
    t22 = ((IEEE_P_2592010699) + 4024);
    t23 = (t43 + 0U);
    t27 = (t23 + 0U);
    *((int *)t27) = 22;
    t27 = (t23 + 4U);
    *((int *)t27) = 0;
    t27 = (t23 + 8U);
    *((int *)t27) = -1;
    t7 = (0 - 22);
    t25 = (t7 * -1);
    t25 = (t25 + 1);
    t27 = (t23 + 12U);
    *((unsigned int *)t27) = t25;
    t20 = xsi_base_array_concat(t20, t42, t22, (char)99, (unsigned char)3, (char)97, t14, t43, (char)101);
    t27 = ieee_p_1242562249_sub_1547270861_1035706684(IEEE_P_1242562249, t19, t5, t21, t20, t42);
    t28 = (t0 + 5048);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t41 = (t30 + 56U);
    t44 = *((char **)t41);
    memcpy(t44, t27, 24U);
    xsi_driver_first_trans_fast(t28);
    goto LAB26;

LAB28:    xsi_set_current_line(68, ng0);
    t22 = (t0 + 4792);
    t23 = (t22 + 56U);
    t27 = *((char **)t23);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    *((unsigned char *)t29) = (unsigned char)2;
    xsi_driver_first_trans_delta(t22, 0U, 1, 0LL);
    goto LAB29;

LAB31:    xsi_set_current_line(81, ng0);
    t5 = (t0 + 2152U);
    t6 = *((char **)t5);
    t5 = (t0 + 7640U);
    t13 = ieee_p_2592010699_sub_3293060193_503743352(IEEE_P_2592010699, t21, t6, t5, (unsigned char)0);
    t14 = (t21 + 12U);
    t15 = *((unsigned int *)t14);
    t15 = (t15 * 1U);
    t18 = xsi_vhdl_bitvec_sll(t18, t13, t15, 1);
    t20 = ieee_p_2592010699_sub_393209765_503743352(IEEE_P_2592010699, t19, t18, t21);
    t22 = (t19 + 12U);
    t16 = *((unsigned int *)t22);
    t16 = (t16 * 1U);
    t12 = (24U != t16);
    if (t12 == 1)
        goto LAB34;

LAB35:    t23 = (t0 + 5048);
    t27 = (t23 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memcpy(t30, t20, 24U);
    xsi_driver_first_trans_fast(t23);
    xsi_set_current_line(82, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t8 = (31 - 30);
    t9 = (t8 * 1U);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t5 = (t21 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 30;
    t6 = (t5 + 4U);
    *((int *)t6) = 23;
    t6 = (t5 + 8U);
    *((int *)t6) = -1;
    t3 = (23 - 30);
    t15 = (t3 * -1);
    t15 = (t15 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t15;
    t6 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t19, t1, t21, 1);
    t13 = (t0 + 4792);
    t14 = (t13 + 56U);
    t18 = *((char **)t14);
    t20 = (t18 + 56U);
    t22 = *((char **)t20);
    memcpy(t22, t6, 8U);
    xsi_driver_first_trans_delta(t13, 1U, 8U, 0LL);
    goto LAB32;

LAB34:    xsi_size_not_matching(24U, t16, 0);
    goto LAB35;

LAB37:    xsi_set_current_line(91, ng0);
    t5 = (t0 + 1992U);
    t6 = *((char **)t5);
    t15 = (31 - 22);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t5 = (t6 + t17);
    t13 = (t33 + 0U);
    t14 = (t13 + 0U);
    *((int *)t14) = 22;
    t14 = (t13 + 4U);
    *((int *)t14) = 0;
    t14 = (t13 + 8U);
    *((int *)t14) = -1;
    t7 = (0 - 22);
    t25 = (t7 * -1);
    t25 = (t25 + 1);
    t14 = (t13 + 12U);
    *((unsigned int *)t14) = t25;
    t14 = ieee_p_2592010699_sub_3293060193_503743352(IEEE_P_2592010699, t21, t5, t33, (unsigned char)0);
    t18 = (t21 + 12U);
    t25 = *((unsigned int *)t18);
    t25 = (t25 * 1U);
    t20 = xsi_vhdl_bitvec_sll(t20, t14, t25, 1);
    t22 = ieee_p_2592010699_sub_393209765_503743352(IEEE_P_2592010699, t19, t20, t21);
    t23 = (t19 + 12U);
    t34 = *((unsigned int *)t23);
    t34 = (t34 * 1U);
    t12 = (23U != t34);
    if (t12 == 1)
        goto LAB40;

LAB41:    t27 = (t0 + 4792);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = (t29 + 56U);
    t41 = *((char **)t30);
    memcpy(t41, t22, 23U);
    xsi_driver_first_trans_delta(t27, 9U, 23U, 0LL);
    xsi_set_current_line(92, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t8 = (31 - 30);
    t9 = (t8 * 1U);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t5 = (t21 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 30;
    t6 = (t5 + 4U);
    *((int *)t6) = 23;
    t6 = (t5 + 8U);
    *((int *)t6) = -1;
    t3 = (23 - 30);
    t15 = (t3 * -1);
    t15 = (t15 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t15;
    t6 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t19, t1, t21, 1);
    t13 = (t0 + 4792);
    t14 = (t13 + 56U);
    t18 = *((char **)t14);
    t20 = (t18 + 56U);
    t22 = *((char **)t20);
    memcpy(t22, t6, 8U);
    xsi_driver_first_trans_delta(t13, 1U, 8U, 0LL);
    goto LAB36;

LAB38:;
LAB40:    xsi_size_not_matching(23U, t34, 0);
    goto LAB41;

LAB42:    xsi_set_current_line(95, ng0);
    t5 = (t0 + 1992U);
    t6 = *((char **)t5);
    t15 = (31 - 22);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t5 = (t6 + t17);
    t13 = (t33 + 0U);
    t14 = (t13 + 0U);
    *((int *)t14) = 22;
    t14 = (t13 + 4U);
    *((int *)t14) = 0;
    t14 = (t13 + 8U);
    *((int *)t14) = -1;
    t7 = (0 - 22);
    t25 = (t7 * -1);
    t25 = (t25 + 1);
    t14 = (t13 + 12U);
    *((unsigned int *)t14) = t25;
    t14 = ieee_p_2592010699_sub_3293060193_503743352(IEEE_P_2592010699, t21, t5, t33, (unsigned char)0);
    t18 = (t21 + 12U);
    t25 = *((unsigned int *)t18);
    t25 = (t25 * 1U);
    t20 = xsi_vhdl_bitvec_sll(t20, t14, t25, 1);
    t22 = ieee_p_2592010699_sub_393209765_503743352(IEEE_P_2592010699, t19, t20, t21);
    t23 = (t19 + 12U);
    t34 = *((unsigned int *)t23);
    t34 = (t34 * 1U);
    t12 = (23U != t34);
    if (t12 == 1)
        goto LAB45;

LAB46:    t27 = (t0 + 4792);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = (t29 + 56U);
    t41 = *((char **)t30);
    memcpy(t41, t22, 23U);
    xsi_driver_first_trans_delta(t27, 9U, 23U, 0LL);
    xsi_set_current_line(96, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t8 = (31 - 30);
    t9 = (t8 * 1U);
    t10 = (0 + t9);
    t1 = (t2 + t10);
    t5 = (t21 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 30;
    t6 = (t5 + 4U);
    *((int *)t6) = 23;
    t6 = (t5 + 8U);
    *((int *)t6) = -1;
    t3 = (23 - 30);
    t15 = (t3 * -1);
    t15 = (t15 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t15;
    t6 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t19, t1, t21, 1);
    t13 = (t0 + 4792);
    t14 = (t13 + 56U);
    t18 = *((char **)t14);
    t20 = (t18 + 56U);
    t22 = *((char **)t20);
    memcpy(t22, t6, 8U);
    xsi_driver_first_trans_delta(t13, 1U, 8U, 0LL);
    goto LAB43;

LAB45:    xsi_size_not_matching(23U, t34, 0);
    goto LAB46;

}

static void work_a_2193037639_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(103, ng0);

LAB3:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 5176);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 4584);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_2193037639_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2193037639_3212880686_p_0,(void *)work_a_2193037639_3212880686_p_1,(void *)work_a_2193037639_3212880686_p_2,(void *)work_a_2193037639_3212880686_p_3};
	xsi_register_didat("work_a_2193037639_3212880686", "isim/float_sub_isim_beh.exe.sim/work/a_2193037639_3212880686.didat");
	xsi_register_executes(pe);
}
