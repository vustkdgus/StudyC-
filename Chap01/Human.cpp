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
	printf("���� �̸��� %s �̰� Ű�� %f �̰� �����Դ� %f �̰� ���̴� %d �̰� �������� %c �Դϴ�.", name, height, weight, age, blood);
}

int main()
{
	Human my = { "�����", 179, 64, 27, 'O' };
	my.view();
	return 0;
}