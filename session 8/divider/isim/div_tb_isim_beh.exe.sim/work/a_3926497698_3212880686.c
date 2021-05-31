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
static const char *ng0 = "S:/uni/4/Az memar/session 8/divider/divider.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_p_2592010699_sub_1837678034_503743352(char *, char *, char *, char *);
unsigned char ieee_p_3620187407_sub_1742983514_3965413181(char *, char *, char *, char *, char *);
unsigned char ieee_p_3620187407_sub_4060537613_3965413181(char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_3926497698_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(51, ng0);

LAB3:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = (8 - 3);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 3816);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast_port(t6);

LAB2:    t11 = (t0 + 3720);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3926497698_3212880686_p_1(char *t0)
{
    char t12[16];
    char t20[16];
    char t23[16];
    char t26[16];
    char t28[16];
    char t39[16];
    char *t1;
    char *t2;
    int t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned char t18;
    unsigned char t19;
    unsigned int t21;
    unsigned int t22;
    int t24;
    unsigned int t25;
    char *t27;
    char *t29;
    char *t30;
    int t31;
    char *t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t40;
    char *t41;
    char *t42;

LAB0:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t4 = (t3 == 8);
    if (t4 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(69, ng0);
    t1 = (t0 + 1472U);
    t18 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t18 == 1)
        goto LAB11;

LAB12:    t4 = (unsigned char)0;

LAB13:    if (t4 != 0)
        goto LAB8;

LAB10:
LAB9:    t1 = (t0 + 3736);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 3880);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    xsi_set_current_line(60, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 3880);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_delta(t1, 1U, 8U, 0LL);
    xsi_set_current_line(61, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t9 = (7 - 7);
    t10 = (t9 * 1U);
    t11 = (0 + t10);
    t1 = (t2 + t11);
    t5 = (t12 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 7;
    t6 = (t5 + 4U);
    *((int *)t6) = 4;
    t6 = (t5 + 8U);
    *((int *)t6) = -1;
    t3 = (4 - 7);
    t13 = (t3 * -1);
    t13 = (t13 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t13;
    t6 = (t0 + 1192U);
    t7 = *((char **)t6);
    t6 = (t0 + 5956U);
    t4 = ieee_p_3620187407_sub_1742983514_3965413181(IEEE_P_3620187407, t1, t12, t7, t6);
    if (t4 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(64, ng0);
    t1 = (t0 + 3944);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(62, ng0);
    t8 = (t0 + 3944);
    t14 = (t8 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t8);
    goto LAB6;

LAB8:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 1992U);
    t6 = *((char **)t2);
    t9 = (8 - 7);
    t10 = (t9 * 1U);
    t11 = (0 + t10);
    t2 = (t6 + t11);
    t7 = (t0 + 3880);
    t8 = (t7 + 56U);
    t14 = *((char **)t8);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t2, 8U);
    xsi_driver_first_trans_delta(t7, 0U, 8U, 0LL);
    xsi_set_current_line(72, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = (8 - 8);
    t9 = (t3 * -1);
    t10 = (1U * t9);
    t11 = (0 + t10);
    t1 = (t2 + t11);
    t4 = *((unsigned char *)t1);
    t18 = (t4 == (unsigned char)3);
    if (t18 != 0)
        goto LAB14;

LAB16:    xsi_set_current_line(76, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t9 = (8 - 7);
    t10 = (t9 * 1U);
    t11 = (0 + t10);
    t1 = (t2 + t11);
    t5 = (t12 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 7;
    t6 = (t5 + 4U);
    *((int *)t6) = 4;
    t6 = (t5 + 8U);
    *((int *)t6) = -1;
    t3 = (4 - 7);
    t13 = (t3 * -1);
    t13 = (t13 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t13;
    t6 = (t0 + 1192U);
    t7 = *((char **)t6);
    t6 = (t0 + 5956U);
    t4 = ieee_p_3620187407_sub_4060537613_3965413181(IEEE_P_3620187407, t1, t12, t7, t6);
    if (t4 != 0)
        goto LAB19;

LAB21:    xsi_set_current_line(80, ng0);
    t1 = (t0 + 3880);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 8U, 1, 0LL);

LAB20:
LAB15:    xsi_set_current_line(83, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t24 = (t3 - 1);
    t1 = (t0 + 4008);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t24;
    xsi_driver_first_trans_fast(t1);
    goto LAB9;

LAB11:    t2 = (t0 + 1832U);
    t5 = *((char **)t2);
    t3 = *((int *)t5);
    t19 = (t3 > 0);
    t4 = t19;
    goto LAB13;

LAB14:    xsi_set_current_line(73, ng0);
    t5 = (t0 + 1992U);
    t6 = *((char **)t5);
    t13 = (8 - 7);
    t21 = (t13 * 1U);
    t22 = (0 + t21);
    t5 = (t6 + t22);
    t7 = (t23 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 7;
    t8 = (t7 + 4U);
    *((int *)t8) = 4;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t24 = (4 - 7);
    t25 = (t24 * -1);
    t25 = (t25 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t25;
    t8 = (t0 + 1192U);
    t14 = *((char **)t8);
    t8 = (t0 + 5956U);
    t15 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t26, t14, t8);
    t16 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t20, t5, t23, t15, t26);
    t17 = (t0 + 6041);
    t29 = (t28 + 0U);
    t30 = (t29 + 0U);
    *((int *)t30) = 0;
    t30 = (t29 + 4U);
    *((int *)t30) = 4;
    t30 = (t29 + 8U);
    *((int *)t30) = 1;
    t31 = (4 - 0);
    t25 = (t31 * 1);
    t25 = (t25 + 1);
    t30 = (t29 + 12U);
    *((unsigned int *)t30) = t25;
    t30 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t12, t16, t20, t17, t28);
    t32 = (t12 + 12U);
    t25 = *((unsigned int *)t32);
    t33 = (1U * t25);
    t19 = (5U != t33);
    if (t19 == 1)
        goto LAB17;

LAB18:    t34 = (t0 + 3880);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    memcpy(t38, t30, 5U);
    xsi_driver_first_trans_delta(t34, 0U, 5U, 0LL);
    xsi_set_current_line(74, ng0);
    t1 = (t0 + 3880);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 8U, 1, 0LL);
    goto LAB15;

LAB17:    xsi_size_not_matching(5U, t33, 0);
    goto LAB18;

LAB19:    xsi_set_current_line(77, ng0);
    t8 = (t0 + 1992U);
    t14 = *((char **)t8);
    t13 = (8 - 7);
    t21 = (t13 * 1U);
    t22 = (0 + t21);
    t8 = (t14 + t22);
    t15 = (t26 + 0U);
    t16 = (t15 + 0U);
    *((int *)t16) = 7;
    t16 = (t15 + 4U);
    *((int *)t16) = 4;
    t16 = (t15 + 8U);
    *((int *)t16) = -1;
    t24 = (4 - 7);
    t25 = (t24 * -1);
    t25 = (t25 + 1);
    t16 = (t15 + 12U);
    *((unsigned int *)t16) = t25;
    t16 = (t0 + 1192U);
    t17 = *((char **)t16);
    t16 = (t0 + 5956U);
    t27 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t28, t17, t16);
    t29 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t23, t8, t26, t27, t28);
    t30 = (t0 + 6046);
    t34 = (t39 + 0U);
    t35 = (t34 + 0U);
    *((int *)t35) = 0;
    t35 = (t34 + 4U);
    *((int *)t35) = 4;
    t35 = (t34 + 8U);
    *((int *)t35) = 1;
    t31 = (4 - 0);
    t25 = (t31 * 1);
    t25 = (t25 + 1);
    t35 = (t34 + 12U);
    *((unsigned int *)t35) = t25;
    t35 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t20, t29, t23, t30, t39);
    t36 = (t20 + 12U);
    t25 = *((unsigned int *)t36);
    t33 = (1U * t25);
    t18 = (5U != t33);
    if (t18 == 1)
        goto LAB22;

LAB23:    t37 = (t0 + 3880);
    t38 = (t37 + 56U);
    t40 = *((char **)t38);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    memcpy(t42, t35, 5U);
    xsi_driver_first_trans_delta(t37, 0U, 5U, 0LL);
    xsi_set_current_line(78, ng0);
    t1 = (t0 + 3880);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 8U, 1, 0LL);
    goto LAB20;

LAB22:    xsi_size_not_matching(5U, t33, 0);
    goto LAB23;

}


extern void work_a_3926497698_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3926497698_3212880686_p_0,(void *)work_a_3926497698_3212880686_p_1};
	xsi_register_didat("work_a_3926497698_3212880686", "isim/div_tb_isim_beh.exe.sim/work/a_3926497698_3212880686.didat");
	xsi_register_executes(pe);
}
