// ����6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"



void TimeOut(int);

int main()
{
	int second;
	printf("���ڸ� �Է��Ͻÿ�:");
	scanf_s("%d", &second);
	TimeOut(second);


    return 0;
}



void TimeOut(int number)
{
	int hour, minute,second;

	hour = number / 3600;
	minute = (number % 3600) / 60;
	second = (number % 3600) % 60;

	printf("h:%d m:%d s:%d\n", hour, minute, second);
	printf("%d�� %d�� %d��\n", hour, minute, second);
}

