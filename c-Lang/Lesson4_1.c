
#include <stdio.h>
#pragma warning(disable:4996)

int kuku()
{
	int num1;
	int num2;

	scanf("%d %d", &num1, &num2);
	// if (num1 > num2)	
	// if (num1 < num2)	
	// if (num1 == num2)	
	// if (num1 <= num2)	
	// if (num1 >= num2)
	// if (num1 != num2)

	if (num1 > num2)	
		printf("Num1 is big");
	else
		printf("Num1 is not big");
	
	 
	if (num1 > num2)
	{
		printf("Num1 is big");
		int g = 0;
		scanf("%d", g);
		printf("%d",12 + 45);		
	}
	else
		printf("Num1 is not big");


	if (num1 > num2)
		printf("Num1 is not big");
	else
	{
		printf("Num1 is big");
		int g = 0;
		scanf("%d", g);
		printf("%d", 12 + 45);
	}
	
	if (num1 > num2)
		printf("Num1 is not big");




	 
	getch();
	return 0;
}
