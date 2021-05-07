#include "misc.h"
#include "lcd_graph_lib.h"
#include "stm32f10x.h"
#include "delay.h"
#include "board.h" 



int main()
{ 
  
  stm32_init();        
  LCDG_InitLcd();    
  LCDG_ClrAllDisp();    
  
   LCDG_SendString_x12(0,1, " WG12232D");  //step x and y one sign 12x16! 
   delay_ms(1000);
   LCDG_ClrAllDisp(); 
   
   int test = 0;
   
  while(1)  
  {
    LCDG_SendString(0,0,"Hello my friend");   //step x and y one sign 6x8!    
    
    printLcdLong(0,1, test++);
    
  }
}


void stm32_init(void)
{
  GPIO_InitTypeDef GPIO_InitStructure;
  
  RCC_Configuration();
  NVIC_SetPriority(SysTick_IRQn, 0x00);
  SysTick_Config(800);
  
  /*
  GPIO_PinRemapConfig(GPIO_Remap_SWJ_JTAGDisable, ENABLE); 
  */
  /**/
  /* pin on base vt commut led*/
  GPIO_InitStructure.GPIO_Pin =  LED_PIN;
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_10MHz;
  GPIO_Init(LED_PORT, &GPIO_InitStructure);
  LED_OFF;
  
  GPIO_ResetBits(GPIOA,GPIO_Pin_0); 
  GPIO_ResetBits(GPIOA,GPIO_Pin_7);
  GPIO_ResetBits(GPIOA,GPIO_Pin_11);
  
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_11;
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_Init(GPIOB, &GPIO_InitStructure);
  
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_10;
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_Init(GPIOA, &GPIO_InitStructure);
  GPIO_SetBits(GPIOA,GPIO_Pin_10);
  
  DISPLAY_OFF; 
  LED_ON;     
  
  
  data_port_clear(1);
  GPIO_InitStructure.GPIO_Pin =  DB7_PIN | DB6_PIN | DB5_PIN | DB4_PIN | DB3_PIN | DB2_PIN | DB1_PIN | DB0_PIN | CS2_PIN | CS1_PIN | A0_PIN;
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_Init(GPIOB, &GPIO_InitStructure);
  
  GPIO_PinRemapConfig(GPIO_Remap_SWJ_JTAGDisable, ENABLE);
  GPIO_InitStructure.GPIO_Pin = RW_PIN;
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_Init(GPIOA, &GPIO_InitStructure);
  
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_8;
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_Init(GPIOA, &GPIO_InitStructure);
  
  data_port_clear(1);
  delay_us(100);
  
}




void RCC_Configuration(void)
{
  RCC_DeInit();
  RCC->CR     |= RCC_CR_HSION;
  while((RCC->CR & RCC_CR_HSIRDY)==0)
    RCC->CFGR &= ~RCC_CFGR_SW;
  RCC->CFGR |=  RCC_CFGR_SW_HSI;
  
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA | RCC_APB2Periph_GPIOB | RCC_APB2Periph_AFIO | RCC_APB2Periph_GPIOC, ENABLE);		
  
}









