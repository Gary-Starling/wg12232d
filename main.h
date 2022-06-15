
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif
  
  /* Includes ------------------------------------------------------------------*/
#include "stm32f0xx_hal.h"
  
  
  struct AnyButton {
    uint8_t Pressed;
    
  };
  
  
  void Error_Handler(void);
  void enter_stby_mode(void);
  
#define button_plus_Pin GPIO_PIN_3
#define button_plus_GPIO_Port GPIOA
  
#define button_plus_EXTI_IRQn EXTI2_3_IRQn
#define button_press_Pin GPIO_PIN_4
  
#define button_press_GPIO_Port GPIOA
#define button_press_EXTI_IRQn EXTI4_15_IRQn
  
#define button_minus_Pin GPIO_PIN_14
#define button_minus_GPIO_Port GPIOB
#define button_minus_EXTI_IRQn EXTI4_15_IRQn
  
  
#define USRT1_TX_Pin GPIO_PIN_9
#define USRT1_TX_GPIO_Port GPIOA
#define USRT1_RX_Pin GPIO_PIN_10
#define USRT1_RX_GPIO_Port GPIOA
  
#define WATER_PIN       GPIO_PIN_1
#define WATER_PORT      GPIOA
  
#define WATER_YES        0 == HAL_GPIO_ReadPin(WATER_PORT, WATER_PIN)
#define WATER_NO         1 == HAL_GPIO_ReadPin(WATER_PORT, WATER_PIN)
#define WATER_READ       HAL_GPIO_ReadPin(WATER_PORT, WATER_PIN)
  
  

  
#define BUFF_TEST_LENGTH 10  
  
#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
