
#include <stdio.h>
#pragma warning(disable:4996)

int main_6_7()
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
	
	//יש להדפיס את ה המבנה הבא :
		//1111111111
		//2222222222
		//3333333333
		//4444444444
		//5555555555

	for (int i = 1; i <= 5; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			printf("%d", i);
		}
		printf("\n");
	}

	//5. יש להדפיס את המבנה הבא
//		999
	//	777
//		555
	//	333
		// 111

	for (int i = 9; i >= 1; i=i-2)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d", i);
		}
		printf("\n", i);
	}

	getch();
	return 0;
}
