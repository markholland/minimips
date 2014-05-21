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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "//psf/Home/Dropbox/UNI 13-14/2nd Semester/Dsd/Xilinx Projects/Lab5/ALU.vhd";
extern char *IEEE_P_0774719531;
extern char *IEEE_P_2592010699;

unsigned char ieee_p_0774719531_sub_1742983514_2162500114(char *, char *, char *, char *, char *);
unsigned char ieee_p_0774719531_sub_2546418145_2162500114(char *, char *, char *, int );
char *ieee_p_0774719531_sub_767668596_2162500114(char *, char *, char *, char *, char *, char *);
char *ieee_p_0774719531_sub_767740470_2162500114(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_1735675855_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_795620321_503743352(char *, char *, char *, char *, char *, char *);


static void work_a_0832606739_3212880686_p_0(char *t0)
{
    char t17[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    int t7;
    char *t8;
    char *t9;
    int t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    int t16;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned char t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;

LAB0:    xsi_set_current_line(52, ng0);
    t1 = (t0 + 2104);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(53, ng0);
    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t1 = (t0 + 3987);
    t6 = xsi_mem_cmp(t1, t2, 3U);
    if (t6 == 1)
        goto LAB3;

LAB9:    t4 = (t0 + 3990);
    t7 = xsi_mem_cmp(t4, t2, 3U);
    if (t7 == 1)
        goto LAB4;

LAB10:    t8 = (t0 + 3993);
    t10 = xsi_mem_cmp(t8, t2, 3U);
    if (t10 == 1)
        goto LAB5;

LAB11:    t11 = (t0 + 3996);
    t13 = xsi_mem_cmp(t11, t2, 3U);
    if (t13 == 1)
        goto LAB6;

LAB12:    t14 = (t0 + 3999);
    t16 = xsi_mem_cmp(t14, t2, 3U);
    if (t16 == 1)
        goto LAB7;

LAB13:
LAB8:    xsi_set_current_line(71, ng0);
    t1 = (t0 + 4010);
    t3 = (t0 + 2140);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast(t3);

LAB2:    t1 = (t0 + 2052);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(55, ng0);
    t18 = (t0 + 592U);
    t19 = *((char **)t18);
    t18 = (t0 + 3872U);
    t20 = (t0 + 684U);
    t21 = *((char **)t20);
    t20 = (t0 + 3888U);
    t22 = ieee_p_0774719531_sub_767668596_2162500114(IEEE_P_0774719531, t17, t19, t18, t21, t20);
    t23 = (t17 + 12U);
    t24 = *((unsigned int *)t23);
    t25 = (1U * t24);
    t26 = (8U != t25);
    if (t26 == 1)
        goto LAB15;

LAB16:    t27 = (t0 + 2140);
    t28 = (t27 + 32U);
    t29 = *((char **)t28);
    t30 = (t29 + 40U);
    t31 = *((char **)t30);
    memcpy(t31, t22, 8U);
    xsi_driver_first_trans_fast(t27);
    goto LAB2;

LAB4:    xsi_set_current_line(57, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t1 = (t0 + 3872U);
    t3 = (t0 + 684U);
    t4 = *((char **)t3);
    t3 = (t0 + 3888U);
    t5 = ieee_p_0774719531_sub_767740470_2162500114(IEEE_P_0774719531, t17, t2, t1, t4, t3);
    t8 = (t17 + 12U);
    t24 = *((unsigned int *)t8);
    t25 = (1U * t24);
    t26 = (8U != t25);
    if (t26 == 1)
        goto LAB17;

LAB18:    t9 = (t0 + 2140);
    t11 = (t9 + 32U);
    t12 = *((char **)t11);
    t14 = (t12 + 40U);
    t15 = *((char **)t14);
    memcpy(t15, t5, 8U);
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(58, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t1 = (t0 + 3872U);
    t3 = (t0 + 684U);
    t4 = *((char **)t3);
    t3 = (t0 + 3888U);
    t5 = ieee_p_0774719531_sub_767740470_2162500114(IEEE_P_0774719531, t17, t2, t1, t4, t3);
    t26 = ieee_p_0774719531_sub_2546418145_2162500114(IEEE_P_0774719531, t5, t17, 0);
    if (t26 != 0)
        goto LAB19;

LAB21:
LAB20:    goto LAB2;

LAB5:    xsi_set_current_line(62, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t1 = (t0 + 3872U);
    t3 = (t0 + 684U);
    t4 = *((char **)t3);
    t3 = (t0 + 3888U);
    t5 = ieee_p_2592010699_sub_795620321_503743352(IEEE_P_2592010699, t17, t2, t1, t4, t3);
    t8 = (t17 + 12U);
    t24 = *((unsigned int *)t8);
    t25 = (1U * t24);
    t26 = (8U != t25);
    if (t26 == 1)
        goto LAB22;

LAB23:    t9 = (t0 + 2140);
    t11 = (t9 + 32U);
    t12 = *((char **)t11);
    t14 = (t12 + 40U);
    t15 = *((char **)t14);
    memcpy(t15, t5, 8U);
    xsi_driver_first_trans_fast(t9);
    goto LAB2;

LAB6:    xsi_set_current_line(64, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t1 = (t0 + 3872U);
    t3 = (t0 + 684U);
    t4 = *((char **)t3);
    t3 = (t0 + 3888U);
    t5 = ieee_p_2592010699_sub_1735675855_503743352(IEEE_P_2592010699, t17, t2, t1, t4, t3);
    t8 = (t17 + 12U);
    t24 = *((unsigned int *)t8);
    t25 = (1U * t24);
    t26 = (8U != t25);
    if (t26 == 1)
        goto LAB24;

LAB25:    t9 = (t0 + 2140);
    t11 = (t9 + 32U);
    t12 = *((char **)t11);
    t14 = (t12 + 40U);
    t15 = *((char **)t14);
    memcpy(t15, t5, 8U);
    xsi_driver_first_trans_fast(t9);
    goto LAB2;

LAB7:    xsi_set_current_line(66, ng0);
    t1 = (t0 + 4002);
    t3 = (t0 + 2140);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(67, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t1 = (t0 + 3872U);
    t3 = (t0 + 684U);
    t4 = *((char **)t3);
    t3 = (t0 + 3888U);
    t26 = ieee_p_0774719531_sub_1742983514_2162500114(IEEE_P_0774719531, t2, t1, t4, t3);
    if (t26 != 0)
        goto LAB26;

LAB28:
LAB27:    goto LAB2;

LAB14:;
LAB15:    xsi_size_not_matching(8U, t25, 0);
    goto LAB16;

LAB17:    xsi_size_not_matching(8U, t25, 0);
    goto LAB18;

LAB19:    xsi_set_current_line(59, ng0);
    t8 = (t0 + 2104);
    t9 = (t8 + 32U);
    t11 = *((char **)t9);
    t12 = (t11 + 40U);
    t14 = *((char **)t12);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t8);
    goto LAB20;

LAB22:    xsi_size_not_matching(8U, t25, 0);
    goto LAB23;

LAB24:    xsi_size_not_matching(8U, t25, 0);
    goto LAB25;

LAB26:    xsi_set_current_line(68, ng0);
    t5 = (t0 + 2104);
    t8 = (t5 + 32U);
    t9 = *((char **)t8);
    t11 = (t9 + 40U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t5);
    goto LAB27;

}

static void work_a_0832606739_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(75, ng0);

LAB3:    t1 = (t0 + 1052U);
    t2 = *((char **)t1);
    t1 = (t0 + 2176);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 2060);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_0832606739_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0832606739_3212880686_p_0,(void *)work_a_0832606739_3212880686_p_1};
	xsi_register_didat("work_a_0832606739_3212880686", "isim/test_MiniMips_isim_beh.exe.sim/work/a_0832606739_3212880686.didat");
	xsi_register_executes(pe);
}
