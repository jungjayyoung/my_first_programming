// ����8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"




int Two(int);

int main()
{

	int num;
	printf("2^n�� ���غ���\n");
	printf("n���� �Է� :\n");
	scanf_s("%d", &num);
	printf("%d\n", Two(num));

    return 0;
}


int Two(int num)
{
	

	if (num == 1)
		return 2;
	else
		return 2 * Two(num - 1);
}