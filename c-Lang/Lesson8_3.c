
#include <stdio.h>
#include <string.h>

#pragma warning(disable:4996)

int main_8_3()
{
	char tblToReplace[4];
	tblToReplace[0] = '!';
	tblToReplace[1] = '@';
	tblToReplace[2] = '#';
	tblToReplace[3] = '$';

	char tbl[4];
	tbl[0] = 'A';
	tbl[1] = 'B';
	tbl[2] = 'C';
	tbl[3] = 'D';

	char str[100];
	gets(str);

	for (int i = 0; i < strlen(str); i++)
	{		
		for (int y = 0; y < strlen(tbl); y++)
		{
			if (str[i] == tbl[y])
				str[i] = tblToReplace[y];
		}
	}

	getch();
	return 0;
}

