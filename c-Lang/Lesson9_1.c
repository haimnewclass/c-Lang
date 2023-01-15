
#include <stdio.h>
#include <string.h>

#pragma warning(disable:4996)

int main_9_1()
{
	//קלטו מחרוזת מהמשתמש, במחרוזת יש מספרים וכוכביות מצד ימין ומצד שמאל, יש לבנות מחרוזת חדשה נקיה מכוכביות שתכיר רק מספרים  

	// 1**356*9
	// 13569 
	char str[100];
	char newStr[100];

	gets(str);
	int newStrIndex = 0;
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] != '*')
		{
			newStr[newStrIndex] = str[i];
			newStrIndex++;
		}
	}
	newStr[newStrIndex] = 0;

	printf("%s", newStr);

	getch();
	return 0;
}

