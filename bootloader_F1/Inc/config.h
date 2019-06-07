#ifndef __CONFIG_H
#define __CONFIG_H

#include "stm32f1xx.h"

#include "flashinfo.h"

#if defined TARGET_MAPLE_MINI
	#define LED1_CLOCK		RCC_APB2ENR_IOPBEN
	#define LED1_BIT_0		//CLEAR_BIT(GPIOB->CRL, GPIO_CRL_CNF1_0)
	#define LED1_BIT_1		//CLEAR_BIT(GPIOB->CRL, GPIO_CRL_CNF1_1)
	#define LED1_MODE		SET_BIT(GPIOB->CRL, GPIO_CRL_MODE1)
	#define LED1_ON			WRITE_REG(GPIOB->BSRR, GPIO_BSRR_BS1)
	#define LED1_OFF		WRITE_REG(GPIOB->BRR, GPIO_BRR_BR1)
	
	#define DISC_CLOCK		RCC_APB2ENR_IOPBEN
	#define DISC_BIT_0		SET_BIT(GPIOB->CRH, GPIO_CRH_CNF9_0 | GPIO_CRH_MODE9)
	#define DISC_BIT_1		//CLEAR_BIT(GPIOB->CRH, GPIO_CRH_CNF9_1)
	#define DISC_MODE
	#define DISC_HIGH		WRITE_REG(GPIOB->BSRR, GPIO_BSRR_BS9)
	#define DISC_LOW		WRITE_REG(GPIOB->BRR, GPIO_BRR_BR9)

	// Enable the internal pull-down on PB2 pin. By default, PB2
	// is in FLOATING input mode.
	#define PB2_PULLDOWN

#elif defined TARGET_GENERIC_F103_PC13
	#define LED1_CLOCK		RCC_APB2ENR_IOPCEN
	#define LED1_BIT_0		SET_BIT(GPIOC->CRH, GPIO_CRH_CNF13_0 | GPIO_CRH_MODE13)
	#define LED1_BIT_1		//CLEAR_BIT(GPIOC->CRH, GPIO_CRH_CNF13_1)
	#define LED1_MODE
	#define LED1_OFF		WRITE_REG(GPIOC->BSRR, GPIO_BSRR_BS13)
	#define LED1_ON			WRITE_REG(GPIOC->BRR, GPIO_BRR_BR13)

	//Second LED feature is not currently used.
	#define LED2_CLOCK		0 //RCC_APB2ENR_IOPBEN
	#define LED2_BIT_0		//CLEAR_BIT(GPIOB->CRL, GPIO_CRL_CNF1_0)
	#define LED2_BIT_1		//CLEAR_BIT(GPIOB->CRL, GPIO_CRL_CNF1_1)
	#define LED2_MODE		//SET_BIT(G1PIOB->CRL, GPIO_CRL_MODE1)
	#define LED2_ON			//WRITE_REG(GPIOB->BSRR, GPIO_BSRR_BS1)
	#define LED2_OFF		//WRITE_REG(GPIOB->BRR, GPIO_BRR_BR1)

	//#define PB2_PULLDOWN

#elif defined TARGET_GENERIC_F103_PD2
	#define LED1_CLOCK		RCC_APB2ENR_IOPDEN
	#define LED1_BIT_0		SET_BIT(GPIOD->CRL, GPIO_CRL_CNF2_0 | GPIO_CRL_MODE2)
	#define LED1_BIT_1		//CLEAR_BIT(GPIOD->CRL, GPIO_CRL_CNF2_1)
	#define LED1_MODE
	#define LED1_OFF		WRITE_REG(GPIOD->BSRR, GPIO_BSRR_BS2)
	#define LED1_ON			WRITE_REG(GPIOD->BRR, GPIO_BRR_BR2)

#elif defined TARGET_GENERIC_F103_PD1
	#define LED1_CLOCK		RCC_APB2ENR_IOPDEN
	#define LED1_BIT_0		SET_BIT(GPIOD->CRL, GPIO_CRL_CNF1_0 | GPIO_CRL_MODE1)
	#define LED1_BIT_1		//CLEAR_BIT(GPIOD->CRL, GPIO_CRL_CNF1_1)
	#define LED1_MODE
	#define LED1_OFF		WRITE_REG(GPIOD->BSRR, GPIO_BSRR_BS1)
	#define LED1_ON			WRITE_REG(GPIOD->BRR, GPIO_BRR_BR1)

#elif defined TARGET_GENERIC_F103_PA1
	#define LED1_CLOCK		RCC_APB2ENR_IOPAEN
	#define LED1_BIT_0		SET_BIT(GPIOA->CRL, GPIO_CRL_CNF1_0 | GPIO_CRL_MODE1)
	#define LED1_BIT_1		//CLEAR_BIT(GPIOA->CRL, GPIO_CRL_CNF1_1)
	#define LED1_MODE
	#define LED1_OFF		WRITE_REG(GPIOA->BSRR, GPIO_BSRR_BS1)
	#define LED1_ON			WRITE_REG(GPIOA->BRR, GPIO_BRR_BR1)

#elif defined TARGET_GENERIC_F103_PB9
	#define LED1_CLOCK		RCC_APB2ENR_IOPBEN
	#define LED1_BIT_0		SET_BIT(GPIOB->CRH, GPIO_CRH_CNF9_0 | GPIO_CRH_MODE9)
	#define LED1_BIT_1		//CLEAR_BIT(GPIOB->CRH, GPIO_CRH_CNF9_1)
	#define LED1_MODE
	#define LED1_OFF		WRITE_REG(GPIOB->BSRR, GPIO_BSRR_BS9)
	#define LED1_ON			WRITE_REG(GPIOB->BRR, GPIO_BRR_BR9)

#elif defined TARGET_GENERIC_F103_PE2
	#define LED1_CLOCK		RCC_APB2ENR_IOPEEN
	#define LED1_BIT_0		SET_BIT(GPIOE->CRL, GPIO_CRL_CNF2_0 | GPIO_CRL_MODE2)
	#define LED1_BIT_1		//CLEAR_BIT(GPIOE->CRL, GPIO_CRL_CNF2_1)
	#define LED1_MODE
	#define LED1_OFF		WRITE_REG(GPIOE->BSRR, GPIO_BSRR_BS2)
	#define LED1_ON			WRITE_REG(GPIOE->BRR, GPIO_BRR_BR2)

#elif defined TARGET_GENERIC_F103_PA9
	#define LED1_CLOCK		RCC_APB2ENR_IOPAEN
	#define LED1_BIT_0		SET_BIT(GPIOA->CRH, GPIO_CRH_CNF9_0 | GPIO_CRH_MODE9)
	#define LED1_BIT_1		//CLEAR_BIT(GPIOA->CRH, GPIO_CRH_CNF9_1)
	#define LED1_MODE
	#define LED1_OFF		WRITE_REG(GPIOA->BSRR, GPIO_BSRR_BS9)
	#define LED1_ON			WRITE_REG(GPIOA->BRR, GPIO_BRR_BR9)

#elif defined TARGET_GENERIC_F103_PE5
	#define LED1_CLOCK		RCC_APB2ENR_IOPEEN
	#define LED1_BIT_0		SET_BIT(GPIOE->CRL, GPIO_CRL_CNF5_0 | GPIO_CRL_MODE5)
	#define LED1_BIT_1		//CLEAR_BIT(GPIOE->CRL, GPIO_CRL_CNF5_1)
	#define LED1_MODE
	#define LED1_OFF		WRITE_REG(GPIOE->BSRR, GPIO_BSRR_BS5)
	#define LED1_ON			WRITE_REG(GPIOE->BRR, GPIO_BRR_BR5)

#elif defined TARGET_GENERIC_F103_PB7
	#define LED1_CLOCK		RCC_APB2ENR_IOPBEN
	#define LED1_BIT_0		SET_BIT(GPIOB->CRL, GPIO_CRL_CNF7_0 | GPIO_CRL_MODE7)
	#define LED1_BIT_1		//CLEAR_BIT(GPIOB->CRL, GPIO_CRL_CNF7_1)
	#define LED1_MODE
	#define LED1_OFF		WRITE_REG(GPIOB->BSRR, GPIO_BSRR_BS7)
	#define LED1_ON			WRITE_REG(GPIOB->BRR, GPIO_BRR_BR7)

#elif defined TARGET_GENERIC_F103_PB0
	#define LED1_CLOCK		RCC_APB2ENR_IOPBEN
	#define LED1_BIT_0		SET_BIT(GPIOB->CRL, GPIO_CRL_CNF0_0 | GPIO_CRL_MODE0)
	#define LED1_BIT_1		//CLEAR_BIT(GPIOB->CRL, GPIO_CRL_CNF0_1)
	#define LED1_MODE
	#define LED1_OFF		WRITE_REG(GPIOB->BSRR, GPIO_BSRR_BS0)
	#define LED1_ON			WRITE_REG(GPIOB->BRR, GPIO_BRR_BR0)

#elif defined TARGET_GENERIC_F103_PB12
	#define LED1_CLOCK		RCC_APB2ENR_IOPBEN
	#define LED1_BIT_0		SET_BIT(GPIOB->CRH, GPIO_CRH_CNF12_0 | GPIO_CRH_MODE12)
	#define LED1_BIT_1		//CLEAR_BIT(GPIOB->CRH, GPIO_CRH_CNF12_1)
	#define LED1_MODE
	#define LED1_OFF		WRITE_REG(GPIOB->BSRR, GPIO_BSRR_BS12)
	#define LED1_ON			WRITE_REG(GPIOB->BRR, GPIO_BRR_BR12)

#elif defined TARGET_MINI_STM32V3	
  #define LED1_CLOCK		(RCC->APB2ENR |= RCC_APB2ENR_IOPAEN)
	#define LED1_BIT_0		(GPIOA->CRL &= ~GPIO_CRL_CNF2_0)
	#define LED1_BIT_1		(GPIOA->CRL &= ~GPIO_CRL_CNF2_1)
	#define LED1_MODE			(GPIOA->CRL |= GPIO_CRL_MODE2)
	#define LED1_ON				(GPIOA->BSRR = GPIO_BSRR_BS2)
	#define LED1_OFF			(GPIOA->BRR	= GPIO_BRR_BR2)
  
  
	#define DISC_CLOCK		RCC_APB2ENR_IOPDEN
	#define DISC_BIT_0		SET_BIT(GPIOD->CRL, GPIO_CRL_CNF2_0 | GPIO_CRL_MODE2)
	#define DISC_BIT_1		//CLEAR_BIT(GPIOD->CRL, GPIO_CRL_CNF2_1)
	#define DISC_MODE
	#define DISC_HIGH		WRITE_REG(GPIOD->BSRR, GPIO_BSRR_BS2)
	#define DISC_LOW		WRITE_REG(GPIOD->BRR, GPIO_BRR_BR2)
#elif defined TARGET_XLINEUSB
	#define LED1_CLOCK		RCC_APB2ENR_IOPBEN
	#define LED1_BIT_0		SET_BIT(GPIOB->CRL, GPIO_CRL_CNF5_0 | GPIO_CRL_MODE5)
	#define LED1_BIT_1		//CLEAR_BIT(GPIOC->CRH, GPIO_CRH_CNF13_1)
	#define LED1_MODE
	#define LED1_OFF		WRITE_REG(GPIOB->BSRR, GPIO_BSRR_BS5)
	#define LED1_ON			WRITE_REG(GPIOB->BRR, GPIO_BRR_BR5)

	//Second LED feature is not currently used.
	#define LED2_CLOCK		0 //RCC_APB2ENR_IOPBEN
	#define LED2_BIT_0		//CLEAR_BIT(GPIOB->CRL, GPIO_CRL_CNF1_0)
	#define LED2_BIT_1		//CLEAR_BIT(GPIOB->CRL, GPIO_CRL_CNF1_1)
	#define LED2_MODE		//SET_BIT(G1PIOB->CRL, GPIO_CRL_MODE1)
	#define LED2_ON			//WRITE_REG(GPIOB->BSRR, GPIO_BSRR_BS1)
	#define LED2_OFF		//WRITE_REG(GPIOB->BRR, GPIO_BRR_BR1)

	#define USB_VENDOR_STR_LEN 30
	#define USB_VENDOR_MSG_STR 'D', 0, 'i', 0, 'g', 0, 'i', 0, 't', 0, 'r', 0, 'o', 0, 'l', 0, 'l', 0, ' ', 0, 'L', 0, 't', 0, 'd', 0, '.', 0

	#define USB_PRODUCT_STR_LEN 42
	#define USB_PRODUCT_MSG_STR 'X', 0, 'L', 0, 'i', 0, 'N', 0, 'E', 0, '-', 0, 'U', 0, 'S', 0, 'B', 0, ' ', 0, \
								'b', 0, 'o', 0, 'o', 0, 't', 0, 'l', 0, 'o', 0, 'a', 0, 'd', 0, 'e', 0, 'r', 0,

    #define SRAM_SIZE           (6 * 1024)
#else
	#error "No config for this target"
#endif

#ifndef LED1_CLOCK
#define LED1_CLOCK			0
#endif
#ifndef LED1_BIT_0
#define LED1_BIT_0
#endif
#ifndef LED1_BIT_1
#define LED1_BIT_1
#endif
#ifndef LED1_MODE
#define LED1_MODE
#endif
#ifndef LED1_ON
#define LED1_ON
#endif
#ifndef LED1_OFF
#define LED1_OFF
#endif

#ifndef LED2_CLOCK
#define LED2_CLOCK			0
#endif
#ifndef LED2_BIT_0
#define LED2_BIT_0
#endif
#ifndef LED2_BIT_1
#define LED2_BIT_1
#endif
#ifndef LED2_MODE
#define LED2_MODE
#endif
#ifndef LED2_ON
#define LED2_ON
#endif
#ifndef LED2_OFF
#define LED2_OFF
#endif

#ifndef DISC_CLOCK
#define DISC_CLOCK			0
#endif
#ifndef DISC_BIT_0
#define DISC_BIT_0
#endif
#ifndef DISC_BIT_1
#define DISC_BIT_1
#endif
#ifndef DISC_MODE
#define DISC_MODE
#endif
#ifndef DISC_LOW
#define DISC_LOW
#endif
#ifndef DISC_HIGH
#define DISC_HIGH
#endif

/* Bootloader size */
#ifndef BOOTLOADER_SIZE
#define BOOTLOADER_SIZE         (2 * 1024)
#endif

#ifndef SRAM_SIZE
/* SRAM size */
#define SRAM_SIZE           (20 * 1024)
#endif

/* SRAM end (bottom of stack) */
#define SRAM_END            (SRAM_BASE + SRAM_SIZE)

#endif
