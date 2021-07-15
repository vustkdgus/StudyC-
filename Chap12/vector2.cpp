#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v = { 10, 20, 30, 40, 50 };
	for (int i = 0; i < 5; i++){cout << v[i] << endl;} // 배열형태
	for (auto iter = v.begin(); iter != v.end(); iter++) cout << *iter << ' ';

	return 0;
}