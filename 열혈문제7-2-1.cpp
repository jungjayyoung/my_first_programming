// 열혈문제7-2-1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int num=1;
	int input;//입력값
	int sum=0;
	printf("숫자를 입력하시오: \n");
	

	
	while (num <= 5)//정수 5개
	{
		printf("%d번째 정수 입력",num);
		scanf_s("%d", &input);//정수입력
		
		while (input >= 1 )
		{
			++num;
			sum += input;
			break;
			
		}
		if(input<=0)
		printf(" 1이상의 숫자를 입력하시오\n");
		
	}

	printf("입력받은 정수의 총합: %d\n",sum);


    return 0;
}

