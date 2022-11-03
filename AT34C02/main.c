#include <REGX52.H>
#include "LCD1602.H"
#include "AT24C02.H"
#include "Delay.h"
#include "Key.h"

unsigned char KeyNum;
unsigned int Num;


void main()
{
	LCD_Init();
	LCD_ShowNum(1,1,Num,5);

	while(1)
	{
		KeyNum=Key();
		if(KeyNum==1)
		{
			Num++;
			LCD_ShowNum(1,1,Num,5);
		}
		if(KeyNum==2)
		{
			Num--;
			LCD_ShowNum(1,1,Num,5);
		}
		if(KeyNum==3)
		{
			AT24C02_WriteByte(0,Num%256);
			Delay(5);
			AT24C02_WriteByte(1,Num/256);
			Delay(5);
			LCD_ShowString(2,1,"Write Ok");
			Delay(1000);
			LCD_ShowString(2,1,"		");
		}
		if(KeyNum==4)
		{
			Num=AT24C02_ReadByte(0);
			Num|=AT24C02_ReadByte(1)<<8;
			LCD_ShowNum(1,1,Num,5);
			LCD_ShowString(2,1,"Read OK");
			Delay(1000);
			LCD_ShowString(2,1,"		");
		}
	}
}