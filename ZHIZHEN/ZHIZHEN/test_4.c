#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>


void swap(char* p1, char* p2)
{
	char p[20];
	strcpy(p, p1); strcpy(p1, p2); strcpy(p2, p1);



}


int main(void)
{
	void swap(char*, char*);
	char str1[20], str2[31],str3[20];
	printf("input three line:\n");
	gets(str1);
	gets(str2);
	gets(str3);
	if (strcmp(str1, str2) > 0)swap(str1, str2);
	if (strcmp(str1, str3) > 0)swap(str1, str3);
	if (strcmp(str1, str3) > 0)swap(str2, str3);
	printf("Npw,the order is:\n");
	printf("%s\n%s\n%s\n", str1, str2, str3);
	

return 0;

}

