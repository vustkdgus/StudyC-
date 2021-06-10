#include <stdio.h>

class CMember
{
private:
	char name[10];
	char phone[13];
	char address[50];
	static int count;

public:
	CMember() { count++; }
	~CMember() { count--; }
	static void InitCount() {
		count = 1;
	}
	static void GetData(const char* name, const char* phone, const char* address) {
		printf("회원번호 = %d\n", count);
		printf("이름 : %s \n휴대폰 : %s \n주소 : %s\n\n", name, phone, address);
	}
	
};
int CMember::count;

int main()
{
	CMember a;
	a.InitCount();
	
	a.GetData("aaa", "010-1111-1111", "부산");
	CMember b;
	b.GetData("bbb", "010-2222-2222", "서울");
	CMember c;
	c.GetData("ccc", "010-3333-3333", "대구");

	return 0;
}