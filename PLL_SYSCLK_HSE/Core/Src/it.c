#include "main_app.h"
#include "stm32f4xx_hal.h"

extern UART_HandleTypeDef huart2;

/**
  * @brief This function handles System tick timer.
  */
void SysTick_Handler (void)
{
	HAL_IncTick();
	HAL_SYSTICK_IRQHandler();
}
