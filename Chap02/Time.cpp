#include <stdio.h>

class Time
{
private:
	int hour, min, sec;

public:
	void SetTime(int h, int m, int s) {
		hour = h;
		min = m;
		sec = s;
	}
	void OutTime() {
		printf("현재 시간은 %d:%d:%d입니다.\n", hour, min, sec);
	}
};

class Date
{
private:
	int year, month, day;

public:
	void SetDate(int y, int m, int d) {
		year = y;
		month = m;
		day = d;
	}
	void OutDate() {
		printf("오늘 날짜는 %d.%d.%d입니다.\n", year, month, day);
	}
};

int main()
{
	Time now;
	Date today;

	today.SetDate(2021, 05, 31);
	today.OutDate();

	now.SetTime(12, 30, 40);
	now.OutTime();
}