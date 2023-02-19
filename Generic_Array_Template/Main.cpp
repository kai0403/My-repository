#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "MyArray.hpp"
int main()
{
	MyArray<Person>parr(5);
	Person p1("张三", 20);
	Person p2("李四", 30);
	Person p3("王五", 40);
	Person p4("赵六", 50);
	Person p5("田七", 60);
	parr.Push_Back(p1);
	parr.Push_Back(p2);
	parr.Push_Back(p3);
	parr.Push_Back(p4);
	parr.Push_Back(p5);
	parr.Pop_Back();
	cout << "The capacity of the array is " << parr.GetCapacity() << endl;
	cout << "The size of the array is " << parr.GetSize() << endl;
	parr.GetSize();
	for (int i = 0; i < parr.GetSize(); i++)
	{
		parr[i].ShowPerson();
	}
	return 0;
}