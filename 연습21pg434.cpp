// 연습21pg434~.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string.h"



























//
//int main()
//{
//	char str1[20];
//	char str2[20];
//
//	printf("문자열 입력 1:");
//	scanf_s("%s", str1,sizeof(str1));
//	printf("문자열 입력 2:");
//	scanf_s("%s", str2,sizeof(str2));
//
//	if (!strcmp(str1, str2))
//	{
//		puts("동일합니다");
//	}
//	else
//	{
//		puts("동일하지 않습니다");
//		if (!strncmp(str1, str2, 3));
//		puts("앞에 3글자는 동일합니다");
//
//
//
//	}
//	return 0;
//}





//int main()
//{
//	char str1[30] = "asdasdasd";
//	char str2[10] = "zxczcz";
//	strcat_s(str1,sizeof(str1), str2);
//	puts(str1);
//
//	strncat_s(str1, str2, 3);
//	puts(str1);
//
//	return 0;
//}

//int main()
//{
//	char str1[20]="1234567890";
//	char str2[20];
//	char str3[5];
//
//	///*/*/*case1*/*/*/
//	strcpy_s(str2, sizeof(str2), str1);
//	puts(str2);
//
//	///*/*/*case2*/*/*/
//	/*strncpy_s(str3, str1, sizeof(str3));
//	puts(str3);
//
//	*////*/*/*case3*/*/*/
//	strncpy_s(str3, str1, sizeof(str3) - 1);
//	str3[sizeof(str3) - 1] = 0;
//	puts(str3);
//
//
//	return 0;
//}
//int main()
//{
//	char str1[100];
//	char str2[10];
//	char str3[10];
//	
//	gets_s(str1, sizeof(str1));//gets_s 함수의 경우 입력버퍼가 비워지지 않지만 fgets의 함수는 입력버퍼가 비워진다.
//	strcpy_s(str2, sizeof(str2),str1 );
//	printf("str1 = %s,str2 = %s\n", str1, str2);
//
//	strncpy_s(str3, str1, sizeof(str3));
//	printf("str1 = %s,str3 = %s\n", str1, str3);
//
//
//
//    return 0;
//}

