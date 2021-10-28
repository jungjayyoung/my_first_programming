// 도전3-3,4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"
#include "time.h"

int main()
{

	//srand(time(NULL));//srand의 인자로 시간을 집어넣으면 컴퓨터의 현재 시간을 씨드값으로 사용할 수 있다
	////컴퓨터의 시간은 계속 변하기 때문에 매번 다른 씨드 값을 얻어와서 매번 다른 값을 반환한다.
	//int i,seed;
	//printf("씨드 값 입력:");
	//scanf_s("%d", &seed);
	//

	//
	//for (i = 0; i < 5; i++)
	//	printf("난수출력:%d \n", rand()%99);

	srand(time(NULL));

	int dice1;
	int dice2;

	dice1 = rand() % 6+1;
	dice2 = rand() % 6+1;


	printf("주사위1의 결과 %d\n",dice1);
	printf("주사위2의 결과 %d\n", dice2);


    return 0;
}

