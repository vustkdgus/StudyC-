/* �Լ� ���ø� */
#include <iostream>
using namespace std;

template <typename T>
T Add(T a, T b)
{
	return a + b;
}
template <>		// Ư��ȭ
const char* Add(const char* lstr, const char* rstr)
{
	int llen = strlen(lstr);
	int rlen = strlen(rstr);
	int len = llen + rlen + 1;	// ��ü ���ڿ� ����
	char* str = new char[len];
	strcpy_s(str, llen + 1, lstr);
	strcat_s(str, len, rstr);

	return str;
}
int main()
{
	int res = Add<int>(3, 4);
	cout << res << endl;
	const char* sres = Add<const char*>("Hello", "Iot");
	cout << sres << endl;

	return 0;
}