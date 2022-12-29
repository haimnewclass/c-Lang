
#include <stdio.h>
#pragma warning(disable:4996)

int main4()
{
	// c = a + b
	// c = a - b;
	// c = a * b;
	// c = a / b;
	// bla bla bla Remark

	int width;
	int height;

	// print message for user
	printf("Please enter width\n");
	scanf("%d", &width);
	printf("Please enter height\n");
	scanf("%d", &height);
	int area = width * height;
	int roundArea = (height * 2) + (width * 2);

	printf("Area %d.  RoundArea %d.", area, roundArea);


	getch();


	return 0;
}
