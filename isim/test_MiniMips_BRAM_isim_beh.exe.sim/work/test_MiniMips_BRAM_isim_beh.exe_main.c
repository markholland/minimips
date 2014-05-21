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

#include "xsi.h"

struct XSI_INFO xsi_info;

char *IEEE_P_2592010699;
char *STD_STANDARD;
char *STD_TEXTIO;
char *IEEE_P_3499444699;
char *IEEE_P_3620187407;
char *IEEE_P_0774719531;
char *IEEE_P_1242562249;
char *IEEE_P_3564397177;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    ieee_p_3499444699_init();
    ieee_p_0774719531_init();
    ieee_p_1242562249_init();
    work_a_1991350011_3212880686_init();
    work_a_1171334541_2374350694_init();
    std_textio_init();
    ieee_p_3620187407_init();
    ieee_p_3564397177_init();
    xilinxcorelib_a_3760288212_2959432447_init();
    xilinxcorelib_a_4282816042_1709443946_init();
    xilinxcorelib_a_4151673841_0543512595_init();
    xilinxcorelib_a_2472079869_3212880686_init();
    work_a_4268878617_3209984140_init();
    work_a_3284912758_3212880686_init();
    work_a_2033712569_3212880686_init();
    work_a_1292482270_2374350694_init();
    work_a_1350853198_3212880686_init();
    work_a_0147535791_3212880686_init();
    work_a_3398553645_1181938964_init();
    work_a_4106131694_3212880686_init();
    work_a_0832606739_3212880686_init();
    work_a_2771504935_4097994761_init();
    work_a_0712442027_4097994761_init();
    work_a_4196627842_3212880686_init();
    work_a_1131996199_3212880686_init();
    work_a_3049158963_3212880686_init();
    work_a_1566339369_3212880686_init();
    work_a_0040748461_1181938964_init();
    work_a_2251528365_2372691052_init();


    xsi_register_tops("work_a_2251528365_2372691052");

    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    STD_TEXTIO = xsi_get_engine_memory("std_textio");
    IEEE_P_3499444699 = xsi_get_engine_memory("ieee_p_3499444699");
    IEEE_P_3620187407 = xsi_get_engine_memory("ieee_p_3620187407");
    IEEE_P_0774719531 = xsi_get_engine_memory("ieee_p_0774719531");
    IEEE_P_1242562249 = xsi_get_engine_memory("ieee_p_1242562249");
    IEEE_P_3564397177 = xsi_get_engine_memory("ieee_p_3564397177");

    return xsi_run_simulation(argc, argv);

}
