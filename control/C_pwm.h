#ifndef C_PWM_H_
#define C_PWM_H_

#include <stdio.h>
#include <avr/io.h>

#define PWMTOP 255

void pwmInit();
void pwmUpdate(uint8_t valor);

void pwmOn();

void pwmOff();

#endif /* C_PWM_H_ */
