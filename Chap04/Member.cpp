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
		printf("ȸ����ȣ = %d\n", count);
		printf("�̸� : %s \n�޴��� : %s \n�ּ� : %s\n\n", name, phone, address);
	}
	
};
int CMember::count;

int main()
{
	CMember a;
	a.InitCount();
	
	a.GetData("aaa", "010-1111-1111", "�λ�");
	CMember b;
	b.GetData("bbb", "010-2222-2222", "����");
	CMember c;
	c.GetData("ccc", "010-3333-3333", "�뱸");

	return 0;
}