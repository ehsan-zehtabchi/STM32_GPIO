/*
 * gpio.c
 *
 *  Created on: 11 Jun 2026
 *      Author: Zehta
 */

#include "STM32F4xx.h"
void LED_init (void)
{
    // Enable GPIOA clock
    RCC->AHB1ENR |= (1U << 0); // Enable clock for GPIOA

    // --- PA5 configuration ---

    // MODER5 = 01 (output)
    GPIOA->MODER &= ~(3U <<10); // Clear MODER5 bits
    GPIOA->MODER |= (1U <<10);  // Set MODER5 to 01 (output)

    // OTYPER5 = 0 (push-pull)
    GPIOA->OTYPER &= ~(1U <<5); // Set OTYPER5 to 0 (push-pull)

    // OSPEEDR5 = 00 (low speed)
    GPIOA->OSPEEDR &= ~(3U <<10); // Set OSPEEDR5 to 00 (low speed)

    // PUPDR5 = 00 (no pull-up, no pull-down)
    GPIOA->PUPDR &= ~(3U <<10); // Set PUPDR5 to 00 (no pull-up, no pull-down)  
}
void LED_Blink_Fast(void)
{
    GPIOA->ODR ^= (1U << 5); // Toggle PA5
    for (volatile int i = 0; i < 50000; i++); // Simple delay
    
}