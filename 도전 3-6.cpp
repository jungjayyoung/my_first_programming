// ���� 3-6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"
#include "time.h"

int main()
{
	srand(time(NULL));
	int i;
	int quiz[3];
	for (i = 0; i < 3; i++)//�������� ���� 3�� ����
	{
		quiz[i] = rand() % 10;
	}
	
	
	int answer1;//ù��° ��
	int answer2;//�ι�° ��
	int answer3;//����° ��
	int strike = 0;//��Ʈ����ũ
	int ball = 0;//��
	int restart = 0;

	printf("Start Game!\n\n");
	
	while (1)//���⶧����
	{

		printf("3���� ���ڸ� ����(���ڴ� 0~9���� ��� ����): ");
		scanf_s("%d%d%d", &answer1, &answer2, &answer3);
		


		///////////////////ù��°
			if (quiz[0] == answer1)
			{
				strike++;
			}
			else if (quiz[0] == answer2|| quiz[0] == answer3)
			{
				ball++;
			}
		///////////////////�ι���
			if (quiz[1] == answer2)
			{
				strike++;
			}
			else if (quiz[1] == answer1 || quiz[1] == answer3)
			{
				ball++;
			}
		/////////////////////����°
			if (quiz[2] == answer3)
			{
				strike++;
			}
			else if (quiz[2] == answer1 || quiz[2] == answer2)
			{
				ball++;
			}

			printf("%d��° �������: %dstrike, %dball!!!\n", ++restart, strike, ball);
			
			if (strike == 3)//���߸� Ż��
			{
				break;
			}
			
			strike = 0;
			ball = 0;

			

	}
	printf("YOU WIN!!!\n");
	
	

	return 0;
}

