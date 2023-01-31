#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
struct Student
{
	char a;
	int c;
	double b;
};
void Initial(struct Student* ps1)
{
	ps1->a = 'w';
	ps1->c = 100;
	ps1->b = 3.14;
}

void Print(const struct Student* ps1)
{
	printf("%c\n", ps1->a);
	printf("%d\n", ps1->c);
	printf("%lf\n", ps1->b);
}

void Print2(struct Student ps)
{
	printf("%c\n", ps.a);
	printf("%d\n", ps.c);
	printf("%lf\n", ps.b);
}