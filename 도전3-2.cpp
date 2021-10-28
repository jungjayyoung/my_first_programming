// 도전3-2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

//개인적으로 코딩이 그다지 마음에 들지 않다. 너무 더럽다. 이것저것 변수를 추가해서 그런듯하다. 더 깔끔한 방법을 연구해보자
int main()
{

	int num;//숫자입력받음, 반복문에서 값이 변함
	int x = 0;//배열의 길이 부분
	int y = 0;//배열의 높이 부분
	int i = 0;//x와 y의 범위를 조정할 변수 
	int position=1;//1부터 배열에 집어넣을 숫자 변수, 점점 증가해서 num까지 증가
	int end;//총 숫자의 갯수를 받을 변수, num*num을 집어넣을 것임
	int print;//num값울 복사, printf로 출력할때 사용, num값이 중간에 변하므로 따로 변수를 이렇게 지정함
	int arr[10][10] = { 0 };//메모리 동적 할당 malloc함수를 아직 안배웠으므로 이렇게 배열을 미리 10정도로 크기를 잡는다
	                //즉 10이하의 크기만 입력 가능하다.

	printf("숫자를 입력하시오 :\n");
	scanf_s("%d", &num);//num * num 배열 
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
	///////프린트 
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

