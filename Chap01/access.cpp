#include <stdio.h>

struct SHuman
{

	char name[12];
	int age;

public:
	void intro() {
		printf("이름=%s, 나이=%d\n", name, age);
	}
};

int main()
{
	SHuman kim = { "김상형", 29 };
	kim.intro();
}