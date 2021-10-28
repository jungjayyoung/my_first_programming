// while열혈문제.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	
	int result, num1, num2;
	printf("정수one:");
	scanf_s("%d ", &num1);
	printf("정수two:");
	scanf_s("%d ", &num2);

	result = num1 + num2;
	printf("%d+%d=%d\n", num1, num2, result);

    return 0;
}

