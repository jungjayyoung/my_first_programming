// ��������7-2-1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int num=1;
	int input;//�Է°�
	int sum=0;
	printf("���ڸ� �Է��Ͻÿ�: \n");
	

	
	while (num <= 5)//���� 5��
	{
		printf("%d��° ���� �Է�",num);
		scanf_s("%d", &input);//�����Է�
		
		while (input >= 1 )
		{
			++num;
			sum += input;
			break;
			
		}
		if(input<=0)
		printf(" 1�̻��� ���ڸ� �Է��Ͻÿ�\n");
		
	}

	printf("�Է¹��� ������ ����: %d\n",sum);


    return 0;
}

