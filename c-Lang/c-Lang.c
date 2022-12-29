
#include <stdio.h>
#pragma warning(disable:4996)

int main1()
{
	int a;
	int b;
	int c;

	a = 12;
	b = 13;
	c = a + b;

	printf("a is %d\n\n", a);
	printf("b is %d\n", b);
	printf("The result is %d\n", c);
	
	printf("The furmula is %d+%d=%d. Enjoy from life %d. Great %d\n", a,b,c,100,a+b);

	return 0;
}
