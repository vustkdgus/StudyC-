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
		printf("%s ��ü�� �����ڰ� ȣ��Ǿ����ϴ�.\n", pname);
	}

	~Human() {
		printf("%s ��ü�� �ı��Ǿ����ϴ�.\n", pname);
		delete[]pname;
	}

	void intro() {
		printf("�̸�=%s, ����=%d\n", pname, age);
	}
};
Human boy("����ѹ��ź��̿͵η��", 12); // ��ü�� ���ιۿ��θ� ���κ��� ���� ����

int main()
{
	printf("main()\n");
	//Human boy("����ѹ��ź��̿͵η��", 12);
	boy.intro();
}