#include <iostream>

class MyTest {
private:
	int x;
	int y;
public:
	MyTest() {}
	MyTest(int a, int b) { x = a; y = b;}
	
	const MyTest sum(const MyTest& other) const {
		MyTest res;
		res.x = this->x + other.x;
		res.y = this->y + other.y;
		return res;
	}
	void printData() {
		printf("x = %d, y = %d\n", x, y);
	}
};

int main()
{
	MyTest obj1(10, 20);
	MyTest obj2(20, 10);
	MyTest obj;
	obj = obj1.sum(obj2);
	
	obj.printData();

	return 0;
}