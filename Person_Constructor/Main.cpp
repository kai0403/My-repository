#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
int main()
{
	int age = 0;
	string name;
	cin >> name;
	cin >> age;
	Person p(age, name);
	p.ShowPerson();
	return 0;
}