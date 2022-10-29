#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n, j;
	int i;
	printf("请输入数字:\n");

	for (i = 0; i < 7; i++)
	{
		scanf("%d", &n);
		if (n > 50)
		{
			printf("请重新输入:\n"); 
			i--;
		}
		else
		{
			for (j = 0; j < n; j++)
				printf("*");
		}
		printf("\n");
	}
	return 0;
}