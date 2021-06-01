#include <stdio.h>

int main()
{
	float* ar;

	ar = new float[100];
	ar[50] = 3.14;

	printf("50¹øÂ° = %.2lf", ar[50]);

	delete[]ar;
}