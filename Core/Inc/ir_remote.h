#ifndef __REMOTE_PROTOKOL_H__
#define __REMOTE_PROTOKOL_H__

#if defined(STM32F103xB) || defined(STM32F103xE)
#include "stm32f1xx_hal.h" // STM32F1 series
#elif defined(STM32F407xx) || defined(STM32F429xx)
#include "stm32f4xx_hal.h" // STM32F4 series
#else
#error "Unsupported or unknown STM32 family"
#endif

#include "ir_protocol.h"
//--------------------------YOUR CONFIG----------------------------------//
extern TIM_HandleTypeDef htim2;

#define IR_TIMER &htim2

#define IR_GPIO_PIN  GPIO_PIN_0
//---------------------------FUNCTIONS----------------------------------//

void IR_Init();

char IR_Get_Char(uint32_t num);

#endif
