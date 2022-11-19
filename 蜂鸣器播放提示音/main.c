#include <REGX52.H>
#include "Delay.h"
#include "KEY.H"
#include "Nixie.h"
#include "BUZZER.H"



unsigned char KeyNum;
unsigned int i;

void main()
{
	while(1)
	{
		KeyNum=Key();
		if(KeyNum)
		{
			Buzzer_Time(100);
				Nixie(1,KeyNum);
		}
		
	}
}
