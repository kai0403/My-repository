#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#pragma once
#include <iostream>
using namespace std;
template<class T>
class MyArray
{
public:
	MyArray(int capacity)//有参构造
	{
		//cout << "This is the constructor with parameters of my array." << endl;
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->paddress = new T[this->m_Capacity];
	}
	MyArray(const MyArray& arr)//深拷贝
	{
		//cout << "This is the copy constructor of my array." << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->paddress = new T[arr.m_Capacity];
		for (int i = 0; i < arr.m_Size; i++)
		{
			this->paddress[i] = arr.paddress[i];
		}
	}
	void Push_Back(const T& val)//尾插法添加元素
	{
		//判断数组大小是否等于容量
		if (this->m_Capacity == this->m_Size)
		{
			cout << "There is no more space! " << endl;
			return;
		}
		this->paddress[this->m_Size] = val;//插入数据到尾部
		this->m_Size++;//数组大小加一
	}
	void Pop_Back()//尾删法删除元素
	{
		//让用户访问不到最后一个元素
		if (this->m_Size == 0)
		{
			cout << "The array is empty!" << endl;
			return;
		}
		this->m_Size--;
	}
	//通过下标的方式访问数组元素
	T& operator[](int index)
	{
		return this->paddress[index];
	}
	//返回数组容量
	int GetCapacity()
	{
		return this->m_Capacity;
	}
	//返回数组大小
	int GetSize()
	{
		return this->m_Size;
	}
	MyArray& operator=(const MyArray& arr)//等号重载避免浅拷贝
	{
		//cout << "This is the overloading of equal sign." << endl;
		if (this->paddress != NULL)//判断原来数组中是否还有数据
		{
			delete[] this->paddress;
			this->paddress = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}
		//深拷贝
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->paddress = new T[arr.m_Capacity];
		for (int i = 0; i < arr.m_Size; i++)
		{
			this->paddress[i] = arr.paddress[i];
		}
		return *this;
	}
	~MyArray()//析构
	{
		if (this->paddress != NULL)
		{
			//cout << "This is the destructor of my array." << endl;
			delete[] this->paddress;
			this->paddress = NULL;
		}
	}
private:
	T* paddress;//指向存放数组元素空间的指针
	int m_Capacity;//数组容量
	int m_Size;//数组大小
};

class Person
{
public:
	Person() {};
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	void ShowPerson()
	{
		cout << "Name: " << this->m_Name << endl;
		cout << "Age: " << this->m_Age << endl;
	}
private:
	string m_Name;
	int m_Age;
};