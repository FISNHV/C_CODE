#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


int main(void)
{
	FILE* f = fopen("F:\\test.txt", "w");
	
	fputc('A', f);

	fputs("Helloworld!",f);

	fclose(f);






	return 0;
}

int main(void)
{
	char a;
	char s[10];
	FILE* f = fopen("F:\\test.txt", "r");

	a = fgetc(f);
	fgets(s,10,f);
		fclose(f);

	printf("%c", a);
	printf(s);



	return 0;
}

