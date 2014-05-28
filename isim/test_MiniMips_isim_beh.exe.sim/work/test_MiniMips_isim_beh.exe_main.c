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
char *IEEE_P_3620187407;
char *IEEE_P_3499444699;
char *IEEE_P_1242562249;
char *UNISIM_P_0947159679;
char *IEEE_P_0774719531;
char *STD_TEXTIO;
char *IEEE_P_2717149903;
char *IEEE_P_1367372525;
char *UNISIM_P_3222816464;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    ieee_p_3499444699_init();
    ieee_p_3620187407_init();
    ieee_p_1242562249_init();
    unisim_p_0947159679_init();
    ieee_p_0774719531_init();
    std_textio_init();
    ieee_p_2717149903_init();
    ieee_p_1367372525_init();
    unisim_p_3222816464_init();
    unisim_a_0780662263_2014779070_init();
    unisim_a_0850834979_2152628908_init();
    unisim_a_0714155612_2768510774_init();
    unisim_a_0018426790_2768510774_init();
    unisim_a_1297477671_0429821216_init();
    unisim_a_0420693118_2584565154_init();
    unisim_a_1490675510_1976025627_init();
    work_a_2799994293_0912031422_init();
    work_a_1991350011_3212880686_init();
    work_a_1171334541_2374350694_init();
    work_a_3392787015_3212880686_init();
    work_a_3284912758_3212880686_init();
    work_a_2033712569_3212880686_init();
    work_a_1292482270_2374350694_init();
    work_a_1350853198_3212880686_init();
    work_a_0147535791_3212880686_init();
    work_a_3398553645_1181938964_init();
    work_a_4106131694_3212880686_init();
    work_a_0832606739_3212880686_init();
    work_a_2771504935_4097994761_init();
    work_a_3222946569_4097994761_init();
    work_a_4196627842_3212880686_init();
    work_a_1131996199_3212880686_init();
    work_a_1274991756_3212880686_init();
    work_a_2088184011_1181938964_init();
    work_a_0595374984_2372691052_init();


    xsi_register_tops("work_a_0595374984_2372691052");

    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    IEEE_P_3620187407 = xsi_get_engine_memory("ieee_p_3620187407");
    IEEE_P_3499444699 = xsi_get_engine_memory("ieee_p_3499444699");
    IEEE_P_1242562249 = xsi_get_engine_memory("ieee_p_1242562249");
    UNISIM_P_0947159679 = xsi_get_engine_memory("unisim_p_0947159679");
    IEEE_P_0774719531 = xsi_get_engine_memory("ieee_p_0774719531");
    STD_TEXTIO = xsi_get_engine_memory("std_textio");
    IEEE_P_2717149903 = xsi_get_engine_memory("ieee_p_2717149903");
    IEEE_P_1367372525 = xsi_get_engine_memory("ieee_p_1367372525");
    UNISIM_P_3222816464 = xsi_get_engine_memory("unisim_p_3222816464");

    return xsi_run_simulation(argc, argv);

}
