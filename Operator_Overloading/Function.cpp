#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
////全局函数运算符重载
//Person operator+(Person& p1, Person& p2)
//{
//	Person temp(p1.m_A + p2.m_A, p1.m_B + p2.m_B);
//	return temp;
//}
//
//ostream& operator<<(ostream& out, Person p)
//{
//	out << p.m_A << " " << p.m_B;
//	return out;
//}
//
//ostream& operator<<(ostream& cout, MyInteger myint)
//{
//	cout << myint.m_Num;
//	return cout;
//}
void Print(string str)
{
	cout << str << endl;
}

int Add(int a, int b)
{
	return a + b;
}