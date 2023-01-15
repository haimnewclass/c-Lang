
#include <stdio.h>
#include <string.h>

#pragma warning(disable:4996)


int main_9_6()
{
	char str[21];
	gets(str);

	int smallCounter = 0;
	int bigCounter = 0;

	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			smallCounter++;
		}

		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			bigCounter++;
		}
	}

	char result[100];
	if (bigCounter == smallCounter)
	{
		strcpy(result, "Equal");
	}
	else
	{
		if (bigCounter > smallCounter)
		{
			strcpy(result, "Big");
		}
		else
		{
			strcpy(result, "Small");
		}
	}
	printf("sure %s",result);

	getch();
	return 0;
}

