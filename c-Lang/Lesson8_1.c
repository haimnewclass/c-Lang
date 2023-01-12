
#include <stdio.h>
#include <string.h>

#pragma warning(disable:4996)

int main()
{
	char str[100];
	str[0] = 'A';
	str[1] = 65;
	str[1] = 'C';
	str[1] = str[1] + 1;

	str[20] = 0;
	for (char i = 0; i < 20; i++)
	{
		char ch = 65 + i;		
		str[i] = ch;
		
		printf("%s\n", str);
	}
	
	// 
	int a, b, c;
	a = 20;
	b = 30;

	if (a > b)
	{
		c = a+1;
	}
	else
	{
		c = b-1;
	}

	c = (a > b) ? (a+1) : (b-1);

	char str1[100];
	sprintf(str1, "the result of %d is %c  and string: %s", c, str[0], str);

	strcpy(str, "ABA");
	strcpy(str1, "IMA");
	str[3] = '-';
	str[4] = 0;
	strcpy(str+strlen(str)/2, str1);

	strcat(str, str1);
	strcpy(str, "AAAA");
	strcpy(str1, "BBBB");
	strncpy(str+1, str1+2, 2);

	
	// returns 0 when EQUAL
	// 1 or -1 when not equal
	a = strcmp("ABCD", "ABCD");

	getch();
	return 0;
}

