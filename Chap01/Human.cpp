#include <iostream>

class Human {
public :
	char name[20];
	float height;
	float weight;
	int age;
	char blood;

	void view();

};

void Human::view()
{
	printf("나의 이름은 %s 이고 키는 %f 이고 몸무게는 %f 이고 나이는 %d 이고 혈액형은 %c 입니다.", name, height, weight, age, blood);
}

int main()
{
	Human my = { "편상현", 179, 64, 27, 'O' };
	my.view();
	return 0;
}