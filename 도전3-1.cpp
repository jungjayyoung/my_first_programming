// ����3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


void GCD(int, int);


int main()
{

	int num1, num2;
	printf("�ִ������� ���� �ΰ��� ������ �Է��Ͻÿ� \n");
	printf("ù��° ���� :\n");
		scanf_s("%d", &num1);
		printf("�ι�° ���� :\n");
		scanf_s("%d", &num2);
		GCD(num1, num2);

    return 0;
}

void GCD(int a, int b)
{
	int i = 1;
	int temp;//�ִ������� ������ ������ �����
	while (i <= a && i <=b)
	{
		
		
		if (a % i == 0 && b % i == 0)
		{
			printf("%d\n", i);
			temp = i;
		}
		i++;
	}
	printf("�ִ������� %d�̴�",temp);


}