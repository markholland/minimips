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
static const char *ng0 = "//psf/Home/Dropbox/UNI 13-14/2nd Semester/Dsd/Xilinx Projects/Lab5/Instr_Register.vhd";
extern char *IEEE_P_2592010699;



static void work_a_2033712569_3212880686_p_0(char *t0)
{
    char t32[16];
    char t33[16];
    char t35[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    int t13;
    int t14;
    char *t15;
    int t16;
    char *t17;
    char *t18;
    int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t34;

LAB0:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 684U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 568U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 3404);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(60, ng0);
    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t5 = t1;
    memset(t5, (unsigned char)2, 16U);
    t6 = (t0 + 3480);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(61, ng0);
    t1 = xsi_get_transient_memory(5U);
    memset(t1, 0, 5U);
    t2 = t1;
    memset(t2, (unsigned char)2, 5U);
    t5 = (t0 + 3516);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 5U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(62, ng0);
    t1 = xsi_get_transient_memory(5U);
    memset(t1, 0, 5U);
    t2 = t1;
    memset(t2, (unsigned char)2, 5U);
    t5 = (t0 + 3552);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 5U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(63, ng0);
    t1 = xsi_get_transient_memory(6U);
    memset(t1, 0, 6U);
    t2 = t1;
    memset(t2, (unsigned char)2, 6U);
    t5 = (t0 + 3588);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 6U);
    xsi_driver_first_trans_fast(t5);
    goto LAB3;

LAB5:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 776U);
    t6 = *((char **)t2);
    t2 = (t0 + 7118);
    t13 = xsi_mem_cmp(t2, t6, 4U);
    if (t13 == 1)
        goto LAB11;

LAB16:    t8 = (t0 + 7122);
    t14 = xsi_mem_cmp(t8, t6, 4U);
    if (t14 == 1)
        goto LAB12;

LAB17:    t10 = (t0 + 7126);
    t16 = xsi_mem_cmp(t10, t6, 4U);
    if (t16 == 1)
        goto LAB13;

LAB18:    t17 = (t0 + 7130);
    t19 = xsi_mem_cmp(t17, t6, 4U);
    if (t19 == 1)
        goto LAB14;

LAB19:
LAB15:
LAB10:    goto LAB3;

LAB7:    t2 = (t0 + 592U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB9;

LAB11:    xsi_set_current_line(67, ng0);
    t20 = (t0 + 868U);
    t21 = *((char **)t20);
    t20 = (t0 + 3624);
    t22 = (t20 + 32U);
    t23 = *((char **)t22);
    t24 = (t23 + 40U);
    t25 = *((char **)t24);
    memcpy(t25, t21, 8U);
    xsi_driver_first_trans_fast(t20);
    xsi_set_current_line(68, ng0);
    t1 = (t0 + 868U);
    t2 = *((char **)t1);
    t26 = (7 - 7);
    t27 = (t26 * 1U);
    t28 = (0 + t27);
    t1 = (t2 + t28);
    t5 = (t0 + 3588);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 6U);
    xsi_driver_first_trans_fast(t5);
    goto LAB10;

LAB12:    xsi_set_current_line(70, ng0);
    t1 = (t0 + 868U);
    t2 = *((char **)t1);
    t1 = (t0 + 3660);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(71, ng0);
    t1 = (t0 + 1328U);
    t2 = *((char **)t1);
    t26 = (7 - 1);
    t27 = (t26 * 1U);
    t28 = (0 + t27);
    t1 = (t2 + t28);
    t5 = (t0 + 868U);
    t6 = *((char **)t5);
    t29 = (7 - 7);
    t30 = (t29 * 1U);
    t31 = (0 + t30);
    t5 = (t6 + t31);
    t8 = ((IEEE_P_2592010699) + 2332);
    t9 = (t33 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 1;
    t10 = (t9 + 4U);
    *((int *)t10) = 0;
    t10 = (t9 + 8U);
    *((int *)t10) = -1;
    t13 = (0 - 1);
    t34 = (t13 * -1);
    t34 = (t34 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t34;
    t10 = (t35 + 0U);
    t15 = (t10 + 0U);
    *((int *)t15) = 7;
    t15 = (t10 + 4U);
    *((int *)t15) = 5;
    t15 = (t10 + 8U);
    *((int *)t15) = -1;
    t14 = (5 - 7);
    t34 = (t14 * -1);
    t34 = (t34 + 1);
    t15 = (t10 + 12U);
    *((unsigned int *)t15) = t34;
    t7 = xsi_base_array_concat(t7, t32, t8, (char)97, t1, t33, (char)97, t5, t35, (char)101);
    t34 = (2U + 3U);
    t3 = (5U != t34);
    if (t3 == 1)
        goto LAB21;

LAB22:    t15 = (t0 + 3552);
    t17 = (t15 + 32U);
    t18 = *((char **)t17);
    t20 = (t18 + 40U);
    t21 = *((char **)t20);
    memcpy(t21, t7, 5U);
    xsi_driver_first_trans_fast(t15);
    goto LAB10;

LAB13:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 868U);
    t2 = *((char **)t1);
    t1 = (t0 + 3696);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(74, ng0);
    t1 = (t0 + 1420U);
    t2 = *((char **)t1);
    t26 = (7 - 4);
    t27 = (t26 * 1U);
    t28 = (0 + t27);
    t1 = (t2 + t28);
    t5 = (t0 + 3516);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 5U);
    xsi_driver_first_trans_fast(t5);
    goto LAB10;

LAB14:    xsi_set_current_line(76, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 868U);
    t5 = *((char **)t1);
    t6 = ((IEEE_P_2592010699) + 2332);
    t7 = (t0 + 6936U);
    t8 = (t0 + 6824U);
    t1 = xsi_base_array_concat(t1, t32, t6, (char)97, t2, t7, (char)97, t5, t8, (char)101);
    t26 = (8U + 8U);
    t3 = (16U != t26);
    if (t3 == 1)
        goto LAB23;

LAB24:    t9 = (t0 + 3480);
    t10 = (t9 + 32U);
    t15 = *((char **)t10);
    t17 = (t15 + 40U);
    t18 = *((char **)t17);
    memcpy(t18, t1, 16U);
    xsi_driver_first_trans_fast(t9);
    goto LAB10;

LAB20:;
LAB21:    xsi_size_not_matching(5U, t34, 0);
    goto LAB22;

LAB23:    xsi_size_not_matching(16U, t26, 0);
    goto LAB24;

}

static void work_a_2033712569_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(88, ng0);

LAB3:    t1 = (t0 + 1696U);
    t2 = *((char **)t1);
    t1 = (t0 + 3732);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 16U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 3412);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2033712569_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(89, ng0);

LAB3:    t1 = (t0 + 1788U);
    t2 = *((char **)t1);
    t1 = (t0 + 3768);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 5U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 3420);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2033712569_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(90, ng0);

LAB3:    t1 = (t0 + 1880U);
    t2 = *((char **)t1);
    t1 = (t0 + 3804);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 5U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 3428);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2033712569_3212880686_p_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(91, ng0);

LAB3:    t1 = (t0 + 1972U);
    t2 = *((char **)t1);
    t1 = (t0 + 3840);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 6U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 3436);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_2033712569_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2033712569_3212880686_p_0,(void *)work_a_2033712569_3212880686_p_1,(void *)work_a_2033712569_3212880686_p_2,(void *)work_a_2033712569_3212880686_p_3,(void *)work_a_2033712569_3212880686_p_4};
	xsi_register_didat("work_a_2033712569_3212880686", "isim/test_MiniMips_isim_beh.exe.sim/work/a_2033712569_3212880686.didat");
	xsi_register_executes(pe);
}
