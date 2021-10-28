// 도전 3-6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"
#include "time.h"

int main()
{
	srand(time(NULL));
	int i;
	int quiz[3];
	for (i = 0; i < 3; i++)//랜점으로 숫자 3개 설정
	{
		quiz[i] = rand() % 10;
	}
	
	
	int answer1;//첫번째 답
	int answer2;//두번째 답
	int answer3;//세번째 답
	int strike = 0;//스트라이크
	int ball = 0;//볼
	int restart = 0;

	printf("Start Game!\n\n");
	
	while (1)//맞출때까지
	{

		printf("3개의 숫자를 선택(숫자는 0~9까지 사용 가능): ");
		scanf_s("%d%d%d", &answer1, &answer2, &answer3);
		


		///////////////////첫번째
			if (quiz[0] == answer1)
			{
				strike++;
			}
			else if (quiz[0] == answer2|| quiz[0] == answer3)
			{
				ball++;
			}
		///////////////////두번쨰
			if (quiz[1] == answer2)
			{
				strike++;
			}
			else if (quiz[1] == answer1 || quiz[1] == answer3)
			{
				ball++;
			}
		/////////////////////세번째
			if (quiz[2] == answer3)
			{
				strike++;
			}
			else if (quiz[2] == answer1 || quiz[2] == answer2)
			{
				ball++;
			}

			printf("%d번째 도전결과: %dstrike, %dball!!!\n", ++restart, strike, ball);
			
			if (strike == 3)//맞추면 탈출
			{
				break;
			}
			
			strike = 0;
			ball = 0;

			

	}
	printf("YOU WIN!!!\n");
	
	

	return 0;
}

