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
    work_m_00000000001757311322_2052834921_init();
    work_m_00000000000345951766_1151587266_init();
    work_m_00000000000171778796_1254803134_init();
    work_m_00000000004105986295_1605042584_init();
    work_m_00000000002018857862_3987169875_init();
    work_m_00000000000384324796_0792581293_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000384324796_0792581293");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
