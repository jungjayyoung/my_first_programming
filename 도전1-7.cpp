// ����7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"




//k�� 1���� ���ڸ� �������Ѽ� 2�� ��� ���غ��� n���� �۰ų� ���������� �ݺ��ϸ� �ȴ�.



int multiply(int);

int main()
{
	int n;
	int k=1;
	printf("2^k<=n �� �����ϴ� k�� �ִ���?\n ");
	printf("����n��  �Է�:  ");
	scanf_s("%d", &n);


	while (multiply(k) <= n)
	{
		
		printf("%d\n", multiply(k));
		
		++k;

	}
	printf("2^%d= %d <= %d\n", k - 1, multiply(k-1), n);
	printf("k�� �ִ��� %d�̴�\n", k-1);


    return 0;
}

int multiply(int num)
{
	
	if (num == 1)
		return 2;
	else
	return 2 * multiply(num - 1);
}

