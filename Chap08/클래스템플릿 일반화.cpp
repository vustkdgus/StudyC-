/* 함수 템플릿 */
#include <iostream>
using namespace std;

template <typename T>	// 일반화
class CTest {
private:
	T num;
public:
	// CTest(T anum) : num(anum) {};
	CTest(T);					//템플릿 선언
	void printData() {
		cout << "num : " << num << endl;
	}
};
template <typename T>			// 템플릿 선언을 한번더 한다
CTest<T>::CTest(T anum) {		// 정의

}


int main()
{
	// CTest obj(10);
	CTest<int> obj(10);
	obj.printData();

	return 0;
}