#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

class Human
{
private:
	char pname[12];
	int age;

public:
	Human(const char* aname, int aage) {
		if (strlen(aname) < 12)
		{
			strcpy(pname, aname);
		}
		else { strcpy(pname, ""); }
		if (age < 0 || age > 120) {
			age = 0;
		}
			
		else { age = aage; }
	}

	Human(const Human& other) {
		strcpy(pname, other.pname);
		age = other.age;
	}

	~Human() {
		delete[]pname;
	}

	void intro() {
		printf("이름=%s, 나이=%d\n", pname, age);
	}

};

void printHuman(Human who) {
	who.intro();
}

int main()
{
	char name[12];
	int age;
	printf("이름 : ");
	scanf("%s", &name);
	printf("나이 : ");
	scanf(" %d", &age);

	Human kang(name, age);
	Human boy = kang;

	printHuman(boy);
}