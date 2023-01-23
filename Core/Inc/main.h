/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
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
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED_Pin GPIO_PIN_14
#define LED_GPIO_Port GPIOC
#define Buzzer_Pin GPIO_PIN_15
#define Buzzer_GPIO_Port GPIOC
#define Segment_3_Pin GPIO_PIN_0
#define Segment_3_GPIO_Port GPIOA
#define SCK_74165_Pin GPIO_PIN_1
#define SCK_74165_GPIO_Port GPIOA
#define MISO_74165_Pin GPIO_PIN_2
#define MISO_74165_GPIO_Port GPIOA
#define MOSI_74165_Pin GPIO_PIN_3
#define MOSI_74165_GPIO_Port GPIOA
#define EEPROM_NSS_Pin GPIO_PIN_4
#define EEPROM_NSS_GPIO_Port GPIOA
#define EEPROM_SCK_SPI1_Pin GPIO_PIN_5
#define EEPROM_SCK_SPI1_GPIO_Port GPIOA
#define EEPROM_MISO_SPI1_Pin GPIO_PIN_6
#define EEPROM_MISO_SPI1_GPIO_Port GPIOA
#define EEPROM_MOSI_SPI1_Pin GPIO_PIN_7
#define EEPROM_MOSI_SPI1_GPIO_Port GPIOA
#define Button_EncoderCalib_Pin GPIO_PIN_0
#define Button_EncoderCalib_GPIO_Port GPIOB
#define Button_SensorCalib_Pin GPIO_PIN_1
#define Button_SensorCalib_GPIO_Port GPIOB
#define Button_Open_Pin GPIO_PIN_2
#define Button_Open_GPIO_Port GPIOB
#define Segment_1_Pin GPIO_PIN_10
#define Segment_1_GPIO_Port GPIOB
#define Segment_2_Pin GPIO_PIN_11
#define Segment_2_GPIO_Port GPIOB
#define NSS_74595_Pin GPIO_PIN_12
#define NSS_74595_GPIO_Port GPIOB
#define SCK_74595_SPI2_Pin GPIO_PIN_13
#define SCK_74595_SPI2_GPIO_Port GPIOB
#define MISO_74595_SPI2_Pin GPIO_PIN_14
#define MISO_74595_SPI2_GPIO_Port GPIOB
#define MOSI_74595_SPI2_Pin GPIO_PIN_15
#define MOSI_74595_SPI2_GPIO_Port GPIOB
#define USART1_En_Pin GPIO_PIN_8
#define USART1_En_GPIO_Port GPIOA
#define SecondUSART1_En_Pin GPIO_PIN_11
#define SecondUSART1_En_GPIO_Port GPIOA
#define Jumper1_Pin GPIO_PIN_15
#define Jumper1_GPIO_Port GPIOA
#define Jumper2_Pin GPIO_PIN_3
#define Jumper2_GPIO_Port GPIOB
#define Encoder_B_Pin GPIO_PIN_4
#define Encoder_B_GPIO_Port GPIOB
#define Encoder_A_Pin GPIO_PIN_5
#define Encoder_A_GPIO_Port GPIOB
#define Empty_1_Pin GPIO_PIN_6
#define Empty_1_GPIO_Port GPIOB
#define Empty_2_Pin GPIO_PIN_7
#define Empty_2_GPIO_Port GPIOB
#define Motor_A_Pin GPIO_PIN_8
#define Motor_A_GPIO_Port GPIOB
#define Motor_B_Pin GPIO_PIN_9
#define Motor_B_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
