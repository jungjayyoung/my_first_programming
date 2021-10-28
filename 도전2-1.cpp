// 도전2-1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"




//도전2-5
//내림차순 알고리즘
/*
int main()
{
	int arr[7];
	int i,j,k;
	int temp;
	printf("정수 7개를 입력하라\n");

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

//도전2-4
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
	printf("단어의 길이 :%d\n", len);//str[0]이 첫번째 글자, str[len-1]이 마지막글자, len은 글자길이

	
	while (i != len / 2)
	{
		if( str[len - (1 + i)] == str[i])
		{
			
			i++;
		}
		else
		{
			printf("회문이 아닙니다\n");
			return 0;
		}

		
	}
	printf("회문입니다\n");


	return 0;
}

*/


//도전 2-3        RRRRRRRRREEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE
/*
int main()
{
	int arr[10];
	int arr2[10];
	int i;
	int j = 0;
	printf("숫자를입력하시오\n");
	
	for (i = 0; i < 10; i++)//정수 10개 배열에 입력
	{
		scanf_s("%d", &arr[i]);
	}
	printf("숫자\n");

	i = 0;
	
		for (int k = 0; k < 10; k++)
		{
			if (arr[k] % 2 == 0)//짝수이면 arr[10],arr[9],arr[8]...순으로 입력된다
			{
				arr2[9 - i] = arr[k];
				i++;
			}
			else//홀수이면 arr[0],arr[1],arr[2]...순으로 입력된다
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


//도전 2-2
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



/////도전 2-1
/*
void PrintZzak(int num)//짝수를 반납
{
	if (num % 2 == 0)
		printf("%d\n", num);
	


}


void PrintHol(int num)//홀수를 반납
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


	printf("홀수\n");
	for (i = 0; i < 10; i++)
	{
		PrintHol(arr[i]);

	}
	printf("\n");
	printf("짝수\n");
	for (i = 0; i < 10; i++)
	{
		PrintZzak(arr[i]);

	}

    return 0;
}

*/