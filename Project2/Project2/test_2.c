#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n, j;
	int i;
	printf("����������:\n");

	for (i = 0; i < 7; i++)
	{
		scanf("%d", &n);
		if (n > 50)
		{
			printf("����������:\n"); 
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