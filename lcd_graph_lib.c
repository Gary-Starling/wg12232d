 
#include "delay.h"
#include "stm32f10x.h"
#include "lcd_graph_lib.h"
#include "font_6x8.h"
#include "Font_12x16.h"
#include "stdio.h"

unsigned char PlaceArray[] = {120,114,108,102,96,90,84,78,72,66,60,54,48,42,36,30,24,18,12,6}; 
unsigned char PlaceArray_x12[] = {122,110,98,86,74,62,50,38,26,14};   


//-------------------------------------------------------------------
void FLAG_BUSY(void)
{
  delay_us(1);
}
//------------------------------------------------------------------

unsigned char LCDG_ReadData(char chip)
{ 
  uint16_t out;                          //data port
  uint8_t data;                          //data bus
  
  LCD_data_read_init();                  
  RW_SET;                               
  A0_SET;    
  
  nop(1);                                                                                                                                                                           
  strobe_on(chip);                      
  nop(2);
  
  out = GPIO_ReadInputData(GPIOB);
  GPIO_ReadInputDataBit(GPIOB, DB7_PIN);
  
  /*note:                                                                                                                                                                    
  because in my case the pins on the bus start with GPIO_Pin_3,4,5,6,7,8,12.
  This corresponds to the display pins -===============> DB0,1,2,3,4,5,6,7
  */
  out = out >> 3;                       //shifted res 
  /* get 8 lowest  bits */
  data = out;                           //read data uint8_t = uint16_t
  data &= 0x7f;                         //clear 7 bit
  
  /*if on pin12(db7) hi level*/
  if (GPIO_ReadInputDataBit(GPIOB, DB7_PIN)) 
    data |= (1 << 7);                    //up 7bit on data (+128)
  else  
    nop(1);                              //nothing to do
  
  strobe_off(chip);                       
  LCD_data_write_init();                //делаем порт снова выходом
  return data;
}

//--------------------------------------------------------------------

void LCDG_CommonFunc(unsigned char data,char chip)
{
  uint8_t pin12_fl = 0;
  uint16_t data_on_port = 0;
  
  /* note: such data preparation due to my board configuration */
  
  if (data > 128)  
    pin12_fl = 1;                         //on pin stm pin12 = 1 on wg12232 D7 = 1 
  else  
    pin12_fl = 0;                         //null o pin
  
  data &= 0x7f;                           //bit mask data without d7
  data_on_port = data;                    //remember 
  /*shift " stm-pin data 3,4,5,6,7,8,9,12
  | | | | | | | |
  wg12232d data 0,1,2,3,4,5,6,7
  */
  data_on_port = data_on_port << 3;       //shift    
  
  if (pin12_fl) 
    data_on_port |= (1 << 12);
  else 
    data_on_port &= ~(1 << 12);   
  
  RW_RESET;
  data_port_clear(1);
  nop(2);
  /*the rest of the port pins should not be changed,
  there may be other devices on them*/
  GPIOB->ODR |= data_on_port;
  nop(1);
  strobe_on(chip);
  nop(2);
  strobe_off(chip);                          
  nop(2);
}
//-----------------------------------------------------------------------

void LCDG_SendCom(unsigned char data,char chip)
{
  FLAG_BUSY();               //magic
  A0_RESET;                
  LCDG_CommonFunc(data,chip);  
}
//-----------------------------------------------------------------------

void LCDG_SendData(unsigned char data,char chip)
{
  FLAG_BUSY();
  A0_SET;
  LCDG_CommonFunc(data,chip);
}
//----------------------------------------------------------------------

void LCDG_InitLcd(void)
{
  delay_ms(100);
  DISPLAY_ON;                  
  LCDG_SendCom(COM_CLEAR_RMW,2);
  LCDG_SendCom(COM_STATIC_DRIVE_OFF,2);
  LCDG_SendCom(COM_DUTY_SELECT_ON,2);
  LCDG_SendCom(COM_DISPLAY_ON,2);
  LCDG_SendCom(COM_ADC_SELECT_ON,2);
  LCDG_SendCom(COM_RESET,2);
  LCDG_SendCom(COM_START_LINE(0),2); 
  
  LCDG_SendCom(COM_CLEAR_RMW,1);
  LCDG_SendCom(COM_STATIC_DRIVE_OFF,1);
  LCDG_SendCom(COM_DUTY_SELECT_ON,1);
  LCDG_SendCom(COM_DISPLAY_ON,1);
  LCDG_SendCom(COM_ADC_SELECT_ON,1); 
  LCDG_SendCom(COM_RESET,1);  
}
//---------------------------------------------------------------------------------


void LCDG_ClrDisp(unsigned int x1, unsigned int x2)
{
  unsigned int xPos = x1;
  unsigned int realAdr = 0;
  char chip=0;
  
  while(xPos < x2)
  {
    if (realAdr < 61) 
    {
      chip=2;
      realAdr = realAdr + 19;
    }
    else 
    {
      chip=1;
      realAdr = realAdr - 42;
      LCDG_SendCom(COM_START_LINE(0),1); 
    }
    
    LCDG_SendCom(PAGE0,chip);
    LCDG_SendCom(realAdr,chip);
    LCDG_SendData(0,chip);
    LCDG_SendCom(PAGE1,chip);
    LCDG_SendCom(realAdr,chip);  
    LCDG_SendData(0,chip);
    LCDG_SendCom(PAGE2,chip);
    LCDG_SendCom(realAdr,chip);
    LCDG_SendData(0,chip);
    LCDG_SendCom(PAGE3,chip);
    LCDG_SendCom(realAdr,chip);
    LCDG_SendData(0,chip);
    xPos++;
    realAdr = xPos;  
  } 
}
//----------------------------------------------------------------------------



void LCDG_SendSymbol(unsigned char xPos, unsigned char yPos,unsigned char data)
{
  unsigned char realAdr;
  unsigned char realPage = PAGE0 + yPos;
  unsigned int  pointerFont = data*6;
  realAdr = PlaceArray[xPos];
  xPos = realAdr;
  char chip=0;
  
  for(unsigned char i = 0; i<=5; i++)
  {
    if (realAdr < 61) 
    {
      chip=2;
      realAdr = realAdr + 19;
    }
    else 
    {
      chip=1;
      realAdr = realAdr - 61;
      realAdr = realAdr + 19;
    }
    data = font_6x8_Data[pointerFont];
    LCDG_SendCom(realPage,chip);
    LCDG_SendCom(realAdr,chip);
    LCDG_SendData(data,chip);
    xPos--;
    realAdr = xPos;
    pointerFont++;
  }
}

//------------------------------------------------------------------------------
void LCDG_SendSymbol_x12(unsigned char xPos, unsigned char yPos,unsigned char data)
{
  unsigned char realAdr2;
  unsigned char realAdr;
  unsigned char realPage = PAGE0 + yPos;
  unsigned int  pointerFont = data*24;
  realAdr = PlaceArray_x12[xPos];
  realAdr2 = PlaceArray_x12[xPos];
  xPos = realAdr;
  char chip=0;
  
  for(unsigned char i = 0; i<=11; i++)
  {
    if (realAdr < 61) 
    {
      chip=2;
      realAdr = realAdr + 19;
    }
    else 
    {
      chip=1;
      realAdr = realAdr - 61;
      realAdr = realAdr + 19;
    }
    data = Font_12x16_Data[pointerFont];
    LCDG_SendCom(realPage,chip);
    LCDG_SendCom(realAdr,chip);
    LCDG_SendData(data,chip);
    xPos--;
    realAdr = xPos;
    pointerFont++;
  }
  xPos = realAdr2;
  realPage++;
  for(unsigned char i = 0; i<=11; i++)
  {
    if (realAdr < 61) 
    {
      chip=2;
      realAdr = realAdr + 19;
    }
    else 
    {
      chip=1;
      realAdr = realAdr - 61;
      realAdr = realAdr + 19;
    }
    
    data = Font_12x16_Data[pointerFont];
    LCDG_SendCom(realPage,chip);
    LCDG_SendCom(realAdr,chip);
    LCDG_SendData(data,chip);
    xPos--;
    realAdr = xPos;
    pointerFont++;
  }
  
}

//------------------------------------------------------------------------------
void LCDG_SendString(unsigned char xPos, unsigned char yPos, char * string)
{
  char data = 0;
  while(*string)
  {
    data = *string++;
    LCDG_SendSymbol(xPos,yPos,data);
    xPos++;
  }
}
//-------------------------------------------12x16
void LCDG_SendString_x12(unsigned char xPos, unsigned char yPos, char * string)
{
  char data = 0;
  while(*string)
  {
    data = *string++;
    LCDG_SendSymbol_x12(xPos,yPos,data);
    xPos++;
  }
}

//----------------------------------------------------------
void strobe_on(char bit)  
{
  if (bit==1)
    CS1_RESET;
  
  if (bit==2)
    CS2_RESET;
  
  if (bit==3) 
  {
    CS1_RESET;
    CS2_RESET;
  }
  
}

void strobe_off(char bit)
{
  if (bit==1)
    CS1_SET;
  
  if (bit==2)
    CS2_SET;
  
  if (bit==3) 
  {
    CS1_SET;
    CS2_SET;
  }
}
//==========================================================

void data_port_clear(char bit) 
{  
  if (bit)
    GPIOB->ODR &= 0xEC07;  
  else
    GPIOB->ODR |= 0x13F8;  
}

void LCD_data_write_init(void) 
{
  GPIO_InitTypeDef GPIO_InitStructure;
  
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_12 | GPIO_Pin_9 | GPIO_Pin_8 | GPIO_Pin_7 | GPIO_Pin_6 | GPIO_Pin_5 | GPIO_Pin_4 | GPIO_Pin_3;//PD0 = D0, ... ,PD7 = D7
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;		  
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_Init(GPIOB, &GPIO_InitStructure);
  delay_us(1);
}

void LCD_data_read_init(void) 
{
  GPIO_InitTypeDef GPIO_InitStructure;
  
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_12 | GPIO_Pin_9 | GPIO_Pin_8 | GPIO_Pin_7 | GPIO_Pin_6 | GPIO_Pin_5 | GPIO_Pin_4 | GPIO_Pin_3;//PD0 = D0, ... ,PD7 = D7
  GPIO_InitStructure.GPIO_Mode  = GPIO_Mode_AIN;		
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_Init(GPIOB, &GPIO_InitStructure);
  delay_us(1);
}

void nop(uint32_t cnt)
{
  int x = 0, y = 0;
  
  for (x = 0; x < cnt; x++)
    y++;
}

void printLcdLong(unsigned int x, unsigned int y, long num)
{
  char str[4];
  
  sprintf(str, "%d", num);
  
  if ((num<0)&&(num>-10))
    LCDG_SendString(x+1,y,str);
  
  if ((num<0)&&(num<-9)) 
    LCDG_SendString(x,y,str);
  
  
  if ((num<10)&&(num>=0))
    LCDG_SendSymbol(x+1,y,0x20);
  
  if ((num>=0)&&(num<10)) 
    LCDG_SendString(x+2,y,str);  
  
  if ((num>0)&&(num<100)&&(num>=10))
    LCDG_SendString(x+1,y,str);
  
  if ((num<100)&&(num>0)) 
    LCDG_SendSymbol(x,y,0x20);
  
  if ((num>0)&&(num<1000)&&(num>=100)) 
    LCDG_SendString(x,y,str);
  
}


void printLcdLong_x12(unsigned int x, unsigned int y, long num)
{
  char str[4]="";
  
  sprintf(str, "%d", num);
  
  if ((num<0)&&(num>-10)) 
    LCDG_SendString_x12(x+1,y,str);
  
  if ((num<0)&&(num<-9))
    LCDG_SendString_x12(x,y,str);
  
  if ((num<0)&&(num>-9)) 
    LCDG_SendSymbol_x12(x,y,0x20);
  
  if ((num<10)&&(num>0))
    LCDG_SendSymbol_x12(x+1,y,0x20);
  
  if ((num>=0)&&(num<10))
    LCDG_SendString_x12(x+2,y,str);
  
  if ((num>0)&&(num<100)&&(num>10))
    LCDG_SendString_x12(x+1,y,str);
  
  if ((num<100)&&(num>0)) 
    LCDG_SendSymbol_x12(x,y,0x20);
  
  if ((num>0)&&(num<1000)&&(num>=100))
    LCDG_SendString_x12(x,y,str);    
}

