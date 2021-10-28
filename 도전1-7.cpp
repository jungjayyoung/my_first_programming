// 도전7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"




//k에 1부터 숫자를 증가시켜서 2를 계속 곱해보자 n보다 작거나 같을때까지 반복하면 된다.



int multiply(int);

int main()
{
	int n;
	int k=1;
	printf("2^k<=n 을 만족하는 k의 최댓값은?\n ");
	printf("숫자n을  입력:  ");
	scanf_s("%d", &n);


	while (multiply(k) <= n)
	{
		
		printf("%d\n", multiply(k));
		
		++k;

	}
	printf("2^%d= %d <= %d\n", k - 1, multiply(k-1), n);
	printf("k의 최댓값은 %d이다\n", k-1);


    return 0;
}

int multiply(int num)
{
	
	if (num == 1)
		return 2;
	else
	return 2 * multiply(num - 1);
}

