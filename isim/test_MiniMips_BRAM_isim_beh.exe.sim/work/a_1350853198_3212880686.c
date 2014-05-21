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
static const char *ng0 = "//psf/Home/Dropbox/UNI 13-14/2nd Semester/Dsd/Xilinx Projects/Lab5/Registers.vhd";



static void work_a_1350853198_3212880686_p_0(char *t0)
{
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
    int t25;
    char *t26;
    char *t27;
    int t28;
    char *t29;
    char *t30;
    int t31;
    char *t32;
    char *t33;
    int t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;

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
LAB3:    t1 = (t0 + 2920);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(60, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t5 = t1;
    memset(t5, (unsigned char)2, 8U);
    t6 = (t0 + 2964);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(61, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)2, 8U);
    t5 = (t0 + 3000);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(62, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)2, 8U);
    t5 = (t0 + 3036);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(63, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)2, 8U);
    t5 = (t0 + 3072);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(64, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)2, 8U);
    t5 = (t0 + 3108);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(65, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)2, 8U);
    t5 = (t0 + 3144);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(66, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)2, 8U);
    t5 = (t0 + 3180);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(67, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)2, 8U);
    t5 = (t0 + 3216);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast(t5);
    goto LAB3;

LAB5:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 776U);
    t6 = *((char **)t2);
    t13 = *((unsigned char *)t6);
    t14 = (t13 == (unsigned char)3);
    if (t14 != 0)
        goto LAB10;

LAB12:
LAB11:    xsi_set_current_line(92, ng0);
    t1 = (t0 + 868U);
    t2 = *((char **)t1);
    t1 = (t0 + 6390);
    t15 = xsi_mem_cmp(t1, t2, 5U);
    if (t15 == 1)
        goto LAB33;

LAB42:    t6 = (t0 + 6395);
    t16 = xsi_mem_cmp(t6, t2, 5U);
    if (t16 == 1)
        goto LAB34;

LAB43:    t8 = (t0 + 6400);
    t19 = xsi_mem_cmp(t8, t2, 5U);
    if (t19 == 1)
        goto LAB35;

LAB44:    t10 = (t0 + 6405);
    t22 = xsi_mem_cmp(t10, t2, 5U);
    if (t22 == 1)
        goto LAB36;

LAB45:    t18 = (t0 + 6410);
    t25 = xsi_mem_cmp(t18, t2, 5U);
    if (t25 == 1)
        goto LAB37;

LAB46:    t21 = (t0 + 6415);
    t28 = xsi_mem_cmp(t21, t2, 5U);
    if (t28 == 1)
        goto LAB38;

LAB47:    t24 = (t0 + 6420);
    t31 = xsi_mem_cmp(t24, t2, 5U);
    if (t31 == 1)
        goto LAB39;

LAB48:    t27 = (t0 + 6425);
    t34 = xsi_mem_cmp(t27, t2, 5U);
    if (t34 == 1)
        goto LAB40;

LAB49:
LAB41:    xsi_set_current_line(110, ng0);
    t1 = (t0 + 6430);
    t5 = (t0 + 3252);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast_port(t5);

LAB32:    xsi_set_current_line(113, ng0);
    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t1 = (t0 + 6438);
    t15 = xsi_mem_cmp(t1, t2, 5U);
    if (t15 == 1)
        goto LAB52;

LAB61:    t6 = (t0 + 6443);
    t16 = xsi_mem_cmp(t6, t2, 5U);
    if (t16 == 1)
        goto LAB53;

LAB62:    t8 = (t0 + 6448);
    t19 = xsi_mem_cmp(t8, t2, 5U);
    if (t19 == 1)
        goto LAB54;

LAB63:    t10 = (t0 + 6453);
    t22 = xsi_mem_cmp(t10, t2, 5U);
    if (t22 == 1)
        goto LAB55;

LAB64:    t18 = (t0 + 6458);
    t25 = xsi_mem_cmp(t18, t2, 5U);
    if (t25 == 1)
        goto LAB56;

LAB65:    t21 = (t0 + 6463);
    t28 = xsi_mem_cmp(t21, t2, 5U);
    if (t28 == 1)
        goto LAB57;

LAB66:    t24 = (t0 + 6468);
    t31 = xsi_mem_cmp(t24, t2, 5U);
    if (t31 == 1)
        goto LAB58;

LAB67:    t27 = (t0 + 6473);
    t34 = xsi_mem_cmp(t27, t2, 5U);
    if (t34 == 1)
        goto LAB59;

LAB68:
LAB60:    xsi_set_current_line(131, ng0);
    t1 = (t0 + 6478);
    t5 = (t0 + 3288);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast_port(t5);

LAB51:    goto LAB3;

LAB7:    t2 = (t0 + 592U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB9;

LAB10:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1052U);
    t7 = *((char **)t2);
    t2 = (t0 + 6350);
    t15 = xsi_mem_cmp(t2, t7, 5U);
    if (t15 == 1)
        goto LAB14;

LAB23:    t9 = (t0 + 6355);
    t16 = xsi_mem_cmp(t9, t7, 5U);
    if (t16 == 1)
        goto LAB15;

LAB24:    t17 = (t0 + 6360);
    t19 = xsi_mem_cmp(t17, t7, 5U);
    if (t19 == 1)
        goto LAB16;

LAB25:    t20 = (t0 + 6365);
    t22 = xsi_mem_cmp(t20, t7, 5U);
    if (t22 == 1)
        goto LAB17;

LAB26:    t23 = (t0 + 6370);
    t25 = xsi_mem_cmp(t23, t7, 5U);
    if (t25 == 1)
        goto LAB18;

LAB27:    t26 = (t0 + 6375);
    t28 = xsi_mem_cmp(t26, t7, 5U);
    if (t28 == 1)
        goto LAB19;

LAB28:    t29 = (t0 + 6380);
    t31 = xsi_mem_cmp(t29, t7, 5U);
    if (t31 == 1)
        goto LAB20;

LAB29:    t32 = (t0 + 6385);
    t34 = xsi_mem_cmp(t32, t7, 5U);
    if (t34 == 1)
        goto LAB21;

LAB30:
LAB22:
LAB13:    goto LAB11;

LAB14:    xsi_set_current_line(72, ng0);
    t35 = (t0 + 1144U);
    t36 = *((char **)t35);
    t35 = (t0 + 2964);
    t37 = (t35 + 32U);
    t38 = *((char **)t37);
    t39 = (t38 + 40U);
    t40 = *((char **)t39);
    memcpy(t40, t36, 8U);
    xsi_driver_first_trans_fast(t35);
    goto LAB13;

LAB15:    xsi_set_current_line(74, ng0);
    t1 = (t0 + 1144U);
    t2 = *((char **)t1);
    t1 = (t0 + 3000);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB13;

LAB16:    xsi_set_current_line(76, ng0);
    t1 = (t0 + 1144U);
    t2 = *((char **)t1);
    t1 = (t0 + 3036);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB13;

LAB17:    xsi_set_current_line(78, ng0);
    t1 = (t0 + 1144U);
    t2 = *((char **)t1);
    t1 = (t0 + 3072);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB13;

LAB18:    xsi_set_current_line(80, ng0);
    t1 = (t0 + 1144U);
    t2 = *((char **)t1);
    t1 = (t0 + 3108);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB13;

LAB19:    xsi_set_current_line(82, ng0);
    t1 = (t0 + 1144U);
    t2 = *((char **)t1);
    t1 = (t0 + 3144);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB13;

LAB20:    xsi_set_current_line(84, ng0);
    t1 = (t0 + 1144U);
    t2 = *((char **)t1);
    t1 = (t0 + 3180);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB13;

LAB21:    xsi_set_current_line(86, ng0);
    t1 = (t0 + 1144U);
    t2 = *((char **)t1);
    t1 = (t0 + 3216);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB13;

LAB31:;
LAB33:    xsi_set_current_line(94, ng0);
    t30 = (t0 + 1420U);
    t32 = *((char **)t30);
    t30 = (t0 + 3252);
    t33 = (t30 + 32U);
    t35 = *((char **)t33);
    t36 = (t35 + 40U);
    t37 = *((char **)t36);
    memcpy(t37, t32, 8U);
    xsi_driver_first_trans_fast_port(t30);
    goto LAB32;

LAB34:    xsi_set_current_line(96, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 3252);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB32;

LAB35:    xsi_set_current_line(98, ng0);
    t1 = (t0 + 1604U);
    t2 = *((char **)t1);
    t1 = (t0 + 3252);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB32;

LAB36:    xsi_set_current_line(100, ng0);
    t1 = (t0 + 1696U);
    t2 = *((char **)t1);
    t1 = (t0 + 3252);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB32;

LAB37:    xsi_set_current_line(102, ng0);
    t1 = (t0 + 1788U);
    t2 = *((char **)t1);
    t1 = (t0 + 3252);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB32;

LAB38:    xsi_set_current_line(104, ng0);
    t1 = (t0 + 1880U);
    t2 = *((char **)t1);
    t1 = (t0 + 3252);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB32;

LAB39:    xsi_set_current_line(106, ng0);
    t1 = (t0 + 1972U);
    t2 = *((char **)t1);
    t1 = (t0 + 3252);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB32;

LAB40:    xsi_set_current_line(108, ng0);
    t1 = (t0 + 2064U);
    t2 = *((char **)t1);
    t1 = (t0 + 3252);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB32;

LAB50:;
LAB52:    xsi_set_current_line(115, ng0);
    t30 = (t0 + 1420U);
    t32 = *((char **)t30);
    t30 = (t0 + 3288);
    t33 = (t30 + 32U);
    t35 = *((char **)t33);
    t36 = (t35 + 40U);
    t37 = *((char **)t36);
    memcpy(t37, t32, 8U);
    xsi_driver_first_trans_fast_port(t30);
    goto LAB51;

LAB53:    xsi_set_current_line(117, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 3288);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB51;

LAB54:    xsi_set_current_line(119, ng0);
    t1 = (t0 + 1604U);
    t2 = *((char **)t1);
    t1 = (t0 + 3288);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB51;

LAB55:    xsi_set_current_line(121, ng0);
    t1 = (t0 + 1696U);
    t2 = *((char **)t1);
    t1 = (t0 + 3288);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB51;

LAB56:    xsi_set_current_line(123, ng0);
    t1 = (t0 + 1788U);
    t2 = *((char **)t1);
    t1 = (t0 + 3288);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB51;

LAB57:    xsi_set_current_line(125, ng0);
    t1 = (t0 + 1880U);
    t2 = *((char **)t1);
    t1 = (t0 + 3288);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB51;

LAB58:    xsi_set_current_line(127, ng0);
    t1 = (t0 + 1972U);
    t2 = *((char **)t1);
    t1 = (t0 + 3288);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB51;

LAB59:    xsi_set_current_line(129, ng0);
    t1 = (t0 + 2064U);
    t2 = *((char **)t1);
    t1 = (t0 + 3288);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB51;

LAB69:;
}


extern void work_a_1350853198_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1350853198_3212880686_p_0};
	xsi_register_didat("work_a_1350853198_3212880686", "isim/test_MiniMips_BRAM_isim_beh.exe.sim/work/a_1350853198_3212880686.didat");
	xsi_register_executes(pe);
}
