
#include <stdio.h>
#include <string.h>

#pragma warning(disable:4996)

int main()
{
	char str[10000],str1[10000],str2[10000];
	/*
	gets(str1);
	gets(str2);


	if (strcmp(str1, str2) == 0)
	{
		printf("EQUAL");
	}


	printf("%s", (strcmp(str1, str2) == 0) ? ("EQUAL") : (""));
	*/

	char bigStr[500];
	char smallStr[90];

	bigStr[0] = 0;
	for (int i = 0; i < 5; i++)
	{
		gets(smallStr);
		strcat(bigStr, smallStr);
		int len = strlen(bigStr);
		/*
		if (i < 4)
			bigStr[len] = ',';
		else
			bigStr[len] = '.';
		*/
		bigStr[len] = (i == 4) ? '.' : ',';

		bigStr[len + 1] = 0;
	}


	 //קלטו מהמשתמש מחרוזת והדפיסו כמה אותיות A יש במחרוזת הזו 
		
	gets(str);
	int counter = 0;
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] == 'A')
		{
			counter++;
		}
	}

	printf("The string: %s has %d A ", str, counter);

	getch();
	return 0;
}

