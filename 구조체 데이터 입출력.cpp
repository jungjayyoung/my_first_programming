// ����ü ������ �����.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

typedef struct fren//***��ǻ� fren�� ��� �ȴ�.***
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
	/*****���Ͼ��¹�*****/ //������ �� ���� ���� �ܼ�â�� �Է��� �� �� ���Ͽ��ٰ� ���� ������ �������
	//fopen_s(&fp, "C:\\Users\\���繮\\Desktop\\structtest.bin", "wb");//����ü ������ �ϳ��� ���̳ʸ� �����ͷ� �ν��ϰ� ����
	//printf("�̸� ���� ��ȣ �� �Է�: ");
	//scanf_s("%s %d %d", fren1.name, sizeof(fren1.name), &(fren1.age), &(fren1.number));
	//fwrite((void*)&fren1, sizeof(fren1), 1, fp);
	//fclose(fp);
	///*****�����д¹�*****/ //������ ���� ���� ���Ͽ��� �о���� �ܼ�â�� ���� ������ �������
	fopen_s(&fp, "C:\\Users\\���繮\\Desktop\\structtest.bin", "rb");
	fread((void*)&fren2, sizeof(fren2), 1, fp);
	printf("%s %d %d", fren2.name, fren2.age,fren2.number);
	fclose(fp);

    return 0;
}

