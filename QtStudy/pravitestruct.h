/******************** (C) COPYRIGHT 2016 陆超 **********************************
* File Name          :  pravitestruct.h
* Author             :  陆超
* CPU Type           :  Allwinner R8
* IDE                :  Qt 4.8.6
* Version            :  V1.0
* Date               :  06/24/2016
* Description        :  结构体定义
*******************************************************************************/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __PRIVATESTRUCT_H
#define __PRIVATESTRUCT_H

/* Includes ------------------------------------------------------------------*/


/* Private define ------------------------------------------------------------*/



/* Private typedef -----------------------------------------------------------*/


typedef struct
{
    unsigned char       Running;                                        // 置一时表示正在运行
    app_timer_mode_t    Run_Mode;                                       // 运行模式，单次或者周期
    unsigned int        Period;                                         // 运行周期(ms) 最大512000
    app_timer_id_t      ID;                                             // 任务编号
    app_timer_timeout_handler_t Timeout_handler;                        // 超时运行程序

} Task_Typedef;                                                        // 任务结构体




/* Private variables ---------------------------------------------------------*/


/* Private function prototypes -----------------------------------------------*/

#endif /* __PRIVATESTRUCT_H */

/******************* (C) COPYRIGHT 2016 陆超 *****END OF FILE******************/
