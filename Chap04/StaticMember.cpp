#include <iostream>

class StaticTest {
	static int a;
	int b;
public:
	StaticTest();
	static void setData(int);	// static ����Լ��� static ��������� ����Ѵ�.
	void getData();
};
int StaticTest::a = 10;			// static ������� �ʱ�ȭ
StaticTest::StaticTest() {
	this->b = 20;
}
void StaticTest::getData() {
	printf("a: %d, b : %d\n", a, b);
}
void StaticTest::setData(int aa)
{
	a = aa;
	//this->a = aa;		// this �����͸� ����� �� ����(��ü�� �ƴϴ�)
}
int main()
{
	StaticTest s1;
	s1.getData();
	StaticTest s2;
	s2.getData();

	s1.setData(30);
	s1.getData();
	s2.getData();

	StaticTest::setData(40);

	return 0;
}