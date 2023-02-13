#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
int main()
{
	/*Person p1;
	p1.m_A = 10;
	p1.m_B = 10;
	Person p2;
	p2.m_A = 20;
	p2.m_B = 20;
	Person p3 = p1 + 100;
	cout << p3.m_A << endl;
	cout << p3.m_B << endl;*/
	/*Person p1(10, 10);
	Person p2(20, 20);
	Person p3 = p1 + p2;
	cout << p3 << endl << "hello world" << endl;*/
	/*MyInteger myint;
	cout << myint++<< endl;
	cout << myint << endl;
	MyInteger myint2;
	cout << ++myint2 << endl;
	cout << myint2 << endl;*/
	/*MyInteger myint3;
	cout << myint3-- << endl;
	cout << myint3 << endl;
	MyInteger myint4;
	cout << --myint4 << endl;
	cout << myint4 << endl;*/
	/*Student s1(18);
	Student s2(20);
	Student s3(30);
	s1 = s2 = s3;
	cout << *s1.m_Age << endl;
	cout << *s2.m_Age << endl;
	cout << *s3.m_Age << endl;*/
	/*Human h1("张三", 20);
	Human h2("张三", 20);
	if (h1 == h2)
	{
		cout << "These two humans are the same!" << endl;
	}
	else
	{
		cout << "These two humans are not the same!" << endl;
	}
	if (h1 != h2)
	{
		cout << "These two humans are not the same!" << endl;
	}
	else
	{
		cout << "These two humans are the same!" << endl;
	}*/
	MyPrint myprint;
	myprint("hello world");
	Print("hello world");
	MyAdd myadd;
	cout << myadd(10, 20) << endl;
	cout << Add(10, 20) << endl;
	MyPrint()("Hello World!");//匿名函数对象
	cout << MyAdd()(100, 200) << endl;//匿名函数对象
	//匿名对象使用完马上释放，适合在只用于一行语句的情况
	return 0;
}