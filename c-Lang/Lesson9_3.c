
#include <stdio.h>
#include <string.h>

#pragma warning(disable:4996)
int isDigit(char digit)
{
	int ret = 0;
	if (digit >= '0' && digit <= '9')
	{
		ret = 1;
	}

	return ret;
}

int main()
{
	char str[3];
	int num;
	gets(str);
	char zeroChar = '0';
	//'47'
	// 12,12,44,44,56,56,7,7,8,9
	if (isDigit(str[0]) && isDigit(str[1]))
	{
		num = str[1] - zeroChar;
		num = (str[0] - zeroChar) * 10 + num;
		str[2] = 0;
		printf("%d", num);
	}
	getch();
	return 0;
}

