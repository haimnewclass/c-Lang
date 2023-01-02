
#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int num1;
	int num2;

	scanf("%d %d", &num1, &num2);
 
	// And &&
	// True && True -> True
	// True && Fasle -> False
	// False && True -> False
	// False && False-> False
	// 
	// 
	// Or  ||
	// True || True -> True
	// True || False-> True
	// False || True -> True
	// False || False -> False

	// Not !
	// !False -> True
	// !True -> False
	// 
	// num1=10
	//num2 = 200
		
	int g = (2 + 5) * 3;
	if ((num1 > num2) && (num2==20))
	{
		printf("OK");
	}

	getch();
	return 0;
}
