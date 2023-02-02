#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
struct S
{
	char a : 2;
	char b : 5;
	char c : 3;
	char d : 2;
};
int main()
{
	struct S s = { 0 };
	s.a = 10;
	s.b = 2;
	s.c = 3;
	s.d = 5;
	printf("%zd\n", sizeof(struct S));
	return 0;
}