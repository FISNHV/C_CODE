#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

struct programming
{
	float constant;
	char* pointer;

};

int main()
{
	struct programming variable;
	char string[] = "HELLO";

	variable.constant = 1.23;
	variable.pointer = string;

	printf("%f\n", variable.constant);
	printf("%s\n", variable.pointer);

	return 0;
}