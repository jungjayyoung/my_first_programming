// 문제21-2pg445.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string.h"
#include "stdlib.h"


//pg446 문제 21-2 문제3

int GetSpaceidx(char str[])
{
	int i, len;
	len = strlen(str);//이름의 길이
	for (i = 0; i < len; i++)
	{

		if (str[i] == ' ')//공백(스페이스바)
		{
			return i;//이름의 길이 반납.
		}
	}
			return -1;//공백이 존재하지 않을경우 반납.무조건 참값

}

int CompName(char str1[],char str2[])
{
	int idx1 = GetSpaceidx(str1);//이름의 길이
	int idx2 = GetSpaceidx(str2);//이름의 길이

	if (idx1 != idx2)//길이 비교
	{
		return 0;//길이가 다르면 서로 다른 이름,,, 0은 거짓을 의미.
	}
	else
		return !strncmp(str1, str2, idx1);//같으면 0이 아닌 정수 즉, 참.
}

int CompAge(char str1[], char str2[])
{
	int idx1 = GetSpaceidx(str1);//이름의 길이
	int idx2 = GetSpaceidx(str2);//이름의 길이
	int age1,age2;

	age1 = atoi(&str1[idx1 + 1]);//나이가 저장된 위치
	age2 = atoi(&str2[idx2 + 1]);//나이가 저장된 위치

	if (age1 == age2)
	{
		return 1;//참
	}
	else
		return 0;//거짓
}

int main()
{
	char str1[20];
	char str2[20];
	printf("첫번째 정보를 입력 이름(스페이스)나이: ");
	fgets(str1, sizeof(str1), stdin);
	str1[strlen(str1) - 1] = 0;

	printf("두번째 정보를 입력 이름(스페이스)나이: ");
	fgets(str2, sizeof(str2), stdin);
	str2[strlen(str2) - 1] = 0;

	if (CompName(str1, str2))
	{
		puts("이름이 동일합니다");
	}
	else
		puts("이름이 동일하지 않습니다");

	if (CompAge(str1, str2))
	{
		puts("나이가 동일합니다");
	}
	else
		puts("나이가 동일하지 않습니다");

	return 0;
}

//pg445 문제 21-2 문제2

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
//	strncpy_s(str3, str1,sizeof(str3));//str1을 복사.strncpy은 문자열의 끝에 자동으로 널문자를 붙여주지않는다.
//	strncat_s(str3, str2, 20);//str3뒤에 str2를 붙인다.strcat은 문자열의 끝에 자동으로 널문자를 붙여준다.
//	
//	puts(str3);
//
//	return 0;
//}



//pg445 문제 21-2 문제1 


//int AddNumber(char str[])
//{
//	int i=0;
//	int sum = 0;
//	int len = strlen(str);//문자열의 길이 len
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
//	printf("문자열을 입력하시오\n");
//	
//	fgets(str, sizeof(str), stdin);
//
//	sum = AddNumber(str);
//
//	printf("숫자의 합은 :  %d\n",sum);
//
//    return 0;
//}

