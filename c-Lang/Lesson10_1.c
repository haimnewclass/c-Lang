
#include <stdio.h>
#include <string.h>

#pragma warning(disable:4996)

int convertNumToDigitsSum2(int num)
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

int  getArr(int arr[10],int par1)
{
	arr[0] = 123;
	arr[1] = 543;
	par1 = 123;
	return 0;
}

int main_10_1()
{

	int arr2[10];
	arr2[0] = 100;
	int a = 100;
	getArr(arr2,a);
	getch();
	return 0;	 
}

