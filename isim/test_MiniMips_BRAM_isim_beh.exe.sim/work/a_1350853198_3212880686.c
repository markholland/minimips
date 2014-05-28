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
    unsigned char t15;
    unsigned char t16;
    int t17;
    int t19;
    char *t20;
    int t22;
    char *t23;
    int t25;
    char *t26;
    int t28;
    char *t29;
    int t31;
    char *t32;
    char *t33;
    int t34;
    char *t35;
    char *t36;
    int t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;

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
LAB3:    t1 = (t0 + 3012);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(61, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t5 = t1;
    memset(t5, (unsigned char)2, 8U);
    t6 = (t0 + 3056);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(62, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)2, 8U);
    t5 = (t0 + 3092);
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
    t5 = (t0 + 3128);
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
    t5 = (t0 + 3164);
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
    t5 = (t0 + 3200);
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
    t5 = (t0 + 3236);
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
    t5 = (t0 + 3272);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(68, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)2, 8U);
    t5 = (t0 + 3308);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast(t5);
    goto LAB3;

LAB5:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 684U);
    t6 = *((char **)t2);
    t13 = *((unsigned char *)t6);
    t14 = (t13 == (unsigned char)3);
    if (t14 != 0)
        goto LAB10;

LAB12:
LAB11:    xsi_set_current_line(95, ng0);
    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t1 = (t0 + 6571);
    t17 = xsi_mem_cmp(t1, t2, 5U);
    if (t17 == 1)
        goto LAB36;

LAB45:    t6 = (t0 + 6576);
    t19 = xsi_mem_cmp(t6, t2, 5U);
    if (t19 == 1)
        goto LAB37;

LAB46:    t8 = (t0 + 6581);
    t22 = xsi_mem_cmp(t8, t2, 5U);
    if (t22 == 1)
        goto LAB38;

LAB47:    t10 = (t0 + 6586);
    t25 = xsi_mem_cmp(t10, t2, 5U);
    if (t25 == 1)
        goto LAB39;

LAB48:    t20 = (t0 + 6591);
    t28 = xsi_mem_cmp(t20, t2, 5U);
    if (t28 == 1)
        goto LAB40;

LAB49:    t23 = (t0 + 6596);
    t31 = xsi_mem_cmp(t23, t2, 5U);
    if (t31 == 1)
        goto LAB41;

LAB50:    t26 = (t0 + 6601);
    t34 = xsi_mem_cmp(t26, t2, 5U);
    if (t34 == 1)
        goto LAB42;

LAB51:    t29 = (t0 + 6606);
    t37 = xsi_mem_cmp(t29, t2, 5U);
    if (t37 == 1)
        goto LAB43;

LAB52:
LAB44:    xsi_set_current_line(113, ng0);
    t1 = (t0 + 6611);
    t5 = (t0 + 3344);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast_port(t5);

LAB35:    xsi_set_current_line(116, ng0);
    t1 = (t0 + 1052U);
    t2 = *((char **)t1);
    t1 = (t0 + 6619);
    t17 = xsi_mem_cmp(t1, t2, 5U);
    if (t17 == 1)
        goto LAB55;

LAB64:    t6 = (t0 + 6624);
    t19 = xsi_mem_cmp(t6, t2, 5U);
    if (t19 == 1)
        goto LAB56;

LAB65:    t8 = (t0 + 6629);
    t22 = xsi_mem_cmp(t8, t2, 5U);
    if (t22 == 1)
        goto LAB57;

LAB66:    t10 = (t0 + 6634);
    t25 = xsi_mem_cmp(t10, t2, 5U);
    if (t25 == 1)
        goto LAB58;

LAB67:    t20 = (t0 + 6639);
    t28 = xsi_mem_cmp(t20, t2, 5U);
    if (t28 == 1)
        goto LAB59;

LAB68:    t23 = (t0 + 6644);
    t31 = xsi_mem_cmp(t23, t2, 5U);
    if (t31 == 1)
        goto LAB60;

LAB69:    t26 = (t0 + 6649);
    t34 = xsi_mem_cmp(t26, t2, 5U);
    if (t34 == 1)
        goto LAB61;

LAB70:    t29 = (t0 + 6654);
    t37 = xsi_mem_cmp(t29, t2, 5U);
    if (t37 == 1)
        goto LAB62;

LAB71:
LAB63:    xsi_set_current_line(134, ng0);
    t1 = (t0 + 6659);
    t5 = (t0 + 3380);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast_port(t5);

LAB54:    goto LAB3;

LAB7:    t2 = (t0 + 592U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB9;

LAB10:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 868U);
    t7 = *((char **)t2);
    t15 = *((unsigned char *)t7);
    t16 = (t15 == (unsigned char)3);
    if (t16 != 0)
        goto LAB13;

LAB15:
LAB14:    goto LAB11;

LAB13:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 1144U);
    t8 = *((char **)t2);
    t2 = (t0 + 6531);
    t17 = xsi_mem_cmp(t2, t8, 5U);
    if (t17 == 1)
        goto LAB17;

LAB26:    t10 = (t0 + 6536);
    t19 = xsi_mem_cmp(t10, t8, 5U);
    if (t19 == 1)
        goto LAB18;

LAB27:    t20 = (t0 + 6541);
    t22 = xsi_mem_cmp(t20, t8, 5U);
    if (t22 == 1)
        goto LAB19;

LAB28:    t23 = (t0 + 6546);
    t25 = xsi_mem_cmp(t23, t8, 5U);
    if (t25 == 1)
        goto LAB20;

LAB29:    t26 = (t0 + 6551);
    t28 = xsi_mem_cmp(t26, t8, 5U);
    if (t28 == 1)
        goto LAB21;

LAB30:    t29 = (t0 + 6556);
    t31 = xsi_mem_cmp(t29, t8, 5U);
    if (t31 == 1)
        goto LAB22;

LAB31:    t32 = (t0 + 6561);
    t34 = xsi_mem_cmp(t32, t8, 5U);
    if (t34 == 1)
        goto LAB23;

LAB32:    t35 = (t0 + 6566);
    t37 = xsi_mem_cmp(t35, t8, 5U);
    if (t37 == 1)
        goto LAB24;

LAB33:
LAB25:
LAB16:    goto LAB14;

LAB17:    xsi_set_current_line(74, ng0);
    t38 = (t0 + 1236U);
    t39 = *((char **)t38);
    t38 = (t0 + 3056);
    t40 = (t38 + 32U);
    t41 = *((char **)t40);
    t42 = (t41 + 40U);
    t43 = *((char **)t42);
    memcpy(t43, t39, 8U);
    xsi_driver_first_trans_fast(t38);
    goto LAB16;

LAB18:    xsi_set_current_line(76, ng0);
    t1 = (t0 + 1236U);
    t2 = *((char **)t1);
    t1 = (t0 + 3092);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB16;

LAB19:    xsi_set_current_line(78, ng0);
    t1 = (t0 + 1236U);
    t2 = *((char **)t1);
    t1 = (t0 + 3128);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB16;

LAB20:    xsi_set_current_line(80, ng0);
    t1 = (t0 + 1236U);
    t2 = *((char **)t1);
    t1 = (t0 + 3164);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB16;

LAB21:    xsi_set_current_line(82, ng0);
    t1 = (t0 + 1236U);
    t2 = *((char **)t1);
    t1 = (t0 + 3200);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB16;

LAB22:    xsi_set_current_line(84, ng0);
    t1 = (t0 + 1236U);
    t2 = *((char **)t1);
    t1 = (t0 + 3236);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB16;

LAB23:    xsi_set_current_line(86, ng0);
    t1 = (t0 + 1236U);
    t2 = *((char **)t1);
    t1 = (t0 + 3272);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB16;

LAB24:    xsi_set_current_line(88, ng0);
    t1 = (t0 + 1236U);
    t2 = *((char **)t1);
    t1 = (t0 + 3308);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB16;

LAB34:;
LAB36:    xsi_set_current_line(97, ng0);
    t32 = (t0 + 1512U);
    t33 = *((char **)t32);
    t32 = (t0 + 3344);
    t35 = (t32 + 32U);
    t36 = *((char **)t35);
    t38 = (t36 + 40U);
    t39 = *((char **)t38);
    memcpy(t39, t33, 8U);
    xsi_driver_first_trans_fast_port(t32);
    goto LAB35;

LAB37:    xsi_set_current_line(99, ng0);
    t1 = (t0 + 1604U);
    t2 = *((char **)t1);
    t1 = (t0 + 3344);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB35;

LAB38:    xsi_set_current_line(101, ng0);
    t1 = (t0 + 1696U);
    t2 = *((char **)t1);
    t1 = (t0 + 3344);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB35;

LAB39:    xsi_set_current_line(103, ng0);
    t1 = (t0 + 1788U);
    t2 = *((char **)t1);
    t1 = (t0 + 3344);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB35;

LAB40:    xsi_set_current_line(105, ng0);
    t1 = (t0 + 1880U);
    t2 = *((char **)t1);
    t1 = (t0 + 3344);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB35;

LAB41:    xsi_set_current_line(107, ng0);
    t1 = (t0 + 1972U);
    t2 = *((char **)t1);
    t1 = (t0 + 3344);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB35;

LAB42:    xsi_set_current_line(109, ng0);
    t1 = (t0 + 2064U);
    t2 = *((char **)t1);
    t1 = (t0 + 3344);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB35;

LAB43:    xsi_set_current_line(111, ng0);
    t1 = (t0 + 2156U);
    t2 = *((char **)t1);
    t1 = (t0 + 3344);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB35;

LAB53:;
LAB55:    xsi_set_current_line(118, ng0);
    t32 = (t0 + 1512U);
    t33 = *((char **)t32);
    t32 = (t0 + 3380);
    t35 = (t32 + 32U);
    t36 = *((char **)t35);
    t38 = (t36 + 40U);
    t39 = *((char **)t38);
    memcpy(t39, t33, 8U);
    xsi_driver_first_trans_fast_port(t32);
    goto LAB54;

LAB56:    xsi_set_current_line(120, ng0);
    t1 = (t0 + 1604U);
    t2 = *((char **)t1);
    t1 = (t0 + 3380);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB54;

LAB57:    xsi_set_current_line(122, ng0);
    t1 = (t0 + 1696U);
    t2 = *((char **)t1);
    t1 = (t0 + 3380);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB54;

LAB58:    xsi_set_current_line(124, ng0);
    t1 = (t0 + 1788U);
    t2 = *((char **)t1);
    t1 = (t0 + 3380);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB54;

LAB59:    xsi_set_current_line(126, ng0);
    t1 = (t0 + 1880U);
    t2 = *((char **)t1);
    t1 = (t0 + 3380);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB54;

LAB60:    xsi_set_current_line(128, ng0);
    t1 = (t0 + 1972U);
    t2 = *((char **)t1);
    t1 = (t0 + 3380);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB54;

LAB61:    xsi_set_current_line(130, ng0);
    t1 = (t0 + 2064U);
    t2 = *((char **)t1);
    t1 = (t0 + 3380);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB54;

LAB62:    xsi_set_current_line(132, ng0);
    t1 = (t0 + 2156U);
    t2 = *((char **)t1);
    t1 = (t0 + 3380);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB54;

LAB72:;
}


extern void work_a_1350853198_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1350853198_3212880686_p_0};
	xsi_register_didat("work_a_1350853198_3212880686", "isim/test_MiniMips_BRAM_isim_beh.exe.sim/work/a_1350853198_3212880686.didat");
	xsi_register_executes(pe);
}
