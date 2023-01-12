
#include <stdio.h>
#include <string.h>

#pragma warning(disable:4996)
 
int main_7_4()
{

	char ch1;
	char ch2;
	char ch3;
	ch1 = 65;
	ch2 = 67;
	ch3 = 'F';

	char name[100];
	name[0] = 'S';
	name[1] = 'h';
	name[2] = 'a';
	name[3] = 'l';
	name[4] = 'o';
	name[5] = 'm';
	name[6] = 0;
	name[7] = 'A';
	name[8] = 'l';
	
	int s = strlen(name);   // size of string (until 0)

	char bl[100];
	char nl[100];
	gets(bl); // get string from user

	strcpy(nl, bl);
	printf("%s", nl);
	printf("The string %s is %d size", bl, strlen(bl));
	// string - char array
	printf("The string is %s", name);

	strcpy(bl, "Super man");
	strcpy(bl, "Spiderman");



	printf("%c and %c %d", ch1, ch2,ch3);
	getch();
	return 0;
}

