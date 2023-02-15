#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
int main()
{
	//Java ja;
	//ja.Head();
	//ja.Html();
	//ja.End();
	//ja.Content();
	//cout << endl;
	//Python py;
	//py.Head();
	//py.Html();
	//py.End();
	//py.Content();
	//cout << endl;
	//CPP cpp;
	//cpp.Head();
	//cpp.Html();
	//cpp.End();
	//cpp.Content();
	/*Son1 s1;
	printf("%zd\n", sizeof(s1));*/
	/*SonBase sonbase;*/
	/*Son s1;
	s1.Father::Func(10);
	cout << s1.m_A << endl;
	cout << s1.Father::m_A << endl;*/
	//Son s1;
	/*cout << "s1.m_A = " << Son::m_A<< endl;
	cout << "s1.Father::m_A = " << Son::Father::m_A << endl;*/
	/*s1.Func();
	s1.Father::Func();*/
	/*Son::Func();
	Son::Father::Func();*/
	//Son::Func(10);
	/*Son s1;
	printf("%zd\n", sizeof(s1));*/
	//Son s1;
	//cout << s1.Father1::m_A << endl;
	//cout << s1.Father2::m_A << endl;
	Alpaca al;
	Sheep sh;
	Camel ca;
	al.Sheep::m_Age = 18;
	al.Camel::m_Age = 20;
	cout << al.Sheep::m_Age << endl;
	cout << al.Camel::m_Age << endl;
	cout << al.m_Age << endl;
	return 0;
}