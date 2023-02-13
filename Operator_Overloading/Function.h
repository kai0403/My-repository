#pragma once
#include <iostream>
using namespace std;
//class Person
//{
//	friend Person operator+(Person& p1, Person& p2);
//	friend ostream& operator<<(ostream& out, Person p);
//public:
//	Person(int a, int b)
//	{
//		this->m_A = a;
//		this->m_B = b;
//	}
//private:
//	int m_A;
//	int m_B;
////成员函数运算符重载：
//	/*Person operator+(Person& p)
//	{
//		Person temp;
//		temp.m_A = this->m_A + p.m_A;
//		temp.m_B = this->m_B + p.m_B;
//		return temp;
//	}*/
//};
//class MyInteger
//{
//	friend ostream& operator<<(ostream& cout, MyInteger myint);
//public:
//	MyInteger()//默认构造函数将属性m_Num初始化为0
//	{
//		this->m_Num = 0;
//	}
//	MyInteger& operator++()
//	{
//		this->m_Num++;
//		return *this;
//	}
//	MyInteger operator++(int)
//	{
//		MyInteger temp;
//		this->m_Num++;
//		return temp;
//	}
//	MyInteger& operator--()
//	{
//		this->m_Num--;
//		return *this;
//	}
//	MyInteger operator--(int)
//	{
//		MyInteger temp;
//		this->m_Num--;
//		return temp;
//	}
//private:
//	int m_Num;
//};
//
//class Student
//{
//public:
//	Student(int age)
//	{
//		this->m_Age = new int(age);
//	}
//	Student& operator=(Student& s)
//	{
//		if (this->m_Age != NULL)
//		{
//			delete(this->m_Age);
//			this->m_Age = NULL;
//		}
//		this->m_Age = new int(*s.m_Age);
//		return *this;
//	}
//	~Student()
//	{
//		if (this->m_Age != NULL)
//		{
//			delete(this->m_Age);
//			this->m_Age = NULL;
//		}
//	}
//public:
//	int* m_Age;
//};
//
//class Human
//{
//public:
//	Human(string name, int age)
//	{
//		this->m_Age = age;
//		this->m_Name = name;
//	}
//	bool operator==(Human& h)
//	{
//		if (this->m_Age == h.m_Age && this->m_Name == h.m_Name)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//	bool operator!=(Human& h)
//	{
//		if (this->m_Age == h.m_Age && this->m_Name == h.m_Name)
//		{
//			return false;
//		}
//		else
//		{
//			return true;
//		}
//	}
//private:
//	int m_Age;
//	string m_Name;
//};
//
//Person operator+(Person& p1, Person& p2);
//ostream& operator<<(ostream& cout, Person p);
//ostream& operator<<(ostream& cout, MyInteger myint);
class MyPrint//函数调用运算符"()"重载 -- 仿函数
{
public:
	void operator()(string str)
	{
		cout << str << endl;
	}
};

class MyAdd
{
public:
	int operator()(int a, int b)
	{
		return a + b;
	}
};

void Print(string str);
int Add(int a, int b);