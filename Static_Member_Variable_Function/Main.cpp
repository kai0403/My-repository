#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
int main()
{
	///*Person p;
	//cout << p.A << endl;
	//Person p2;
	//p2.A = 200;
	//cout << Person::A << endl;
	//cout << p.A << endl;*/
	//Person p;
	//p.Func();
	//Person::Func();
	/*cout << sizeof(Person) << endl;*/
	/*Person p;
	p.SetAge(18);
	cout << p.age << endl;*/
	Person p(10);
	Person p2(10);
	p2.AddAge(p).AddAge(p).AddAge(p);
	cout << p2.age << endl;
	cout << p.age << endl;
	return 0;
}