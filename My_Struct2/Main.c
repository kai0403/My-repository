#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#pragma pack(8)
#include "Function.h"
struct Student
{
	char a;
	int c;
	double b;
};
#pragma pack()
struct Book
{
	char a;
	struct Student c1;
	double c2;
};
int main()
{
	/*printf("%zd\n", sizeof(struct Student));
	printf("%zd\n", sizeof(struct Book));*/
	/*printf("%zd\n", offsetof(struct Student, b));*/
	struct Student s1 = { 0 };
	Initial(&s1);
	Print(&s1);
	Print2(s1);
	return 0;
}