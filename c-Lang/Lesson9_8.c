
#include <stdio.h>
#include <string.h>

#pragma warning(disable:4996)

int convertNumToDigitsSum(int num)
{		
	// 23 -> 5
	// 12 - > 3
	// 123 -> 6
	// 100 -> 1
	// 9 -> 9
	int ret = 0;

	int tmpNum = num;
	while (tmpNum > 0)
	{
		int oneDigit = tmpNum % 10;
		ret = ret + oneDigit;
		tmpNum = tmpNum / 10;
	}

	return ret;
}

int main_9_8()
{
	convertNumToDigitsSum(23);
	
	int arr[] = { 123,55,33,333,7,88,9,44,54,66666 };
	int biggets = 0;
	int bigNum = 0;
	for (int i = 0; i < 10; i++)
	{
		int sum = convertNumToDigitsSum(arr[i]);
		if (sum > biggets)
		{
			biggets = sum;
			bigNum = arr[i];
		}

	}

	printf("%d is the Biggest sum", bigNum);
	getch();
	return 0;

	//12, -8, -5, -3, 0, 1, 7, 8, 17, 23]

	// 4,-1,-1
	// 1,2,4
}

