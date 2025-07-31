/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "stdio.h"
#include "stdint.h"
/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* ----- process scheduler sturcture ----- */
typedef struct{
    uint8_t pid;        // Process ID
    uint8_t preempt_pid;   // Process priority

    uint8_t next_pid;   // last executed process id
    uint8_t cur_pid;    // current executing process id
    uint8_t last_pid;   // last executed process id
} Scheduler_t;
Scheduler_t scheduler;

typedef struct{
    uint8_t pid;        // Process ID
    uint8_t preempt_pid;   // Process priority
} process_t;
process_t p1, p2, p3; // create 3 processes for testing

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

#define PROCESS_EXE_TIME 1000 // 1 tick is 1 kHz
#define MAX_PROCESS_NUM  4
/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */
void Process_Scheduler(void);
void Process_1(void);
void Process_2(void);
void Process_3(void);
void Os_Delay(uint16_t ms);
/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define BTN_User_Pin GPIO_PIN_0
#define BTN_User_GPIO_Port GPIOA
#define LED4_Green_Pin GPIO_PIN_12
#define LED4_Green_GPIO_Port GPIOD
#define LED3_Orenge_Pin GPIO_PIN_13
#define LED3_Orenge_GPIO_Port GPIOD
#define LED5_Red_Pin GPIO_PIN_14
#define LED5_Red_GPIO_Port GPIOD
#define LED6_Blue_Pin GPIO_PIN_15
#define LED6_Blue_GPIO_Port GPIOD

/* USER CODE BEGIN Private defines */

uint32_t current_time_ms;
/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
