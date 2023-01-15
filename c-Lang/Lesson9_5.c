
#include <stdio.h>
#include <string.h>

#pragma warning(disable:4996)


int main_9_5()
{
	char str[11];
	gets(str);
	int valid = 0;
	for (int i = 0; i < strlen(str)-2; i++)
	{
		if (str[i] == 'A' && str[i + 1] == 'B' && str[i + 2] == 'C')
		{
			valid = 1;
		}
	}
	getch();
	return 0;
}

