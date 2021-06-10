#include <stdio.h>
using namespace std;
int main()
{

	int sum = 124, num = 5;
	double d_sum, d_num;
	d_sum = static_cast<double>(sum);
	d_num = static_cast<double>(num);

	printf("%f", d_sum/d_num);
}