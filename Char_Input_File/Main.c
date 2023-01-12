#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	FILE* fp = "0";
	char* myfile = "C:\\Users\\lenovo\\OneDrive\\×ÀÃæ\\myfile.txt";
	char c = '0';
	if ((fp = fopen(myfile, "r+")) == NULL)
	{
		printf("Open failed!\n");
		exit(0);
	}
	else
	{
		printf("Open succeded!\n");
		while ((c = getchar()) != '#')
		{
			fputc(c, fp);
		}
	}
	fclose(fp);
	return 0;
}