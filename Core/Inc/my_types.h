/*
 * my_types.h
 *
 *  Created on: Jun 5, 2024
 *      Author: rosto
 */

#ifndef INC_MY_TYPES_H_
#define INC_MY_TYPES_H_

#define BLE_PACKET_LEN 20

typedef struct {
	GPIO_TypeDef* gpio_type;
	uint16_t gpio_pin;
} GPIO_pin_pair_t;

typedef enum {
	GREEN = 0,
	RED
} led_pins_t;

#endif /* INC_MY_TYPES_H_ */
