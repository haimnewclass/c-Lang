
#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int a;
	int b;
	int c;
	a = 10;
	b = 5;

	c = a + b;
	// > < ==
	c = a > b;
	c = a < b;

	a = 5;
	c = a == b;


	getch();
	return 0;
}
