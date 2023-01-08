
#include <stdio.h>
#pragma warning(disable:4996)

int main()
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
	for (int i = 0; i < 100; i=i+jump)
	{
		printf("%d\n", i);
	}



	getch();
	return 0;
}
