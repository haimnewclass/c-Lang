
#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	 
	int arr[5];
	int idx = 0;
	int max = 5;

	while (idx < max)
	{
		scanf("%d", &arr[idx]);
		idx = idx + 1;
	}	
	idx = 4;
	while (idx >= 0)
	{
		printf("%d\n", arr[idx]);
		idx = idx - 1;
	}






	 

	getch();
	return 0;
}
