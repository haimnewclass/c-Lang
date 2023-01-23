
#include <stdio.h>
#include <string.h>

#pragma warning(disable:4996)
int ARRAY_SIZE = 10;

int changeArr(int arr[])
{
	return 0;
}

void PrintArr(int arr[])
{
	printf("Array size %d", ARRAY_SIZE);
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		printf(" Cell %d => %d \n ", i, arr[i]);
	}
}


void InputArr(int arr[])
{	
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		int num;
		scanf("%d", &num);
		arr[i] = num;
	}
}


void ShiftLeft(int arr[], int positions)
{
	//22,3,7,45,9,1,2,44,5,2
	//22,3,7,45,9,1,2,44,2,5
	//22,3,7,45,9,1,2,2,44,5
	//22,3,7,45,9,1,2,2,44,5
	//22,3,7,45,9,2,1,2,44,5

	for (int i = 1; i <= positions; i++)
	{
		int tmp = arr[ARRAY_SIZE-i];
		arr[ARRAY_SIZE - i] = arr[ARRAY_SIZE - i - 1];
		arr[ARRAY_SIZE - i - 1] = tmp;
	}
}

void ShiftRight(int arr[], int positions)
{
	//22,3,7,45,9,1,2,44,5,2
	//3,22,7,45,9,1,2,44,5,2
	//3,7,22,45,9,1,2,44,5,2
	//3,7,45,22,9,1,2,44,5,2
	//22,3,7,45,9,1,2,44,5,2
	for (int i = 0; i < positions; i++)
	{
		int tmp = arr[i + 1];
		arr[i + 1] = arr[i];
		arr[i] = tmp;
	}
}

int RightDigit(int num)
{
	return num % 10;
}

int main_11_1()
{
	int arr1[10] = {23,3,44,5,6,34,6,22,3,777};
	
	int num;

	//InputArr(arr1);

	scanf("%d", &num);
	while (num!=0)
	{
		if (num == 1)
		{
			// print array
			PrintArr(arr1);
		}
		else if (num >= 2 && num <= 8)
		{
			// shift num to right
			ShiftRight(arr1, num);
		}
		else if (num >= 10)
		{
			int digit = RightDigit(num);
			if(digit >0)
				ShiftLeft(arr1, digit);
		}

		printf("Enter new Number \n");

		scanf("%d", &num);

	}

	return 0;
}