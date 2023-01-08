
#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int linesCount;
	scanf("%d", &linesCount);

	// **********
	// **********
	// **********

	for(int currLine = 0;currLine< linesCount;currLine++)
	{
		for (int i = 0; i < 10; i = i + 1)
		{
			printf("*");
		}
		printf("\n");
	}
	
	getch();
	return 0;
}
