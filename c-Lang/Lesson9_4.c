
#include <stdio.h>
#include <string.h>

#pragma warning(disable:4996)
 

int main()
{
	int data[10] = {3,3,66,66,7,7,89,89,3,3};
	
	// input from user
	/*
	for (int i = 0; i < 10; i++)
	{
		int num;
		scanf("%d", &num);
		data[i] = num;
	}
	*/
	// check the pair
	// data[0] and data[1]
	// data[2] and data[3]
	// data[4] and data[5]
	// data[6] and data[7]
	// data[8] and data[9]
	int valid = 1;
	// is array is contained only pairs
	for (int i = 0; i < 10; i=i+2)
	{				
		if (data[i] != data[i + 1])
			valid = 0;
	}

	int pair[5];
	int idx = 0;
	//int data[10] = {3,3,66,66,7,7,89,89,3,3};
	// 

	if (valid)
	{
		for (int i = 0; i < 10; i = i + 2)
		{
			for (int j = 0; j < idx; j++)
			{
				if (pair[j] == data[i])
				{
					valid = 0;
				}				 							 
			}
			pair[idx] = data[i];
			idx++;
		}
	}

	getch();
	return 0;
}

