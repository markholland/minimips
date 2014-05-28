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
static const char *ng0 = "//psf/Home/Dropbox/UNI 13-14/2nd Semester/Dsd/Xilinx Projects/Lab5/ClockDivisorN.vhd";



static void work_a_1274991756_3212880686_p_0(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    int t9;
    int t10;
    unsigned char t11;
    char *t12;

LAB0:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 568U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 1676);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(46, ng0);
    t4 = (t0 + 924U);
    t8 = *((char **)t4);
    t9 = *((int *)t8);
    t10 = (2500 - 1);
    t11 = (t9 == t10);
    if (t11 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1720);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t12 = *((char **)t8);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 924U);
    t4 = *((char **)t2);
    t9 = *((int *)t4);
    t10 = (t9 + 1);
    t2 = (t0 + 924U);
    t5 = *((char **)t2);
    t2 = (t5 + 0);
    *((int *)t2) = t10;

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 592U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(47, ng0);
    t4 = (t0 + 924U);
    t12 = *((char **)t4);
    t4 = (t12 + 0);
    *((int *)t4) = 0;
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1720);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t12 = *((char **)t8);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB9;

}


extern void work_a_1274991756_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1274991756_3212880686_p_0};
	xsi_register_didat("work_a_1274991756_3212880686", "isim/test_MiniMips_BRAM_isim_beh.exe.sim/work/a_1274991756_3212880686.didat");
	xsi_register_executes(pe);
}
