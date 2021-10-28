// 도전5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


void PrimeNumber(int);

int main()
{
	int num;
	printf("소수를 출력할 갯수를 입력하시오:");
	printf("1이상의 숫자를 입력하시오!!");
	scanf_s("%d", &num);
	PrimeNumber(num);
	
	    return 0;
}


void PrimeNumber(int num)//num은 2이상의 정수이어야한다.
{
	int i = 2;
	int j=1;
	int PN = 0;
	int count=0;

	while (PN < num)
	{
		while (j <= i)
		{
			if (i%j == 0)
			{
				count++;
			}
			
			j++;
		}
		if (count == 2)
		{
			printf("%d\n",i);
			++PN;
		}
		count = 0;
		j = 1;
		++i;
	}

}

