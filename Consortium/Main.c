#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
union U
{
	char c;
	int i;
};
int main()
{
	union U u = { 0 };
	u.i = 1;
	if (u.c == 1)
	{
		printf("Small end storage.\n");
	}
	else
	{
		printf("Large end storage.\n");
	}
	return 0;
}