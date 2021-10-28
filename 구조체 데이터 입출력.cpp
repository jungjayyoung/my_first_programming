// 구조체 데이터 입출력.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

typedef struct fren//***사실상 fren은 없어도 된다.***
{
	char name[10];
	int age;
	int number;

}Friend;

int main()
{
	Friend fren1;
	Friend fren2;
	FILE * fp;
	/*****파일쓰는법*****/ //파일을 쓸 때는 먼저 콘솔창에 입력을 한 후 파일에다가 쓰는 순서를 기억하자
	//fopen_s(&fp, "C:\\Users\\정재문\\Desktop\\structtest.bin", "wb");//구조체 변수를 하나의 바이너리 데이터로 인식하고 복사
	//printf("이름 나이 번호 순 입력: ");
	//scanf_s("%s %d %d", fren1.name, sizeof(fren1.name), &(fren1.age), &(fren1.number));
	//fwrite((void*)&fren1, sizeof(fren1), 1, fp);
	//fclose(fp);
	///*****파일읽는법*****/ //파일을 읽을 때는 파일에서 읽어온후 콘솔창에 띄우는 순서를 기억하자
	fopen_s(&fp, "C:\\Users\\정재문\\Desktop\\structtest.bin", "rb");
	fread((void*)&fren2, sizeof(fren2), 1, fp);
	printf("%s %d %d", fren2.name, fren2.age,fren2.number);
	fclose(fp);

    return 0;
}

