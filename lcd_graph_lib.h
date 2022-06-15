#ifndef LCD_GRAPH_LIB_H
#define LCD_GRAPH_LIB_H

#include "stdint.h"


#define __FREE_RTOS__

typedef enum
{
  CLEAR,
  SETUP
} eDataPortState;
  
typedef enum
{
  INPUT,
  OUTPUT
} eDataPortInit;

typedef enum
{
  OFF,
  ON
}eInversion;

typedef enum
{
 CS1 = 1,
 CS2,
 BOTH
}eCSnumer;


//������� ������
#define COM_DISPLAY_ON       (0xaf)               //�������� ���
#define COM_DISPLAY_OFF      (0xae)               //��������� ���
#define COM_START_LINE(x)    (0xc0&(0x1f&(x)))    //���������� ������� ������ ���
#define COM_ADC_SELECT_OFF   (0xa0)               //������ ������������ ������ � �������
#define COM_ADC_SELECT_ON    (0xa1)               //�������� ������������ ������ � �������
#define COM_STATIC_DRIVE_ON  (0xa5)               //����������� ����� ����������
#define COM_STATIC_DRIVE_OFF (0xa4)               //������� ����������
#define COM_DUTY_SELECT_ON   (0xa9)               //����� ������������
#define COM_CLEAR_RMW        (0xee)               //������ ����� RMW
#define COM_SELECT_RMW       (0xe0)               //��������� ����� RMW
#define COM_RESET            (0xe2)               //������ � �������� ������������ � 0

//���������
#define PAGE0 (0xb8) //������ 1
#define PAGE1 (0xb9) //������ 2
#define PAGE2 (0xba) //������ 3
#define PAGE3 (0xbb) //������ 4

//������� �����

#define A0_Pin                  GPIO_PIN_0
#define CS1_Pin                 GPIO_PIN_1
#define CS2_Pin                 GPIO_PIN_2
#define RW_Pin                  GPIO_PIN_11
//#define LED_PIN               GPIO_PIN_12
//#define LED_PORT              GPIOB
#define POWER_DISP_PIN          GPIO_PIN_13
#define DISP_PORT               GPIOB


#define DB0_Pin                 GPIO_PIN_3
#define DB1_Pin                 GPIO_PIN_4
#define DB2_Pin                 GPIO_PIN_5
#define DB3_Pin                 GPIO_PIN_6
#define DB4_Pin                 GPIO_PIN_7
#define DB5_Pin                 GPIO_PIN_8
#define DB6_Pin                 GPIO_PIN_9
#define DB7_Pin                 GPIO_PIN_10


#define DISPLAY_ON       HAL_GPIO_WritePin(DISP_PORT, POWER_DISP_PIN, GPIO_PIN_SET)
#define DISPLAY_OFF      HAL_GPIO_WritePin(DISP_PORT, POWER_DISP_PIN, GPIO_PIN_RESET)

#define A0_SET           HAL_GPIO_WritePin(DISP_PORT,A0_Pin, GPIO_PIN_SET)
#define A0_RESET         HAL_GPIO_WritePin(DISP_PORT,A0_Pin, GPIO_PIN_RESET)

#define CS1_SET          HAL_GPIO_WritePin(DISP_PORT,CS1_Pin, GPIO_PIN_SET)
#define CS1_RESET        HAL_GPIO_WritePin(DISP_PORT,CS1_Pin, GPIO_PIN_RESET)

#define CS2_SET          HAL_GPIO_WritePin(DISP_PORT,CS2_Pin, GPIO_PIN_SET)
#define CS2_RESET        HAL_GPIO_WritePin(DISP_PORT,CS2_Pin, GPIO_PIN_RESET)

#define RW_SET           HAL_GPIO_WritePin(DISP_PORT, RW_Pin, GPIO_PIN_SET)
#define RW_RESET         HAL_GPIO_WritePin(DISP_PORT, RW_Pin, GPIO_PIN_RESET)

//******************************************************************************
void data_port_set(eDataPortState state);
uint8_t LCDG_ReadData(void);                                     //������ �����  
void LCDG_SendData(uint8_t data, eCSnumer chip);                 //������ ������
void LCDG_SendCom(uint8_t data, eCSnumer chip);                  //������ �������  
void nop(void);                                                  //�����������
void strobe_on(eCSnumer chip);                                   //�������� �����. cs1/cs2 ��� ���
void strobe_off(eCSnumer chip);                                  //����. �����. cs1/cs2 ��� ���
void check_busy(void);

//������� �������������
void LCDG_InitPort(eDataPortInit state);     
void LCDG_InitPort_in(void); 
void LCDG_InitLcd(void);                                                //������������� lcd. ������ ����������������� ������ ��� ����� ������������ ������ 
void LCDG_FillAll(unsigned int x1, unsigned int x2, uint8_t data);      //��������� �������
#define LCDG_ClrAllDisp    LCDG_FillAll(0, 122, 0x00)                   //������ ������� �������
#define LCDG_FillAllDisp   LCDG_FillAll(0, 122, 0xff)                   //��������� ���� �������

//������� ������ ����� �� �������
void LCDG_SendSymbol(uint8_t xPos, uint8_t yPos, char symbol, eInversion inv); //������� ���� ������ � ���������� 6x8
void LCDG_SendString(uint8_t xPos, uint8_t yPos, char * string, eInversion inv);//������� ������

void LCDG_SendSymbol_x12(uint8_t xPos, uint8_t yPos, char symbol, eInversion inv);//������ 12x16
void LCDG_SendString_x12(uint8_t xPos, uint8_t yPos, char * string, eInversion inv);//������� ������ �12


#endif 

