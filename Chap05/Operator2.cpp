#include <iostream>

class MyTest {
private:
	int x;
	int y;
public:
	MyTest() {}
	MyTest(int a, int b) {
		x = a;
		y = b;
		printf("인수 2개 생성자!\n");
	}
	void printData() {
		printf("x = %d, y = %d\n", x, y);
	}
	MyTest(MyTest& rhs) : x(rhs.x), y(rhs.y) {
		printf("복사생성자 호출!!\n");
	}

	const MyTest& operator +(const MyTest& other) const {
		MyTest t;
		t.x = x + other.x;
		t.y = y + other.y;

		return t;
	}

	/*const MyTest& operator -(const MyTest& other) const {
		MyTest t;
		t.x = x - other.x;
		t.y = y - other.y;

		return t;
	}*/
	friend const MyTest operator-(const MyTest& rhs1, const MyTest& rhs2);

	const MyTest& operator =(const MyTest& other) {
		x = other.x;
		y = other.y;
		return *this;
	}
};

const MyTest operator-(const MyTest& rhs1, const MyTest& rhs2) {
	MyTest res;
	res.x = rhs1.x - rhs2.x;
	res.y = rhs1.y - rhs2.y;

	return res;
}

int main()
{
	MyTest obj1(10, 20);
	MyTest obj2(20, 10);
	MyTest obj;
	obj = obj1 + obj2;
	obj.printData();

	obj = operator-(obj1, obj2);
	obj.printData();

	return 0;
}