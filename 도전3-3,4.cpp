// ����3-3,4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"
#include "time.h"

int main()
{

	//srand(time(NULL));//srand�� ���ڷ� �ð��� ��������� ��ǻ���� ���� �ð��� ���尪���� ����� �� �ִ�
	////��ǻ���� �ð��� ��� ���ϱ� ������ �Ź� �ٸ� ���� ���� ���ͼ� �Ź� �ٸ� ���� ��ȯ�Ѵ�.
	//int i,seed;
	//printf("���� �� �Է�:");
	//scanf_s("%d", &seed);
	//

	//
	//for (i = 0; i < 5; i++)
	//	printf("�������:%d \n", rand()%99);

	srand(time(NULL));

	int dice1;
	int dice2;

	dice1 = rand() % 6+1;
	dice2 = rand() % 6+1;


	printf("�ֻ���1�� ��� %d\n",dice1);
	printf("�ֻ���2�� ��� %d\n", dice2);


    return 0;
}

