#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
int main()
{
	printf("%zd\n", sizeof(struct S));
	printf("%zd\n", sizeof(long));
	return 0;
}