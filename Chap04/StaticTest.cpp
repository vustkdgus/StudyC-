#include <stdio.h>
#include <iostream>

class StaticTest {
public:
	int a;
	static int b;	// static ������� ����
	StaticTest() {
		a = 10;
		//b = 20;	// Ŭ���� ���ο��� �ʱ�ȭ�� �ȵ�
		b++;		
	}
	void getData() {
		printf("a : %d\n", a);
	}
};
int StaticTest::b = 20;	// static ������� �ʱ�ȭ(�ܺο��� �ʱ�ȭ �Ѵ�.) - ��ü���� �������� �ʴ´�.

int main()
{
	StaticTest s1;
	s1.getData();

	return 0;
}