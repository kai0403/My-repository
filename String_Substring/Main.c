#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	char str1[] = "Be yourseyourselfsdslf, trust yoursel and love yousdasrself";
	char str2[] = "yourself";
	int ret = Frequency(str1, str2, strlen(str1), strlen(str2));
	printf("The frequency is %d\n", ret);
	return 0;
}