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
static const char *ng0 = "//psf/Home/Dropbox/UNI 13-14/2nd Semester/Dsd/Xilinx Projects/Lab5/Memory.vhd";
extern char *IEEE_P_3620187407;

int ieee_p_3620187407_sub_514432868_3965413181(char *, char *, char *);


static void work_a_3392787015_3212880686_p_0(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    char *t12;
    int t13;
    int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    xsi_set_current_line(315, ng0);
    t2 = (t0 + 568U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 2708);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(316, ng0);
    t4 = (t0 + 960U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(319, ng0);
    t2 = xsi_get_transient_memory(8U);
    memset(t2, 0, 8U);
    t4 = t2;
    memset(t4, (unsigned char)4, 8U);
    t5 = (t0 + 2776);
    t8 = (t5 + 32U);
    t11 = *((char **)t8);
    t12 = (t11 + 40U);
    t18 = *((char **)t12);
    memcpy(t18, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);

LAB9:    xsi_set_current_line(322, ng0);
    t2 = (t0 + 1052U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB13:
LAB12:    goto LAB3;

LAB5:    t4 = (t0 + 592U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(317, ng0);
    t4 = (t0 + 1420U);
    t11 = *((char **)t4);
    t4 = (t0 + 684U);
    t12 = *((char **)t4);
    t4 = (t0 + 5320U);
    t13 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t12, t4);
    t14 = (t13 - 0);
    t15 = (t14 * 1);
    xsi_vhdl_check_range_of_index(0, 255, 1, t13);
    t16 = (8U * t15);
    t17 = (0 + t16);
    t18 = (t11 + t17);
    t19 = (t0 + 2776);
    t20 = (t19 + 32U);
    t21 = *((char **)t20);
    t22 = (t21 + 40U);
    t23 = *((char **)t22);
    memcpy(t23, t18, 8U);
    xsi_driver_first_trans_fast_port(t19);
    goto LAB9;

LAB11:    xsi_set_current_line(323, ng0);
    t2 = (t0 + 776U);
    t5 = *((char **)t2);
    t2 = (t0 + 684U);
    t8 = *((char **)t2);
    t2 = (t0 + 5320U);
    t13 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t8, t2);
    t14 = (t13 - 0);
    t15 = (t14 * 1);
    t16 = (8U * t15);
    t17 = (0U + t16);
    t11 = (t0 + 2812);
    t12 = (t11 + 32U);
    t18 = *((char **)t12);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    memcpy(t20, t5, 8U);
    xsi_driver_first_trans_delta(t11, t17, 8U, 0LL);
    goto LAB12;

}

static void work_a_3392787015_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(329, ng0);

LAB3:    t1 = (t0 + 1420U);
    t2 = *((char **)t1);
    t3 = (253 - 0);
    t4 = (t3 * 1);
    t5 = (8U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = (t0 + 2848);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 8U);
    xsi_driver_first_trans_fast_port(t7);

LAB2:    t12 = (t0 + 2716);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3392787015_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(330, ng0);

LAB3:    t1 = (t0 + 1420U);
    t2 = *((char **)t1);
    t3 = (254 - 0);
    t4 = (t3 * 1);
    t5 = (8U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = (t0 + 2884);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 8U);
    xsi_driver_first_trans_fast_port(t7);

LAB2:    t12 = (t0 + 2724);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3392787015_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(331, ng0);

LAB3:    t1 = (t0 + 1420U);
    t2 = *((char **)t1);
    t3 = (255 - 0);
    t4 = (t3 * 1);
    t5 = (8U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = (t0 + 2920);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 8U);
    xsi_driver_first_trans_fast_port(t7);

LAB2:    t12 = (t0 + 2732);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_3392787015_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3392787015_3212880686_p_0,(void *)work_a_3392787015_3212880686_p_1,(void *)work_a_3392787015_3212880686_p_2,(void *)work_a_3392787015_3212880686_p_3};
	xsi_register_didat("work_a_3392787015_3212880686", "isim/test_MiniMips_isim_beh.exe.sim/work/a_3392787015_3212880686.didat");
	xsi_register_executes(pe);
}
