#pragma once
#include <iostream>
using namespace std;
#include <string>
#define MAX 1000//定义通讯录最大容量为1000
enum Option//设置通讯录不同功能为枚举常量
{
	Exit,
	Add,
	Show,
	Delete,
	Find,
	Modify,
	Clear
};
struct Contacts//设计联系人结构体
{
	string name;
	string phone;
	string address;
	string sex;//联系人的性别，0为女，1为男
	int age;
};
struct Addressbook//设计通讯录结构体
{
	struct Contacts contactsArray[MAX];//通讯录里的联系人
	int size;//通讯录里现有的联系人个数
};
void ShowMenu(struct Addressbook* pabs);
void AddPerson(struct Addressbook* pabs);
void ShowPerson(const struct Addressbook* pabs);
int Isexist(const struct Addressbook* pabs, string name);
void DeletePerson(struct Addressbook* pabs, int n);
void FindPerson(const struct Addressbook* pabs);
void ModifyPerson(struct Addressbook* pabs);
void ClearPerson(struct Addressbook* pabs);