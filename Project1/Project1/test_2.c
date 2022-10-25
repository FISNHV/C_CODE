#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>

char* strconnect(char *str1, char *str2);
int main()
{
	char str1[20], str2[20];
	char* str;
	puts("请输入两个字符串，用回车分开：");
	gets(str1);
	gets(str2);
	str = strconnect(str1, str2);
	puts("链接后的字符串为：");
		puts(str);
	system("pause");
	return 0;

}
char* strconnect(char* str1, char* str2)

{
	char* str;
	str = (char*)malloc(strlen(str1) + strlen(str2) + 1);
	str[0] = '\0';
	strcat(str, str1);
	strcat(str, str2);
	return str;

}





