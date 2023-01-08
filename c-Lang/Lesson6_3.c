
#include <stdio.h>
#pragma warning(disable:4996)

int main_6_3()
{
	int arr[100];

	//
	//הגדירו מערך של 100 תאים, בקשו מהמשתמש שיכניס ערך לתא הראשון, שאר המערך אתם תמלאו באופן אוטומטי לפי האלגוריתם הבא: כל תא יהיה שווה למכפלת התא הקודם בתא מספר 0. בסיום הדפיסו את המערך 
	// arr[0] = User by scanf
	// arr[1] = arr[0] * arr[0]
	// arr[2] = arr[1] * arr[0]
	// arr[3] = arr[2] * arr[0]
	// arr[4] = arr[3] * arr[0]
	// arr[5] = arr[4] * arr[0]
	scanf("%d", &arr[0]);
	int i = 1;
	int max = 100;
	while (i<max)
	{
		arr[i] = arr[i - 1] * arr[0];
		i++;
	}
	i = 0;
	while (i < max)
	{
		printf("%d,",arr[i]);
		i++;
	}


	getch();
	return 0;
}
