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



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000001672431289_3136691950_init();
    work_m_00000000004006455016_1823954397_init();
    work_m_00000000003902794407_1960444063_init();
    work_m_00000000002383931790_3817932396_init();
    work_m_00000000004041937550_1099957405_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000004041937550_1099957405");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
