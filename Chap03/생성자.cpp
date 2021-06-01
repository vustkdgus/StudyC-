#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <iostream>

class CTest {
private:
	int m_num;
	int* ptr;
public:
	CTest() {
		printf("����Ʈ ������!!\n");
	};
	
	CTest(int num) {
		m_num = num;
		printf("������ ȣ�� : %d\n", m_num);
	}
	CTest(int num, int* ptr) {	// ���� ����
		this->m_num = num;
		this->ptr = new int;	// �����Ҵ�
		this->ptr = ptr;
		printf("��������� ȣ�� : %d, %p", m_num, ptr);
	}
	CTest(CTest& other) {		// ���������
		this->m_num = other.m_num;
		this->ptr = new int;	// �����Ҵ� (���� ����)
		this->ptr = ptr;
		printf("��������� ȣ�� : %d, %p\n", m_num, ptr);
	}
	~CTest() {
		delete ptr;
	}
	void getData() {
		printf("%d\n", m_num);
	}
};


int main()
{
	// �⺻�ڷ���
	int a = 10;
	int b(20);
	int c(a);
	printf("%d, %d, %d", a, b, c);
	// ����� �ڷ���
	CTest c1(100);	// �μ��Ѱ��� ������ ȣ��
	CTest c2;		// ����Ʈ ������ ȣ��
	CTest c3(c1);	// ���� ������ ȣ��
	//CTest c4(50, nullptr);
	c3.getData();

	return 0;
}