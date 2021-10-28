// 도전3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


void GCD(int, int);


int main()
{

	int num1, num2;
	printf("최대공약수를 구할 두개의 정수를 입력하시오 \n");
	printf("첫번째 정수 :\n");
		scanf_s("%d", &num1);
		printf("두번째 정수 :\n");
		scanf_s("%d", &num2);
		GCD(num1, num2);

    return 0;
}

void GCD(int a, int b)
{
	int i = 1;
	int temp;//최대공약수를 저장할 변수를 만든다
	while (i <= a && i <=b)
	{
		
		
		if (a % i == 0 && b % i == 0)
		{
			printf("%d\n", i);
			temp = i;
		}
		i++;
	}
	printf("최대공약수는 %d이다",temp);


}