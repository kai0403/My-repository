#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
int main()
{
	/*vector<int>v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);*/
	/*vector<int>::iterator it = v.begin();
	while (it != v.end())
	{
		cout << *it << endl;
		it++;
	}*/
	/*for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << endl;
	}*/
	/*vector<int>::iterator it = v.begin();
	vector<int>::iterator end = v.end();
	for_each(it, end, MyPrint);*/
	/*vector<Person*>v;
	Person p1("张三", 20);
	Person p2("李四", 30);
	Person p3("王五", 40);
	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "Name: " << (**it).GetName() << endl;
		cout << "Age: " << (**it).GetAge() << endl;
		cout << endl;
	}*/
	vector<vector<int>>v;
	vector<int>v1;
	vector<int>v2;
	vector<int>v3;
	for (int i = 0; i < 3; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 1);
		v3.push_back(i + 2);
	}
	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);
	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++)
	{
		for (vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++)
		{
			cout << (*vit) << " ";
		}
		cout << endl;
	}
	return 0;
}