// ����2-1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"




//����2-5
//�������� �˰���
/*
int main()
{
	int arr[7];
	int i,j,k;
	int temp;
	printf("���� 7���� �Է��϶�\n");

	for (k = 0; k < 7; k++)
	{

		scanf_s("%d", &arr[k]);

	}


	for (j = 6; j > 0; j--)
	{
		for (i = 0; i < j; i++)
		{

			if (arr[i] < arr[i + 1])
			{
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}

		}
	}

	for (j = 0; j < 7; j++)
	{
		printf("%d\n", arr[j]);
	}

	return 0;
}
*/

//����2-4
/*
int main()
{
	char str[100];
	int len=0;
	int i=0;
	scanf_s("%s", str, sizeof(str));
	
	while (str[len] != 0)
	{
		len++;
	}
	printf("�ܾ��� ���� :%d\n", len);//str[0]�� ù��° ����, str[len-1]�� ����������, len�� ���ڱ���

	
	while (i != len / 2)
	{
		if( str[len - (1 + i)] == str[i])
		{
			
			i++;
		}
		else
		{
			printf("ȸ���� �ƴմϴ�\n");
			return 0;
		}

		
	}
	printf("ȸ���Դϴ�\n");


	return 0;
}

*/


//���� 2-3        RRRRRRRRREEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE
/*
int main()
{
	int arr[10];
	int arr2[10];
	int i;
	int j = 0;
	printf("���ڸ��Է��Ͻÿ�\n");
	
	for (i = 0; i < 10; i++)//���� 10�� �迭�� �Է�
	{
		scanf_s("%d", &arr[i]);
	}
	printf("����\n");

	i = 0;
	
		for (int k = 0; k < 10; k++)
		{
			if (arr[k] % 2 == 0)//¦���̸� arr[10],arr[9],arr[8]...������ �Էµȴ�
			{
				arr2[9 - i] = arr[k];
				i++;
			}
			else//Ȧ���̸� arr[0],arr[1],arr[2]...������ �Էµȴ�
			{

				arr2[j] = arr[k];
				j++;
				
			}
		}

	
	for (j = 0; j < 10; j++)
	{
		printf("%d\n", arr2[j]);
	}
}
*/


//���� 2-2
/*
int main()
{

	int num;
	int arr[100];
	int i = 0;
	scanf_s("%d", &num);

	
	while (num > 0)
	{
		i++;
		if (num % 2 == 0)
		{
			
			arr[i] = 0;
		}
		else
		{
			
			arr[i] = 1;
		}
		
		num = num / 2;
		
	}
	
	printf("\n");
	for (i; i > 0; i--)
	{
		printf("%d", arr[i]);

	}


	return 0;
}
*/



/////���� 2-1
/*
void PrintZzak(int num)//¦���� �ݳ�
{
	if (num % 2 == 0)
		printf("%d\n", num);
	


}


void PrintHol(int num)//Ȧ���� �ݳ�
{
	if (num % 2 == 1)
		printf("%d\n", num);
}


int main()
{

	int arr[10];
	int i;
	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", &arr[i]);
		
	}


	printf("Ȧ��\n");
	for (i = 0; i < 10; i++)
	{
		PrintHol(arr[i]);

	}
	printf("\n");
	printf("¦��\n");
	for (i = 0; i < 10; i++)
	{
		PrintZzak(arr[i]);

	}

    return 0;
}

*/