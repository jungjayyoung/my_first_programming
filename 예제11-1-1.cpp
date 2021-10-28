// 문제11-1-1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int num[5];
	int sum = 0;
	int max, min;
	printf("숫자5개를 입력하시오:\n");
	
	for (int j = 0; j < 5; j++)
	{
		scanf_s("%d", &num[j]);
		sum += num[j];
		
	}
	max = min = num[0];
	for (int i = 1; i < 5; i++)
	{
		if (max <= num[i])
			max = num[i];
		if (min >= num[i])
			min = num[i];

	}
	printf("총합은 %d\n", sum);
	printf("최댓값은 %d\n", max);
	printf("최솟값은 %d\n", min);

    return 0;
}


