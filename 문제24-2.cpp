// ����24-2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
long GetFileSize(FILE * fp);

int main()
{
	FILE * fp;
	char str[100];
	fopen_s(&fp, "C:\\Users\\���繮\\Desktop\\ABC.txt", "rt");
	fgets(str, 100, fp);
	fputs(str, stdout);
	printf("������ ũ��: %ld \n", GetFileSize(fp));
	fgets(str, 100, fp);
	fputs(str, stdout);


    return 0;
}

long GetFileSize(FILE * fp)
{

	long fpos;
	long fsize;
	fpos = ftell(fp);//���� ��ġ ������ ���� ���

	fseek(fp, 0, SEEK_END);
	fsize = ftell(fp);
	fseek(fp, fpos, SEEK_SET);//���� ��ġ ������ ���� ����
	return fsize;

}