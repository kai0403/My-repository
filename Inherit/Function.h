#pragma once
#include <iostream>
using namespace std;
//class Public
//{
//public:
//	void Head()
//	{
//		cout << "Java, Python, C++..." << endl;
//	}
//	void Html()
//	{
//		cout << "Public lessons of Java, Python, C++..." << endl;
//	}
//	void End()
//	{
//		cout << "Help, related information, contacts..." << endl;
//	}
//};
//
//class Java : public Public
//{
//public:
//	void Content()
//	{
//		cout << "Classes of Java" << endl;
//	}
//};
//
//class Python : public Public
//{
//public:
//	void Content()
//	{
//		cout << "Classes of Python" << endl;
//	}
//};
//class CPP : public Public
//{
//public:
//	void Content()
//	{
//		cout << "Classes of C++" << endl;
//	}
//};
//
//class Father
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Son1 : public Father//Son1�����̳�Father
//{
//public:
//	void Func()
//	{
//		m_A = 100;
//		m_B = 1000;
//		//m_C = 100;//m_CΪFather˽�����ԣ����ɷ���
//	}
//};
//
//class GrandSon1 : public Son1//GrandSon1�����̳�Son1
//{
//public:
//	void Func()
//	{
//		m_A = 100;
//		m_B = 1000;
//		//m_C = 100;//m_CΪFather˽�����ԣ����ɷ���
//	}
//};
//
//class GrandSon2 : protected Son1//GrandSon2�����̳�Son1
//{
//public:
//	void Func()
//	{
//		m_A = 100;
//		m_B = 1000;
//		//m_C = 100;//m_CΪFather˽�����ԣ����ɷ���
//	}
//};
//
//class GrandSon3 : private Son1//GrandSon3�����̳�Son1
//{
//public:
//	void Func()
//	{
//		m_A = 100;
//		m_B = 1000;
//		//m_C = 100;//m_CΪFather˽�����ԣ����ɷ���
//	}
//};
//
//class Son2 : protected Father//Son2�����̳�Father
//{
//public:
//	void Func()
//	{
//		m_A = 100;
//		m_B = 100;
//		//m_C = 100;//m_CΪFather˽�����ԣ����ɷ���
//	}
//};
//
//class Son3 : private Father//Son3˽�м̳�Father
//{
//public:
//	void Func()
//	{
//		m_A = 100;
//		m_B = 100;
//	}
//};
//
//class GrandSon4 : public Son3//GrandSon4�����̳�Son3
//{
//public:
//	void Func()
//	{
//		//m_A = 100;//m_AΪSon3˽�����ԣ����ɷ���
//		//m_B = 100;//m_BΪSon3˽�����ԣ����ɷ���
//	}
//};
//
//class Base
//{
//public:
//	Base()
//	{
//		cout << "This is the constructor of Base." << endl;
//	}
//	~Base()
//	{
//		cout << "This is the destructor of Base." << endl;
//	}
//};
//
//class SonBase : public Base
//{
//public:
//	SonBase()
//	{
//		cout << "This is the constructor of SonBase." << endl;
//	}
//	~SonBase()
//	{
//		cout << "This is the destructor of SonBase." << endl;
//	}
//};

//class Father
//{
//public:
//	int m_A = 200;
//	void Func()
//	{
//		cout << "This is the function of Father." << endl;
//	}
//	void Func(int a)
//	{
//		this->m_A = a;
//	}
//};
//
//class Son : public Father
//{
//public:
//	int m_A = 100;
//	void Func()
//	{
//		cout << "This is the function of Son." << endl;
//	}
//};

//class Father
//{
//public:
//	static int m_A;
//	static void Func()
//	{
//		cout << "This is the static function of class Father." << endl;
//	}
//	static void Func(int a)
//	{
//		cout << "This is the static function(int a) of class Father." << endl;
//	}
//};
//int Father::m_A = 100;
//
//class Son : public Father
//{
//public:
//	static int m_A;
//	static void Func()
//	{
//		cout << "This is the static function of class Son." << endl;
//	}
//};
//int Son::m_A = 200;

//class Father1
//{
//public:
//	int m_A = 200;
//};
//
//class Father2
//{
//public:
//	int m_B;
//	int m_A = 100;
//};
//
//class Son : public Father1, public Father2
//{
//public:
//	int m_C;
//	int m_D;
//};

class Animal
{
public:
	int m_Age;
};

class Sheep : virtual public Animal
{
	
};

class Camel : virtual public Animal
{

};

class Alpaca : virtual public Sheep, virtual public Camel
{

};