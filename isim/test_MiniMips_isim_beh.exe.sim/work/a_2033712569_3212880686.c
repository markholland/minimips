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
    char t35[16];
    char t36[16];
    char t38[16];
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
    unsigned char t13;
    unsigned char t14;
    int t15;
    int t16;
    char *t17;
    char *t18;
    int t19;
    char *t20;
    char *t21;
    int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t37;

LAB0:    xsi_set_current_line(60, ng0);
    t1 = (t0 + 776U);
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
LAB3:    t1 = (t0 + 3496);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(61, ng0);
    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t5 = t1;
    memset(t5, (unsigned char)2, 16U);
    t6 = (t0 + 3572);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(62, ng0);
    t1 = xsi_get_transient_memory(5U);
    memset(t1, 0, 5U);
    t2 = t1;
    memset(t2, (unsigned char)2, 5U);
    t5 = (t0 + 3608);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 5U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(63, ng0);
    t1 = xsi_get_transient_memory(5U);
    memset(t1, 0, 5U);
    t2 = t1;
    memset(t2, (unsigned char)2, 5U);
    t5 = (t0 + 3644);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 5U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(64, ng0);
    t1 = xsi_get_transient_memory(6U);
    memset(t1, 0, 6U);
    t2 = t1;
    memset(t2, (unsigned char)2, 6U);
    t5 = (t0 + 3680);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 6U);
    xsi_driver_first_trans_fast(t5);
    goto LAB3;

LAB5:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 684U);
    t6 = *((char **)t2);
    t13 = *((unsigned char *)t6);
    t14 = (t13 == (unsigned char)3);
    if (t14 != 0)
        goto LAB10;

LAB12:
LAB11:    goto LAB3;

LAB7:    t2 = (t0 + 592U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB9;

LAB10:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 868U);
    t7 = *((char **)t2);
    t2 = (t0 + 7307);
    t15 = xsi_mem_cmp(t2, t7, 4U);
    if (t15 == 1)
        goto LAB14;

LAB19:    t9 = (t0 + 7311);
    t16 = xsi_mem_cmp(t9, t7, 4U);
    if (t16 == 1)
        goto LAB15;

LAB20:    t17 = (t0 + 7315);
    t19 = xsi_mem_cmp(t17, t7, 4U);
    if (t19 == 1)
        goto LAB16;

LAB21:    t20 = (t0 + 7319);
    t22 = xsi_mem_cmp(t20, t7, 4U);
    if (t22 == 1)
        goto LAB17;

LAB22:
LAB18:
LAB13:    goto LAB11;

LAB14:    xsi_set_current_line(69, ng0);
    t23 = (t0 + 960U);
    t24 = *((char **)t23);
    t23 = (t0 + 3716);
    t25 = (t23 + 32U);
    t26 = *((char **)t25);
    t27 = (t26 + 40U);
    t28 = *((char **)t27);
    memcpy(t28, t24, 8U);
    xsi_driver_first_trans_fast(t23);
    xsi_set_current_line(70, ng0);
    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t29 = (7 - 7);
    t30 = (t29 * 1U);
    t31 = (0 + t30);
    t1 = (t2 + t31);
    t5 = (t0 + 3680);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 6U);
    xsi_driver_first_trans_fast(t5);
    goto LAB13;

LAB15:    xsi_set_current_line(72, ng0);
    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t1 = (t0 + 3752);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(73, ng0);
    t1 = (t0 + 1420U);
    t2 = *((char **)t1);
    t29 = (7 - 1);
    t30 = (t29 * 1U);
    t31 = (0 + t30);
    t1 = (t2 + t31);
    t5 = (t0 + 960U);
    t6 = *((char **)t5);
    t32 = (7 - 7);
    t33 = (t32 * 1U);
    t34 = (0 + t33);
    t5 = (t6 + t34);
    t8 = ((IEEE_P_2592010699) + 2332);
    t9 = (t36 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 1;
    t10 = (t9 + 4U);
    *((int *)t10) = 0;
    t10 = (t9 + 8U);
    *((int *)t10) = -1;
    t15 = (0 - 1);
    t37 = (t15 * -1);
    t37 = (t37 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t37;
    t10 = (t38 + 0U);
    t17 = (t10 + 0U);
    *((int *)t17) = 7;
    t17 = (t10 + 4U);
    *((int *)t17) = 5;
    t17 = (t10 + 8U);
    *((int *)t17) = -1;
    t16 = (5 - 7);
    t37 = (t16 * -1);
    t37 = (t37 + 1);
    t17 = (t10 + 12U);
    *((unsigned int *)t17) = t37;
    t7 = xsi_base_array_concat(t7, t35, t8, (char)97, t1, t36, (char)97, t5, t38, (char)101);
    t37 = (2U + 3U);
    t3 = (5U != t37);
    if (t3 == 1)
        goto LAB24;

LAB25:    t17 = (t0 + 3644);
    t18 = (t17 + 32U);
    t20 = *((char **)t18);
    t21 = (t20 + 40U);
    t23 = *((char **)t21);
    memcpy(t23, t7, 5U);
    xsi_driver_first_trans_fast(t17);
    goto LAB13;

LAB16:    xsi_set_current_line(75, ng0);
    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t1 = (t0 + 3788);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(76, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t29 = (7 - 4);
    t30 = (t29 * 1U);
    t31 = (0 + t30);
    t1 = (t2 + t31);
    t5 = (t0 + 3608);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 5U);
    xsi_driver_first_trans_fast(t5);
    goto LAB13;

LAB17:    xsi_set_current_line(78, ng0);
    t1 = (t0 + 1604U);
    t2 = *((char **)t1);
    t1 = (t0 + 960U);
    t5 = *((char **)t1);
    t6 = ((IEEE_P_2592010699) + 2332);
    t7 = (t0 + 7124U);
    t8 = (t0 + 7012U);
    t1 = xsi_base_array_concat(t1, t35, t6, (char)97, t2, t7, (char)97, t5, t8, (char)101);
    t29 = (8U + 8U);
    t3 = (16U != t29);
    if (t3 == 1)
        goto LAB26;

LAB27:    t9 = (t0 + 3572);
    t10 = (t9 + 32U);
    t17 = *((char **)t10);
    t18 = (t17 + 40U);
    t20 = *((char **)t18);
    memcpy(t20, t1, 16U);
    xsi_driver_first_trans_fast(t9);
    goto LAB13;

LAB23:;
LAB24:    xsi_size_not_matching(5U, t37, 0);
    goto LAB25;

LAB26:    xsi_size_not_matching(16U, t29, 0);
    goto LAB27;

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

LAB0:    xsi_set_current_line(89, ng0);

LAB3:    t1 = (t0 + 1788U);
    t2 = *((char **)t1);
    t1 = (t0 + 3824);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 16U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 3504);
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

LAB0:    xsi_set_current_line(90, ng0);

LAB3:    t1 = (t0 + 1880U);
    t2 = *((char **)t1);
    t1 = (t0 + 3860);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 5U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 3512);
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

LAB0:    xsi_set_current_line(91, ng0);

LAB3:    t1 = (t0 + 1972U);
    t2 = *((char **)t1);
    t1 = (t0 + 3896);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 5U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 3520);
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

LAB0:    xsi_set_current_line(92, ng0);

LAB3:    t1 = (t0 + 2064U);
    t2 = *((char **)t1);
    t1 = (t0 + 3932);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 6U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 3528);
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
