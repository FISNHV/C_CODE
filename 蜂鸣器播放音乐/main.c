#include <REGX52.H>
#include "Delay.h"
#include "Timer0.h"

sbit Buzzer=P2^5;

unsigned int FreqTable[]={

void main()
{
	Timer0Init();
	
	while(1)
	{
		
	}
}

void Timer0_Routine()	interrupt 1
{

	TL0 = 0x66;		//���ö�ʱ��ʼֵ
	TH0 = 0xFC;		//���ö�ʱ��ʼֵ

	Buzzer=!Buzzer;
}