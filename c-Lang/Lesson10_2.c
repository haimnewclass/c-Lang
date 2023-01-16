
#include <stdio.h>
#include <string.h>

#pragma warning(disable:4996)

int convertNumToDigitsSum4(int num)
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

int NumberOfDigits(int num)
{
	int tmpNum = num;
	int count = 0;

	if (num == 0)
	{
		return 1;
	}
	// 0
	while (tmpNum > 0) {
		tmpNum = tmpNum / 10;
		count++;
	}

	return count;
	
}

int main()
{
	//כתבו תוכנית שקולטת מספר INT ובונה מערך של תווים מספריים בהתאמה, נניח שנקלט המספר 123 אז יוצר מערך 
	//arr[0]='1'arr[1] = '2'arr[2] = '3 
	
	// 123
	// "123"
	//convertedNum[0] = '1';
	//convertedNum[1] = '2';
	//convertedNum[2] = '3';
	int num;
	
	
	scanf("%d", &num);

	int numOfDigits = NumberOfDigits(num);
	char convertedNum[6];
	convertedNum[numOfDigits] = 0;
	if (num == 0)
	{
		convertedNum[0] = '0';
	}
	int locationInStr = numOfDigits - 1;
	int tmpNum = num;
	int digit;

	while (tmpNum > 0)
	{
		digit = tmpNum % 10;
		convertedNum[locationInStr] = digit + '0';
		tmpNum = tmpNum / 10;
		locationInStr--;
	}

	printf("%s", convertedNum);
	getch();
	return 0;
}

