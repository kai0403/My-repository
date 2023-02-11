#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
int main()
{
	/*Person p;*///默认构造函数
	//Person p(10);//有参构造函数
	//Person p1(p);//拷贝构造函数
	//Person p = Person(10);//显示有参构造函数
	//Person p1 = Person(p);//显示拷贝构造函数
	//Person p = 10;//隐式转换有参构造函数
	//Person p1 = p;//隐式转换拷贝构造函数
	//Person p1(10);
	//Person p2(p1);//用已经初始化好的对象初始化另一个对象
	/*Person p;
	Func(p);
	cout << p.age << endl;*///值传递传参
	/*Person p;
	Person p1 = p;*/
	/*Person p = Func2();
	cout << (int*)&p << endl;*/
	Person p1(21, 190);
	Person p2(p1);
	cout << "Age:" << p2.age << "\tHeight:" << *p2.height << endl;
	system("pause");
	return 0;
}