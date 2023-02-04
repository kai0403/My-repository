#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
int main()
{
	struct Contact con = { 0 };
	Init(&con);
	Menu(&con);
	return 0;
}