#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.hpp"
int main()
{
	Person<string, int>p1("уехЩ", 20);
	PrintPerson(p1);
 	return 0;
}