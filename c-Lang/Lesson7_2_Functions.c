
#include <stdio.h>
#pragma warning(disable:4996)
int a()
{
	printf("a");
	return 0;
}

int WhatIsTheMaxNum(int num1, int num2)
{
	int ret;

	a();

	if (num1 > num2)
	{
		ret = num1;
	}
	else
	{
		ret = num2;
	}

	return ret;
}


int main()
{
	int a;
	a = WhatIsTheMaxNum(200, 45);
	printf("%d\n", a);
	a = WhatIsTheMaxNum(200, 3000);
	printf("%d\n", a);
	a = WhatIsTheMaxNum(999, 999);
	printf("%d\n", a);

	getch();
	return 0;
}

