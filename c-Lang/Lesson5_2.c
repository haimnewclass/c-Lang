
#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int a;
	a = 10;
	int b[10];
	// Array

	b[0] = 1;
	b[1] = 2;
	b[2] = 0;
	b[3] = 3;
	b[4] = 0;
	b[5] = 1;
	b[6] = 1;
	b[7] = 100;
	b[8] = 8;
	b[9] = 1;
	int counter = 0;
	while (counter < 10)
	{
		printf("In house number %d has %d cars", counter,&b[counter]);
		counter = counter + 1;
	}

	int c = 8;
	b[c] = 90;
	//b[10] = 89; Error
	scanf("%d", &b[3]);

	 counter = 0;
	while (counter <10)
	{
		scanf("%d", &b[counter]);
		counter = counter +1;
	}



	getch();
	return 0;
}
