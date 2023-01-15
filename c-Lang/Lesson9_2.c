
#include <stdio.h>
#include <string.h>

#pragma warning(disable:4996)

int PrintStr(char str[100],char ch)
{
	int count = 0;
	for (int i = 0; i < strlen(str); i++)
	{
		if (ch == str[i])
			count++;
	}

	return count;
}

int main_9_2()
{
	int a = 90;

	// hoe to define string hard code
	char str1[] = { "123123" };

	gets(str1);
	char ch1 = '1';
	printf("The string %s has %c %d times",str1,ch1, PrintStr(str1, ch1));

	getch();
	return 0;
}

