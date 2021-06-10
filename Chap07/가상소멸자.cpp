#include <iostream>
using namespace std;

class CTest
{
private:
	int num;
public:
	CTest(int anum) {
		num = anum;
		cout << num << "CTest constructor " << endl;
	}
	virtual void func() {
		cout << "CTest function()" << endl;
	}
	virtual ~CTest() {
		cout << num << "CTest deconstructor" << endl;
	}
};
class CTestSub : public CTest 
{
private:
	int subN;
public:
	CTestSub(int anum, int asubN) : CTest(anum) {
		subN = asubN;
		cout << subN << "CTestSub constructor" << endl;
	}
	void func() {
		cout << "CTestSub function()" << endl;
	}
	~CTestSub() {
		cout << subN << "CTestSub deconstructor" << endl;
	}
};

int main()
{
	CTest b(10);
	b.func();
	CTestSub d(20, 20);
	d.func();
	CTest* pb = new CTestSub(30, 33);	// �߻��ڷ������� �ڽİ�ü�� ����Ű�� �Ѵ�.
	pb->func();
	
	delete pb;

	return 0;
}