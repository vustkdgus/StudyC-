#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

class Human
{
private:
	char* pname;
	int age;

public:
	Human(const char* aname, int aage) {
		pname = new char[strlen(aname) + 1];
		strcpy(pname, aname);
		age = aage;
		printf("%s 객체의 생성자가 호출되었습니다.\n", pname);
	}

	~Human() {
		printf("%s 객체가 파괴되었습니다.\n", pname);
		delete[]pname;
	}

	void intro() {
		printf("이름=%s, 나이=%d\n", pname, age);
	}
};
Human boy("김수한무거북이와두루미", 12); // 객체를 메인밖에두면 메인보다 먼저 실행

int main()
{
	printf("main()\n");
	//Human boy("김수한무거북이와두루미", 12);
	boy.intro();
}