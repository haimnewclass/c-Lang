
#include <stdio.h>
#pragma warning(disable:4996)

int main6_1()
{
	int num1;
	int num2;

	scanf("%d", &num1);
	scanf("%d", &num2);

	// 7>= num >= 2 
	// num1 +1 == num2
	// num1 -1 == num2
	// num2 +1 == num1
	// num2 -1 == num1
	if (num1 + 1 == num2 || num1 - 1 == num2 || num2 + 1 == num1 || num2 - 1 == num1)
	{
		// Follow
	}
	getch();
	return 0;
}
