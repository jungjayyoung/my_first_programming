// 도전3-5.cpp : Defines the entry point for the console application.
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
			printf("바위는 1, 가위는 2, 보는 3: \n");
			scanf_s("%d", &choice, sizeof(choice));

			if (choice == 1)
			{
				printf("당신은 바위 선택,");
			}

			if (choice == 2)
			{
				printf("당신은 가위 선택,");
			}

			if (choice == 3)
			{
				printf("당신은 보 선택,");
			}
			////////////////////////////////////////////////////
			int choice2 = rand() % 3 + 1;

			if (choice2 == 1)
			{
				printf("컴퓨터는 바위 선택,");
			}

			if (choice2 == 2)
			{
				printf("컴퓨터는 가위 선택,");
			}

			if (choice2 == 3)
			{
				printf("컴퓨터는 보 선택,");
			}
			/////////////////////////////////////////  결과
			if (choice == choice2)
			{
				printf("비겼습니다!\n");
				tie++;
			}

			if (choice2 - 1 == choice || choice - 2 == choice2)//내가1,2 일때||내가 3일때
			{
				printf("이겼습니다!\n");
				win++;
			}

			if (choice - 1 == choice2 || choice2 - 2 == choice)//내가1,2 일때||내가 3일때
			{
				printf("졌습니다!\n");
				break;
			}

		}
		printf("\n\n");
		printf("게임의 결과 : %d승, %d무\n", win, tie);


    return 0;
}

