/*
 * gpio.h
 *
 *  Created on: Mar 4, 2025
 *      Author: stefan
 */

#ifndef GPIO_H_
#define GPIO_H_

void GPIO_set_mode_output(GPIO_TypeDef *GPIOx, uint8_t pin);
void GPIO_set_push_pull(GPIO_TypeDef *GPIOx, uint8_t pin);
void GPIO_set_high_speed(GPIO_TypeDef *GPIOx, uint8_t pin);
void GPIO_set_no_pull(GPIO_TypeDef *GPIOx, uint8_t pin);

#endif /* GPIO_H_ */
