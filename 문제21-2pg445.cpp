// ����21-2pg445.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string.h"
#include "stdlib.h"


//pg446 ���� 21-2 ����3

int GetSpaceidx(char str[])
{
	int i, len;
	len = strlen(str);//�̸��� ����
	for (i = 0; i < len; i++)
	{

		if (str[i] == ' ')//����(�����̽���)
		{
			return i;//�̸��� ���� �ݳ�.
		}
	}
			return -1;//������ �������� ������� �ݳ�.������ ����

}

int CompName(char str1[],char str2[])
{
	int idx1 = GetSpaceidx(str1);//�̸��� ����
	int idx2 = GetSpaceidx(str2);//�̸��� ����

	if (idx1 != idx2)//���� ��
	{
		return 0;//���̰� �ٸ��� ���� �ٸ� �̸�,,, 0�� ������ �ǹ�.
	}
	else
		return !strncmp(str1, str2, idx1);//������ 0�� �ƴ� ���� ��, ��.
}

int CompAge(char str1[], char str2[])
{
	int idx1 = GetSpaceidx(str1);//�̸��� ����
	int idx2 = GetSpaceidx(str2);//�̸��� ����
	int age1,age2;

	age1 = atoi(&str1[idx1 + 1]);//���̰� ����� ��ġ
	age2 = atoi(&str2[idx2 + 1]);//���̰� ����� ��ġ

	if (age1 == age2)
	{
		return 1;//��
	}
	else
		return 0;//����
}

int main()
{
	char str1[20];
	char str2[20];
	printf("ù��° ������ �Է� �̸�(�����̽�)����: ");
	fgets(str1, sizeof(str1), stdin);
	str1[strlen(str1) - 1] = 0;

	printf("�ι�° ������ �Է� �̸�(�����̽�)����: ");
	fgets(str2, sizeof(str2), stdin);
	str2[strlen(str2) - 1] = 0;

	if (CompName(str1, str2))
	{
		puts("�̸��� �����մϴ�");
	}
	else
		puts("�̸��� �������� �ʽ��ϴ�");

	if (CompAge(str1, str2))
	{
		puts("���̰� �����մϴ�");
	}
	else
		puts("���̰� �������� �ʽ��ϴ�");

	return 0;
}

//pg445 ���� 21-2 ����2

//int main()
//{
//	char str1[20];
//	char str2[20];
//	char str3[40];
//
//	fgets(str1, sizeof(str1), stdin);
//	str1[strlen(str1) - 1] = 0;
//	fgets(str2, sizeof(str2), stdin);
//	str2[strlen(str2) - 1] = 0;
//	
//	strncpy_s(str3, str1,sizeof(str3));//str1�� ����.strncpy�� ���ڿ��� ���� �ڵ����� �ι��ڸ� �ٿ������ʴ´�.
//	strncat_s(str3, str2, 20);//str3�ڿ� str2�� ���δ�.strcat�� ���ڿ��� ���� �ڵ����� �ι��ڸ� �ٿ��ش�.
//	
//	puts(str3);
//
//	return 0;
//}



//pg445 ���� 21-2 ����1 


//int AddNumber(char str[])
//{
//	int i=0;
//	int sum = 0;
//	int len = strlen(str);//���ڿ��� ���� len
//	for (i = 0; i < len; i++)
//	{
//		if (str[i] > 47 && str[i] < 58)//
//		{
//			sum += str[i]-48;
//
//		}
//
//	}
//
//	return sum;
//}
//
//int main()
//{
//
//	char str[100];
//	int sum = 0;
//	printf("���ڿ��� �Է��Ͻÿ�\n");
//	
//	fgets(str, sizeof(str), stdin);
//
//	sum = AddNumber(str);
//
//	printf("������ ���� :  %d\n",sum);
//
//    return 0;
//}

