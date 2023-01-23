
#include <stdio.h>
#include <string.h>

#pragma warning(disable:4996)
int b;
int ARR_SIZE = 10;


int aaa(int num)
{
	int a = 12;
	return num * num + 12 + b;
}

void bbb(int num)
{
	for (int i = 0; i < 100; i++)
	{
		printf("%d", num * num);
	}	
}

void bubbleSort(int arr[],int size)
{
	int continueToSort = 1;
	int isSorted = 1;
	for (int i = 0; i < size && continueToSort; i++)
	{
		isSorted = 1;

		for (int j = 0; j < size-1-i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				isSorted = 0;
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}

		if (isSorted)
		{
			// exit from function
			// return
			continueToSort = 0;
		}

	}
}


int main()
{
	b = 100;
	
	int arr[] = { 234,2,44,54,12,1,2,3,9 };
	int arrSize = 9;
	bubbleSort(arr,arrSize);

}