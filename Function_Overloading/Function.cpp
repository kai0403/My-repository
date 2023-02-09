#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
void Func()
{
	cout << "This is Function1." << endl;
}

//void Func(int a)
//{
//	cout << "This is Function2." << endl;
//}

void Func(int a, double b)
{
	cout << "This is Function3." << endl;
}

void Func(double a, int b)
{
	cout << "This is Function4." << endl;
}

//int Func(int a)
//{
//	cout << "This is Function2." << endl;
//	return a;
//}

void Func(int& a)
{
	cout << "This is Function5." << endl;
}

void Func(const int& a)
{
	cout << "This is Function6." << endl;
}

void Func(int a, int b)
{
	cout << "This is Function7." << endl;
}

void Func(int a, int b = 10)
{
	cout << "This is Function8." << endl;
}