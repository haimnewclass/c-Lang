
#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	// 123123123123123 
	for (int y = 1; y <= 5; y++)
	{
		//123
		for (int i = 1; i <= 3; i++)
		{
			printf("%d", i);
		}
	}
	getch();
	return 0;
}
