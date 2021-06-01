#include <stdio.h>

void swap(int& a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int i1 = 3;
	int i2 = 10;

	printf("i1 = %d, i2 = %d\n", i1, i2);

	swap(i1, i2);
	printf("i1 = %d, i2 = %d\n", i1, i2);
}