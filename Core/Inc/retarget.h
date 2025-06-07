#ifndef __RETARGET_H__
#define __RETARGET_H__

#if defined(STM32F103xB) || defined(STM32F103xE)
// STM32F1 series
#include "stm32f1xx_hal.h"
#elif defined(STM32F407xx) || defined(STM32F429xx)
// STM32F4 series
#include "stm32f4xx_hal.h"
#else
#error "Unsupported or unknown STM32 family"
#endif
#include <stdio.h>

int __io_putchar(int ch);

#endif
