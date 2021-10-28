// 도전4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"








int main()
{
	
	int i, j, k;//i는 크림,j는 새우깡,k는 콜라 라고하자
	int total=3500;
	for (i = 1; 500 * i < total; i++)
	{
		for (j = 1; 700 * j <=  total - (500 * i); j++)
		{
			
			for (k = 1; 400 * k <= total-(500*i)-(700*j); k++)
			{
				if (total==(500*i)+(700*j)+(400*k))
				{
					printf("크림빵 %d개, 새우깡 %d개, 콜라 %d개\n", i, j, k);
				}


			}

		}


	}
	printf("어떻게 구입하시겠습니까?\n");
	
    return 0;
}

