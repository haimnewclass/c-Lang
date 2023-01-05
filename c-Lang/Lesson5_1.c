
#include <stdio.h>
#pragma warning(disable:4996)

int main_5_1()
{
  // הדפיסו את רצף המספרים בין 1 ל 20 ורק את המספרים הזוגיים 

	int counter = 1;
	int max = 30;



	while (counter<=max)
	{
		if (counter % 2 == 1)
		{
			printf("%d \n", counter);
		}
		counter = counter + 1;
	}


	// קלטו מהמשתמש מספר והדפיסו את רצף המספרים בן 1 ל מספר שהוא ביקש 

	int num;
	scanf("%d" ,& num);
	counter = 1;
	while (counter<=num)
	{
		printf("%d", counter);
		counter = counter + 1;
	}

	// קלטו מהמשתמש 10 מספרים והדפיסו את ממוצע המספרים 

	counter = 1;
	max = 10;
	int sum = 0 ;
	while (counter<=max)
	{
		scanf("%d", &num);
		sum = sum + num;
		counter = counter + 1;
	}

	printf("%d", sum / max);


	// קלטו מהמשתמש 10 מספרים והדפיסו את המספר הגדול שנקלט עד כה 
	int c = 1;
	max = 10;
	int big = 0;
	while (c <= max)
	{
		scanf("%d", &num);
		if (num > big)
		{
			big = num;
		}
		c++;  // c = c + 1; // 		
	}
	
	printf("%d", big);


	// קלטו מהמשתמש מספרים עד שהוא מכניס את המספר 0 ואז צאו מהלולאה, לאחר שיוצאים מהלולאה יש להדפיס את סכום המספרים המצטבר 
	scanf("%d", &num);
	sum = 0;
	while (num !=0)
	{
		scanf("%d", &num);
		
		sum = sum + num; 
	}
	printf("%d", sum);
	getch();
	return 0;
}
