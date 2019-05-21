/*
 * delay.c
 *
 *  Created on: 2019. máj. 21.
 *      Author: mm
 */

#include "delay.h"

#include "stm32f10x.h"

void delay(uint32_t timeout)
{
    for (uint32_t i = 0; i < timeout; i++) {
        __NOP();
    }
}
