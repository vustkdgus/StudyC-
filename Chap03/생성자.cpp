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
		printf("디폴트 생성자!!\n");
	};
	
	CTest(int num) {
		m_num = num;
		printf("생성자 호출 : %d\n", m_num);
	}
	CTest(int num, int* ptr) {	// 깊은 복사
		this->m_num = num;
		this->ptr = new int;	// 동적할당
		this->ptr = ptr;
		printf("복사생성자 호출 : %d, %p", m_num, ptr);
	}
	CTest(CTest& other) {		// 복사생성자
		this->m_num = other.m_num;
		this->ptr = new int;	// 동적할당 (깊은 복사)
		this->ptr = ptr;
		printf("복사생성자 호출 : %d, %p\n", m_num, ptr);
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
	// 기본자료형
	int a = 10;
	int b(20);
	int c(a);
	printf("%d, %d, %d", a, b, c);
	// 사용자 자료형
	CTest c1(100);	// 인수한개의 생성자 호출
	CTest c2;		// 디폴트 생성자 호출
	CTest c3(c1);	// 복사 생성자 호출
	//CTest c4(50, nullptr);
	c3.getData();

	return 0;
}