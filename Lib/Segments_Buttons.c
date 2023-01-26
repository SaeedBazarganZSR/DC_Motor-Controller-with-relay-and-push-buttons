#include "Segments_Buttons.h"

uint8_t PushButtons_ReadData(void)
{
	uint8_t data = 0;
	
	if(HAL_GPIO_ReadPin(Button_EncoderCalib_GPIO_Port, Button_EncoderCalib_Pin) == GPIO_PIN_RESET)
		return EncoderCalib;
	else if(HAL_GPIO_ReadPin(Button_Open_GPIO_Port, Button_Open_Pin) == GPIO_PIN_RESET)
		return Open;
	else
	{	
		HAL_GPIO_WritePin(SCK_74165_GPIO_Port, SCK_74165_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(MOSI_74165_GPIO_Port, MOSI_74165_Pin, GPIO_PIN_RESET);
		HAL_Delay(1);
		HAL_GPIO_WritePin(MOSI_74165_GPIO_Port, MOSI_74165_Pin, GPIO_PIN_SET);
		for(uint8_t i = 0; i < 8; i++)
		{
			data = data << 1;
			if(HAL_GPIO_ReadPin(MISO_74165_GPIO_Port, MISO_74165_Pin) == GPIO_PIN_SET)
				data = data + 1;
			HAL_GPIO_WritePin(SCK_74165_GPIO_Port, SCK_74165_Pin, GPIO_PIN_RESET);
			HAL_Delay(1);
			HAL_GPIO_WritePin(SCK_74165_GPIO_Port, SCK_74165_Pin, GPIO_PIN_SET);
		}
		HAL_GPIO_WritePin(SCK_74165_GPIO_Port, SCK_74165_Pin, GPIO_PIN_RESET);
		
		return ~data;		
	}	
}
/*-------------------------------------------------------------------*/
void hc595_shift(SPI_HandleTypeDef* SPIx, uint8_t Data)
{
	HAL_SPI_Transmit(SPIx, &Data, 1, 100);
	HAL_GPIO_WritePin(NSS_74595_GPIO_Port, NSS_74595_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(NSS_74595_GPIO_Port, NSS_74595_Pin, GPIO_PIN_RESET);	
}
/*-------------------------------------------------------------------*/
void Gen_Number(SPI_HandleTypeDef* SPIx, uint8_t Number, uint8_t Place)
{
	if(Place == 1)
	{
		HAL_GPIO_WritePin(Segment_1_GPIO_Port, Segment_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(Segment_2_GPIO_Port, Segment_2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(Segment_3_GPIO_Port, Segment_3_Pin, GPIO_PIN_RESET);
		hc595_shift(SPIx, Number);
	}
	else if(Place == 2)
	{
		HAL_GPIO_WritePin(Segment_1_GPIO_Port, Segment_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(Segment_2_GPIO_Port, Segment_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(Segment_3_GPIO_Port, Segment_3_Pin, GPIO_PIN_SET);
		hc595_shift(SPIx, Number);
	}
	else if(Place == 3)
	{
		HAL_GPIO_WritePin(Segment_1_GPIO_Port, Segment_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(Segment_2_GPIO_Port, Segment_2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(Segment_3_GPIO_Port, Segment_3_Pin, GPIO_PIN_SET);
		hc595_shift(SPIx, Number);
	}	
}
/*-------------------------------------------------------------------*/
void Display(SPI_HandleTypeDef* SPIx, uint8_t Number)
{
	Gen_Number(SPIx, Number, 1);	
}
/*-------------------------------------------------------------------*/
