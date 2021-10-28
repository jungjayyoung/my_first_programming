// 도전6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"



void TimeOut(int);

int main()
{
	int second;
	printf("숫자를 입력하시오:");
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
	printf("%d시 %d분 %d초\n", hour, minute, second);
}

