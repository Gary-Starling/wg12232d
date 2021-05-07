
#ifndef LCD_GRAPH_LIB_H
#define LCD_GRAPH_LIB_H


//  macro

#define       LED_PIN                       GPIO_Pin_12  
#define       LED_PORT                      GPIOA
#define       LED_ON           GPIO_SetBits(LED_PORT,LED_PIN) 
#define       LED_OFF          GPIO_ResetBits(LED_PORT,LED_PIN)


#define       DISPLAY_PIN                       GPIO_Pin_11  
#define       DISPLAY_PORT                      GPIOB
#define       DISPLAY_ON       GPIO_ResetBits(DISPLAY_PORT,DISPLAY_PIN)
#define       DISPLAY_OFF      GPIO_SetBits(DISPLAY_PORT,DISPLAY_PIN)


//===================================================//
#define A0_PIN                       GPIO_Pin_0  
#define A0_PORT                      GPIOB
#define A0_SET                       GPIO_SetBits(A0_PORT,A0_PIN)
#define A0_RESET                     GPIO_ResetBits(A0_PORT,A0_PIN)



#define CS1_PIN                       GPIO_Pin_1  
#define CS1_PORT                      GPIOB
#define CS1_SET                       GPIO_SetBits(CS1_PORT,CS1_PIN)
#define CS1_RESET                     GPIO_ResetBits(CS1_PORT,CS1_PIN)


#define CS2_PIN                       GPIO_Pin_2  
#define CS2_PORT                      GPIOB
#define CS2_SET                       GPIO_SetBits(CS2_PORT,CS2_PIN)
#define CS2_RESET                     GPIO_ResetBits(CS2_PORT,CS2_PIN)




#define DB0_PIN                       GPIO_Pin_3  
#define DB0_PORT                      GPIOB
#define DB0_SET                       GPIO_SetBits(DB0_PORT,DB0_PIN)
#define DB0_RESET                     GPIO_ResetBits(DB0_PORT,DB0_PIN)


#define DB1_PIN                       GPIO_Pin_4  
#define DB1_PORT                      GPIOB
#define DB1_SET                       GPIO_SetBits(DB1_PORT,DB1_PIN)
#define DB1_RESET                     GPIO_ResetBits(DB1_PORT,DB1_PIN)

#define DB2_PIN                       GPIO_Pin_5  
#define DB2_PORT                      GPIOB
#define DB2_SET                       GPIO_SetBits(DB2_PORT,DB2_PIN)
#define DB2_RESET                     GPIO_ResetBits(DB2_PORT,DB2_PIN)


#define DB3_PIN                       GPIO_Pin_6  
#define DB3_PORT                      GPIOB
#define DB3_SET                       GPIO_SetBits(DB3_PORT,DB3_PIN)
#define DB3_RESET                     GPIO_ResetBits(DB3_PORT,DB3_PIN)

#define DB4_PIN                       GPIO_Pin_7  
#define DB4_PORT                      GPIOB
#define DB4_SET                       GPIO_SetBits(DB4_PORT,DB4_PIN)
#define DB4_RESET                     GPIO_ResetBits(DB4_PORT,DB4_PIN)

#define DB5_PIN                       GPIO_Pin_8  
#define DB5_PORT                      GPIOB
#define DB5_SET                       GPIO_SetBits(DB5_PORT,DB5_PIN)
#define DB5_RESET                     GPIO_ResetBits(DB1_PORT,DB5_PIN)

#define DB6_PIN                       GPIO_Pin_9  
#define DB6_PORT                      GPIOB
#define DB6_SET                       GPIO_SetBits(DB6_PORT,DB6_PIN)
#define DB6_RESET                     GPIO_ResetBits(DB6_PORT,DB6_PIN)

#define DB7_PIN                       GPIO_Pin_12  
#define DB7_PORT                      GPIOB
#define DB7_SET                       GPIO_SetBits(DB7_PORT,DB7_PIN)
#define DB7_RESET                     GPIO_ResetBits(DB7_PORT,DB7_PIN)

#define RW_PIN                        GPIO_Pin_15  
#define RW_PORT                       GPIOA
#define RW_SET                        GPIO_SetBits(RW_PORT,RW_PIN)
#define RW_RESET                      GPIO_ResetBits(RW_PORT,RW_PIN)


#define PAGE0 0xb8 //строка 1
#define PAGE1 0xb9 //строка 2
#define PAGE2 0xba //строка 3
#define PAGE3 0xbb //строка 4

//com
#define COM_DISPLAY_ON       0xaf            
#define COM_DISPLAY_OFF      0xae              
#define COM_START_LINE(x)    (0xc0&(0x1f&(x))) 
#define COM_ADC_SELECT_OFF   0xa0               //direct correspondence of address and position
#define COM_ADC_SELECT_ON    0xa1               //reverse correspondence of address and position
#define COM_STATIC_DRIVE_ON  0xa5               //static control modeя
#define COM_STATIC_DRIVE_OFF 0xa4               //normal control
#define COM_DUTY_SELECT_ON   0xa9               // multiplex selection
#define COM_CLEAR_RMW        0xee               
#define COM_SELECT_RMW       0xe0              
#define COM_RESET            0xe2               // line and page are reset to 0




//******************************************************************************
//
//  func
//
//low
unsigned char LCDG_ReadData(char chip);                            //read byte ram
void LCDG_CommonFunc(unsigned char data,char chip);
void LCDG_SendCom(unsigned char data,char chip);                   //wr com
void LCDG_SendData(unsigned char data,char chip);                  //
void nop(uint32_t cnt);

//init
void LCDG_InitPort(void);                                 
void LCDG_InitLcd(void);                                  
void LCDG_ClrDisp(unsigned int x1, unsigned int x2);      //clear from x1 to x2
void data_port_clear(char bit);
#define LCDG_ClrAllDisp() LCDG_ClrDisp(0, 122)           


void LCDG_SendSymbol(unsigned char xPos, unsigned char yPos, unsigned char data);   
void LCDG_SendSymbol_x12(unsigned char xPos, unsigned char yPos,unsigned char data); 
void LCDG_SendString(unsigned char xPos, unsigned char yPos, char * string);         
void LCDG_SendString_x12(unsigned char xPos, unsigned char yPos, char * string);    

void printLcdLong_x12(unsigned int x, unsigned int y, long num);
void printLcdLong(unsigned int x, unsigned int y, long num);
void strobe_on(char bit);       
void strobe_off(char bit);      
void LCD_data_write_init(void); 
void LCD_data_read_init(void);  
void FLAG_BUSY(void);           

#endif //LCD_GRAPH_LIB_H

