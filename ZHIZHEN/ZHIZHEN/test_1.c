#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int Time[] = { 23,59,55 };

int *GetTime(void)
{

	return Time;

}



int main(void)

{
	int* pt;
	pt = GetTime();

	printf("pt[0]=%d\n", pt[0]);
	printf("pt[1]=%d\n", pt[1]);
	printf("pt[2]=%d\n", pt[2]);



	return 0;
}










