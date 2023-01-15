
#include <stdio.h>
#include <string.h>

#pragma warning(disable:4996)


int main9_7()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[] = { 99,100,3,4,500,600,44,55,66,77 };
	int arr1Size = 10;
	int arr2Size = 10;

	for (int i = 0; i < arr1Size; i++)
	{
		for (int j = 0; j < arr2Size; j++)
		{
			if (arr1[i] == arr2[j])
				printf("%d is shared number", arr1[i]);
		}
	}

	getch();
	return 0;
}

