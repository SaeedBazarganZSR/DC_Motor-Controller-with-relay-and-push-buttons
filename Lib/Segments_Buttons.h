#ifndef __Segments_Buttons_H__
#define __Segments_Buttons_H__
/*-------------------------------------------------------------------*/
#include "stdint.h"
#include "stm32f1xx_hal.h"
//#include "main.h"
/*-------------------------------------------------------------------*/
#define Button_EncoderCalib_Pin GPIO_PIN_0
#define Button_EncoderCalib_GPIO_Port GPIOB
#define Button_Open_Pin GPIO_PIN_2
#define Button_Open_GPIO_Port GPIOB

#define SCK_74165_Pin GPIO_PIN_1
#define SCK_74165_GPIO_Port GPIOA
#define MISO_74165_Pin GPIO_PIN_2
#define MISO_74165_GPIO_Port GPIOA
#define MOSI_74165_Pin GPIO_PIN_3
#define MOSI_74165_GPIO_Port GPIOA

#define NSS_74595_Pin GPIO_PIN_12
#define NSS_74595_GPIO_Port GPIOB

#define Segment_1_Pin GPIO_PIN_10
#define Segment_1_GPIO_Port GPIOB
#define Segment_2_Pin GPIO_PIN_11
#define Segment_2_GPIO_Port GPIOB
#define Segment_3_Pin GPIO_PIN_0
#define Segment_3_GPIO_Port GPIOA


#define EncoderCalib		1
#define Open						2

typedef enum Segment
{
	Zero = 0x30,
	One = 0xF9,
	Two = 0x52,
	Three = 0xD0,
	Four = 0x99,
	Five = 0x94,
	Six = 0x14,
	Seven = 0xF1,
	Eight = 0x10,
	Nine = 0x90
}SegNumber;
/*-------------------------------------------------------------------*/
uint8_t PushButtons_ReadData(void);
void hc595_shift(SPI_HandleTypeDef* SPIx, uint8_t Data);
void Gen_Number(SPI_HandleTypeDef* SPIx, uint8_t Number, uint8_t Place);
void Display(SPI_HandleTypeDef* SPIx, uint8_t Number);
/*-------------------------------------------------------------------*/
#endif /* __Segments_Buttons_H__*/
