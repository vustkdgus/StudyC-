/* �Լ� ���ø� */
#include <iostream>
using namespace std;

template <typename T>	// �Ϲ�ȭ
class CTest {
private:
	T num;
public:
	// CTest(T anum) : num(anum) {};
	CTest(T);					//���ø� ����
	void printData() {
		cout << "num : " << num << endl;
	}
};
template <typename T>			// ���ø� ������ �ѹ��� �Ѵ�
CTest<T>::CTest(T anum) {		// ����

}


int main()
{
	// CTest obj(10);
	CTest<int> obj(10);
	obj.printData();

	return 0;
}