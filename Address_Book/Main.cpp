#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
int main()
{
	Addressbook abs;
	abs.size = 0;
	ShowMenu(&abs);
	return 0;
}