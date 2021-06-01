#include <stdio.h>

class Some
{
public:
	const int total;
	Some(int atotal) : total(atotal) {}
	void OutTotal() { printf("%d\n", total); }
};

int main()
{
	Some S(5);
	S.OutTotal();
}