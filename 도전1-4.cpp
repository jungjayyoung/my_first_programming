// ����4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"








int main()
{
	
	int i, j, k;//i�� ũ��,j�� �����,k�� �ݶ� �������
	int total=3500;
	for (i = 1; 500 * i < total; i++)
	{
		for (j = 1; 700 * j <=  total - (500 * i); j++)
		{
			
			for (k = 1; 400 * k <= total-(500*i)-(700*j); k++)
			{
				if (total==(500*i)+(700*j)+(400*k))
				{
					printf("ũ���� %d��, ����� %d��, �ݶ� %d��\n", i, j, k);
				}


			}

		}


	}
	printf("��� �����Ͻðڽ��ϱ�?\n");
	
    return 0;
}

