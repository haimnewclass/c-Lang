﻿
#include <stdio.h>
#pragma warning(disable:4996)

int main_6_2()
{
	int num;
	int arr[10];
	int i = 0;
	int max = 10;
	while (i<max)
	{
		// &arr[i] = &num
		scanf("%d", &arr[i]);
		i = i + 1;
	}

	//הגדירו מערך של 10 בקשו מהמשתמש להכניס מספרים והדפיסו את הצמדים של 0+9 1+8 2+7 וכך הלאה 
	// 0-9
	// 1-8
	// 2-7
	// 3-6
	// 4-5
	i = 0;
	int x = max-1;
	while (i < max/2)
	{		
		printf("%d+%d=%d\n", arr[i],arr[x], arr[i]+arr[x]);
		i = i + 1;
		x = x - 1;
	}
	//
	//הגדירו מערך של 100 תאים, בקשו מהמשתמש שיכניס ערך לתא הראשון, שאר המערך אתם תמלאו באופן אוטומטי לפי האלגוריתם הבא: כל תא יהיה שווה למכפלת התא הקודם בתא מספר 0. בסיום הדפיסו את המערך 




	getch();
	return 0;
}
