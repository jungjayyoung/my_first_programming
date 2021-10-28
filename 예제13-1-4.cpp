// µµÀü13-1-4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int arr[6] = { 1,2,3,4,5,6 };
	int *ptr1 = &arr[0];
	int *ptr2 = &arr[5];
	int i = 0;
	int temp;
	for (i = 0; i < 3; i++)
	{
		temp = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = temp;
		ptr1++;
		ptr2--;


	}
	
	for (i = 0; i < 6; i++)
	{
		printf("%d\n", arr[i]);

	}


    return 0;
}

