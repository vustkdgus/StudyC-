#include <stdio.h>

struct SHuman
{

	char name[12];
	int age;

public:
	void intro() {
		printf("�̸�=%s, ����=%d\n", name, age);
	}
};

int main()
{
	SHuman kim = { "�����", 29 };
	kim.intro();
}