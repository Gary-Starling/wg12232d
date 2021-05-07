#include "stm32f10x.h"
 
void TimingDelay_Decrement(void);
void delay_us(volatile uint32_t nTime);

#define delay_ms(msec)  delay_us(10*msec)
