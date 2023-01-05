
#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int a;
	a = 10;
	int b[10];
	// Array

	b[0] = 12;
	b[1] = 30;
	b[2] = 40;
	int c = 8;
	b[c] = 90;
	//b[10] = 89; Error
	scanf("%d", &b[3]);

	c = 0;
	while (c<10)
	{
		printf("%d\n", b[c]);
		c=c+1;
	}



	getch();
	return 0;
}
