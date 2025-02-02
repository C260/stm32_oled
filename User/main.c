/**
  ******************************************************************************
  * @file    OLED_I2C.c
  * @author  fire
  * @version V1.0
  * @date    2014-xx-xx
  * @brief   128*64点阵的OLED显示测试工程，仅适用于SD1306驱动IIC通信方式显示屏
  ******************************************************************************
  * @attention
  *
  * 实验平台:野火 ISO STM32 开发板 
  * 论坛    :http://www.firebbs.cn
  * 淘宝    :https://fire-stm32.taobao.com
	*
  *
  ******************************************************************************
  */ 
	
#include "stm32f10x.h"
#include "delay.h"
#include "bsp_usart.h"
#include "test.h"
#include "draw_api.h"



int main(void)
{
	  /* 嵌套向量中断控制器组选择 */
  NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);
	DelayInit();
//	USART_Config();
	InitGraph();	

	while(1)
	{
//		ClearScreen();
//		SetFontSize(1);
//		DrawString(0,0,"test");
//		UpdateScreen();
//		DelayMs(1000);
//		DrawFillCircle(20,20,10);
		demo();	
	}
}
