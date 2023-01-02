
#include <stdio.h>
#pragma warning(disable:4996)

int main3_10()
{
	int num1;
	int num2;

	scanf("%d %d", &num1, &num2);

	int big = num1 > num2;

	if(num1 > num2)
	{
		printf("Num 1 is Greater");

		int g;
		scanf("%d", &g);
	}
	else
	{
		printf("Num 1 is not Greater");
	}

	getch();
	return 0;
}
