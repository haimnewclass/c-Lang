
#include <stdio.h>
#include <string.h>

#pragma warning(disable:4996)
int main()
{
	char str[100];

	// input string from user
	gets(str);

	// filename c:\b\newfile.txt
	char fileName[1000];
	char fileName1[1000];
	strcpy(fileName, "c:\\b\\newfile.txt");
	strcpy(fileName1, "c:\\b\\newfile123.txt");

	// Open file
	// w write
	// r reading
	// a append
	FILE* f = fopen(fileName, "w");
	FILE* f1 = fopen(fileName1, "w");

	// Write into file
	fputc('a', f);
	fputc('b', f);
	fputc('a', f);
	fputc('a', f1);

	//Close file
	fclose(f);
	fclose(f1);	
}
