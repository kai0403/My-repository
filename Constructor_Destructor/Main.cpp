#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
int main()
{
	/*Person p;*///Ĭ�Ϲ��캯��
	//Person p(10);//�вι��캯��
	//Person p1(p);//�������캯��
	//Person p = Person(10);//��ʾ�вι��캯��
	//Person p1 = Person(p);//��ʾ�������캯��
	//Person p = 10;//��ʽת���вι��캯��
	//Person p1 = p;//��ʽת���������캯��
	//Person p1(10);
	//Person p2(p1);//���Ѿ���ʼ���õĶ����ʼ����һ������
	/*Person p;
	Func(p);
	cout << p.age << endl;*///ֵ���ݴ���
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