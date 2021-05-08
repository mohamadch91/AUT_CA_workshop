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
static const char *ng0 = "S:/uni/4/Az memar/session7/az7/cam.vhd";
extern char *IEEE_P_3499444699;
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_p_3499444699_sub_2213602152_3536714472(char *, char *, int , int );


static void work_a_1079056547_3212880686_p_0(char *t0)
{
    char t27[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    int t9;
    int t10;
    int t11;
    unsigned char t12;
    int t13;
    int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned char t18;
    unsigned char t19;
    char *t20;
    unsigned char t21;
    unsigned char t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(36, ng0);
    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t2 = t1;
    memset(t2, (unsigned char)2, 16U);
    t3 = (t0 + 4376);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 16U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(37, ng0);
    t1 = (t0 + 4440);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(38, ng0);
    t1 = (t0 + 4504);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(39, ng0);
    t1 = (t0 + 2728U);
    t2 = *((char **)t1);
    t8 = *((int *)t2);
    t9 = (t8 - 1);
    t1 = (t0 + 6790);
    *((int *)t1) = 0;
    t3 = (t0 + 6794);
    *((int *)t3) = t9;
    t10 = 0;
    t11 = t9;

LAB2:    if (t10 <= t11)
        goto LAB3;

LAB5:    t1 = (t0 + 4280);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(40, ng0);
    t4 = (t0 + 1512U);
    t5 = *((char **)t4);
    t4 = (t0 + 6790);
    t13 = *((int *)t4);
    t14 = (t13 - 15);
    t15 = (t14 * -1);
    xsi_vhdl_check_range_of_index(15, 0, -1, *((int *)t4));
    t16 = (1U * t15);
    t17 = (0 + t16);
    t6 = (t5 + t17);
    t18 = *((unsigned char *)t6);
    t19 = (t18 == (unsigned char)3);
    if (t19 == 1)
        goto LAB9;

LAB10:    t12 = (unsigned char)0;

LAB11:    if (t12 != 0)
        goto LAB6;

LAB8:    xsi_set_current_line(45, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t12 = *((unsigned char *)t2);
    t1 = (t0 + 4440);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = t12;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(46, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t12 = *((unsigned char *)t2);
    t1 = (t0 + 4504);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = t12;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(47, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 4376);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 16U);
    xsi_driver_first_trans_fast(t1);

LAB7:
LAB4:    t1 = (t0 + 6790);
    t10 = *((int *)t1);
    t2 = (t0 + 6794);
    t11 = *((int *)t2);
    if (t10 == t11)
        goto LAB5;

LAB14:    t8 = (t10 + 1);
    t10 = t8;
    t3 = (t0 + 6790);
    *((int *)t3) = t10;
    goto LAB2;

LAB6:    xsi_set_current_line(41, ng0);
    t7 = (t0 + 4440);
    t23 = (t7 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    *((unsigned char *)t26) = (unsigned char)3;
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(42, ng0);
    t1 = (t0 + 4504);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(43, ng0);
    t1 = (t0 + 6790);
    t2 = ieee_p_3499444699_sub_2213602152_3536714472(IEEE_P_3499444699, t27, *((int *)t1), 16);
    t3 = (t27 + 12U);
    t15 = *((unsigned int *)t3);
    t15 = (t15 * 1U);
    t12 = (16U != t15);
    if (t12 == 1)
        goto LAB12;

LAB13:    t4 = (t0 + 4376);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t20 = *((char **)t7);
    memcpy(t20, t2, 16U);
    xsi_driver_first_trans_fast(t4);
    goto LAB7;

LAB9:    t7 = (t0 + 2312U);
    t20 = *((char **)t7);
    t21 = *((unsigned char *)t20);
    t22 = (t21 == (unsigned char)2);
    t12 = t22;
    goto LAB11;

LAB12:    xsi_size_not_matching(16U, t15, 0);
    goto LAB13;

}

static void work_a_1079056547_3212880686_p_1(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(54, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 4296);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(55, ng0);
    t3 = (t0 + 1352U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 4568);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t9 = *((char **)t7);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(60, ng0);
    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t3 = t1;
    memset(t3, (unsigned char)2, 16U);
    t4 = (t0 + 4632);
    t7 = (t4 + 56U);
    t9 = *((char **)t7);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 16U);
    xsi_driver_first_trans_fast_port(t4);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(56, ng0);
    t3 = (t0 + 2152U);
    t7 = *((char **)t3);
    t8 = *((unsigned char *)t7);
    t3 = (t0 + 4568);
    t9 = (t3 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t8;
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(57, ng0);
    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t1 = (t0 + 4632);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t3, 16U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB6;

}


extern void work_a_1079056547_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1079056547_3212880686_p_0,(void *)work_a_1079056547_3212880686_p_1};
	xsi_register_didat("work_a_1079056547_3212880686", "isim/cam_tb_isim_beh.exe.sim/work/a_1079056547_3212880686.didat");
	xsi_register_executes(pe);
}
