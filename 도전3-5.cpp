// ����3-5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "time.h"
#include "stdlib.h"

int main()
{

	srand(time(NULL));
	int choice;
	int win=0;
	int tie=0;
		while (1)
		{
			printf("������ 1, ������ 2, ���� 3: \n");
			scanf_s("%d", &choice, sizeof(choice));

			if (choice == 1)
			{
				printf("����� ���� ����,");
			}

			if (choice == 2)
			{
				printf("����� ���� ����,");
			}

			if (choice == 3)
			{
				printf("����� �� ����,");
			}
			////////////////////////////////////////////////////
			int choice2 = rand() % 3 + 1;

			if (choice2 == 1)
			{
				printf("��ǻ�ʹ� ���� ����,");
			}

			if (choice2 == 2)
			{
				printf("��ǻ�ʹ� ���� ����,");
			}

			if (choice2 == 3)
			{
				printf("��ǻ�ʹ� �� ����,");
			}
			/////////////////////////////////////////  ���
			if (choice == choice2)
			{
				printf("�����ϴ�!\n");
				tie++;
			}

			if (choice2 - 1 == choice || choice - 2 == choice2)//����1,2 �϶�||���� 3�϶�
			{
				printf("�̰���ϴ�!\n");
				win++;
			}

			if (choice - 1 == choice2 || choice2 - 2 == choice)//����1,2 �϶�||���� 3�϶�
			{
				printf("�����ϴ�!\n");
				break;
			}

		}
		printf("\n\n");
		printf("������ ��� : %d��, %d��\n", win, tie);


    return 0;
}

