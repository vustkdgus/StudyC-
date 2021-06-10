#include <stdio.h>

int main()
{
	const char* str = "korea";
	int* pi;
	double d = 123.456;
	int i;
	int ary[] = { 1,2,3,4,5 };
	char aary[] = { 'a', 'b' };
	int* ptr = static_cast<int*>(ary);
	ptr = static_cast<int*>(aary);
	i = static_cast<int>(d);
	pi = static_cast<int*>(str);
	pi = (int*)str;
}