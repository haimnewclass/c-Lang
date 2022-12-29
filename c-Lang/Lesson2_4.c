
#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	printf("Please enter the house area\n");

	int area;
	scanf("%d", &area);


	printf("Please enter the region code (between 1 - 10)\n");
	int code;
	scanf("%d", &code);

	int sum;

	sum = (10000 * area) - (20000 * code);

	printf("The price is %d", sum);

	getch();


	return 0;
}
