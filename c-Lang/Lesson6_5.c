
#include <stdio.h>
#pragma warning(disable:4996)

int main_6_5()
{
	int from;
	int to;
	scanf("%d %d", &from, &to);

	for (int i = from; i <= to; i++)
	{
		printf("%d\n", i);
	}

	int jump;
	scanf("%d", &jump);
	for (int i = 1; i <= 100; i=i+jump)
	{
		printf("%d\n", i);
	}

	int lowLimit;
	scanf("%d", &lowLimit);
	for (int i = 100; i >=lowLimit; i = i-1)
	{
		printf("%d\n", i);
	}



	getch();
	return 0;
}
