#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

class Human
{
private:
	char* name;
	int age;
public:
	Human() {}
	//Human(char *n, int a) { name = n; age = a; }
	void PrintInfo() {
		printf("이름 : %s, 나이 : %d\n", name, age);
	}
	Human(const char* aname, int aage) {
		this->name = new char[strlen(aname) + 1];
		strcpy(this->name, aname);
		this->age = aage;
	}
	Human(const Human& other) {
		this->name = new char[strlen(other.name) + 1];
		strcpy(this->name, other.name);
		this->age = other.age;
	}
	const Human operator = (const Human& other) const {
		Human h;
		h.name = new char[strlen(other.name) + 1];
		strcpy(h.name, other.name);
		h.age = other.age;

		h.PrintInfo();
		return h;
	}

	~Human() {
		delete[]name;
	}
};


int main()
{
	Human myH("PSH", 11);
	myH.PrintInfo();
	Human youH(myH);
	youH.PrintInfo();

	Human Xman = myH;
	Xman.PrintInfo();

	return 0;
}