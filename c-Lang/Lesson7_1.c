
#include <stdio.h>
#pragma warning(disable:4996)

int main7_2()
{

	// 8. יש להדפיס את לוח הכפל של 10X10

	int max = 10;
	scanf("%d", &max);

	for (int i = 1; i <= max; i++)
	{
		for (int j = 1; j <= max; j++)
		{
			printf("%d ", j * i);
		}

		printf("\n");
	}

	getch();
	return 0;

//	7. יש להדפיס את המבנה הבא :

//		*			line 1 1
//		**			line 2 2
//		***			line 3 3
//		****
//		*****


	for (int i = 1; i <= 5; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf("*");
		}		
		printf("\n");
	}


	



		//6. יש להדפיס את המבנה הבא :


		//==========
		//++++++++++
		//==========
		//++++++++++
		//==========
		//++++++++++
		//==========
		//++++++++++

	for (int i = 0; i < 8; i++)
	{
		if (i % 2 == 0)
		{
			// Zugi . Draw =
			for (int j = 0; j < 10; j++)
			{
				printf("=");
			}
		}
		else
		{
			// Ei-Zugi. Draw +
			for (int j = 0; j < 10; j++)
			{
				printf("+");
			}
		}
		
		
		printf("\n");
	}

	getch();
	return 0;
}
