#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Human
{
private:
	char* name;
public:
	Human() {}
	Human(const char* aname) {
		int len = strlen(aname) + 1;
		name = new char[len];
		strcpy_s(name, len, aname);
	}
	~Human(){
		delete[] name;
	}
	void printname() {
		cout << "My name is " << name << endl;
	}
	char* get_name() {
		return name;
	}
	char* set_name(char* aname) {
		name = aname;
	}
	
};

class Student : public Human {
private:
	char* major;
public:
	char* name = get_name();

	Student(const char* aname, const char* amajor) : Human(aname) {
		int len1 = strlen(amajor) + 1;
		major = new char[len1];
		strcpy_s(major, len1, amajor);
	}

	void printMajor() {
		cout << "My name is " << name << " My Major is " << major << endl;
	}

	~Student() {
		delete[] major;
	}
};

int main()
{
	Human my("홍길동");
	my.printname();
	Student s("이름", "Iot");
	s.printMajor(); // Myname is 이름 My Majoy is Iot 입니다.

	return 0;
}