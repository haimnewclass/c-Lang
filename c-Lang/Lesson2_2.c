
#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int IdNumer;
	int childsCount;
	scanf("%d", &IdNumer);
	scanf("%d", &childsCount);

	int sum;
	sum = IdNumer + childsCount;
	printf("\n The result is %d", sum);
	getch();

	return 0;
}
