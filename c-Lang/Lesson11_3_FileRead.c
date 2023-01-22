
#include <stdio.h>
#include <string.h>

#pragma warning(disable:4996)
int main()
{
	char str[100];
	 
	// filename c:\b\newfile.txt
	char fileName[1000];
	strcpy(fileName, "c:\\b\\newfile.txt");
	
	FILE* f = fopen(fileName, "r");
	char ch = fgetc(f);
	while (ch != EOF)
	{
		printf("%c", ch);
		ch = fgetc(f);
	}

	fclose(f);
}