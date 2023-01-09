
#include <stdio.h>
#pragma warning(disable:4996)

int printStartsRectangle(int height, int width)
{
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			printf("*");
		}		
		printf("\n");
	}
	return 0;
}

int IsZugi(int num)
{
	int ret;
	if (num % 2 == 0)
	{
		ret = 1;
	}
	else
	{
		ret = 0;
	}

	return ret;
}
int main()
{

	printStartsRectangle(10, 30);

	printStartsRectangle(10, 100);

	int a;
	a = IsZugi(32);
	a = IsZugi(31);
	printf("%d", IsZugi(33));
	getch();
	return 0;
}

