// ����5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


void PrimeNumber(int);

int main()
{
	int num;
	printf("�Ҽ��� ����� ������ �Է��Ͻÿ�:");
	printf("1�̻��� ���ڸ� �Է��Ͻÿ�!!");
	scanf_s("%d", &num);
	PrimeNumber(num);
	
	    return 0;
}


void PrimeNumber(int num)//num�� 2�̻��� �����̾���Ѵ�.
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

