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
static const char *ng0 = "//psf/Home/Dropbox/UNI 13-14/2nd Semester/Dsd/Xilinx Projects/Lab5/Multiplexer2.vhd";



static void work_a_1292482270_2374350694_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    static char *nl0[] = {&&LAB5, &&LAB5, &&LAB3, &&LAB4, &&LAB5, &&LAB5, &&LAB5, &&LAB5, &&LAB5};

LAB0:    xsi_set_current_line(27, ng0);
    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 1792);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(29, ng0);
    t4 = (t0 + 592U);
    t5 = *((char **)t4);
    t4 = (t0 + 1836);
    t6 = (t4 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 5U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB2;

LAB4:    xsi_set_current_line(31, ng0);
    t1 = (t0 + 684U);
    t2 = *((char **)t1);
    t1 = (t0 + 1836);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 5U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB5:    xsi_set_current_line(33, ng0);
    t1 = xsi_get_transient_memory(5U);
    memset(t1, 0, 5U);
    t2 = t1;
    memset(t2, (unsigned char)4, 5U);
    t4 = (t0 + 1836);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 5U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB2;

}


extern void work_a_1292482270_2374350694_init()
{
	static char *pe[] = {(void *)work_a_1292482270_2374350694_p_0};
	xsi_register_didat("work_a_1292482270_2374350694", "isim/test_MiniMips_BRAM_isim_beh.exe.sim/work/a_1292482270_2374350694.didat");
	xsi_register_executes(pe);
}
