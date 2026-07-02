/*
 * gpio.h
 *
 *  Created on: 11 Jun 2026
 *      Author: Zehta
 */

#ifndef INC_GPIO_H_
#define INC_GPIO_H_

void LED_init (void);
void LED_Blink_Fast(void);
void OUTPUT_init_PB8 (void);
uint8_t OUTPUT_PB8_Blink_Fast(void);
void OUTPUT_init_PC7 (void);
uint8_t OUTPUT_PC7_Blink_Fast(void);
void Police_Blink_Fast(void);
void OUTPUT_init_PA1(void);
uint8_t OUTPUT_init_PA1_Blink_Slow(void);
#endif /* INC_GPIO_H_ */
