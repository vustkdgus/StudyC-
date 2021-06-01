#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <string.h>

void InputName(char** Name)
{
	*Name = (char*)malloc(32);
	strcpy(*Name, "kim sang hyung");
}

int main()
{
	char* Name;

	InputName(&Name);
	printf("이름은 %s입니다.\n", Name);
	free(Name);

	int a = 10;
	int& ra = a;
	int* pa = &ra;
	printf("%p %p %p\n", &a, &ra, pa);
}