// ����3-2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

//���������� �ڵ��� �״��� ������ ���� �ʴ�. �ʹ� ������. �̰����� ������ �߰��ؼ� �׷����ϴ�. �� ����� ����� �����غ���
int main()
{

	int num;//�����Է¹���, �ݺ������� ���� ����
	int x = 0;//�迭�� ���� �κ�
	int y = 0;//�迭�� ���� �κ�
	int i = 0;//x�� y�� ������ ������ ���� 
	int position=1;//1���� �迭�� ������� ���� ����, ���� �����ؼ� num���� ����
	int end;//�� ������ ������ ���� ����, num*num�� ������� ����
	int print;//num���� ����, printf�� ����Ҷ� ���, num���� �߰��� ���ϹǷ� ���� ������ �̷��� ������
	int arr[10][10] = { 0 };//�޸� ���� �Ҵ� malloc�Լ��� ���� �ȹ�����Ƿ� �̷��� �迭�� �̸� 10������ ũ�⸦ ��´�
	                //�� 10������ ũ�⸸ �Է� �����ϴ�.

	printf("���ڸ� �Է��Ͻÿ� :\n");
	scanf_s("%d", &num);//num * num �迭 
	end = num*num;
	print = num;


	while (1)
	{
		for (x = i; x <= num - 1; x++)
		{
			y = i;
			arr[y][x] = position;	
			position++;
		}

		for (y = i + 1; y <= num - 1; y++)
		{
			x = num - 1;
			arr[y][x] = position;
			position++;
		}

		for (x = num - 2; x >= i; x--)
		{
			y = num - 1;
			arr[y][x] = position;
			position++;
		}

		for (y = num - 2; y > i; y--)
		{
			x = i;
			arr[y][x] = position;
			position++;
		}

		num = num - 1;
		i++;
		printf("\n");
		if (position==end+1)
		{
			break;
		}


	}
	///////����Ʈ 
	for (y = 0; y < print; y++)
	{
		for (x = 0; x < print; x++)
		{

			printf("%d ", arr[y][x]);
		}
		printf("\n");

	}



	

    return 0;
}

