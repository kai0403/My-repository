#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	int fre = 0;
	char str1[] = "You can be anyoeeebbbbene ybeeebbeou wanna be";
	char str2[] = "be";
	puts(str1);
	puts(str2);
	fre = Frequency(str1, str2);
	printf("Frequency is %d\n", fre);
	return 0;
}