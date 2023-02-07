#pragma once
#include <iostream>
using namespace std;
#include <string>
#define MAX 1000//����ͨѶ¼�������Ϊ1000
enum Option//����ͨѶ¼��ͬ����Ϊö�ٳ���
{
	Exit,
	Add,
	Show,
	Delete,
	Find,
	Modify,
	Clear
};
struct Contacts//�����ϵ�˽ṹ��
{
	string name;
	string phone;
	string address;
	string sex;//��ϵ�˵��Ա�0ΪŮ��1Ϊ��
	int age;
};
struct Addressbook//���ͨѶ¼�ṹ��
{
	struct Contacts contactsArray[MAX];//ͨѶ¼�����ϵ��
	int size;//ͨѶ¼�����е���ϵ�˸���
};
void ShowMenu(struct Addressbook* pabs);
void AddPerson(struct Addressbook* pabs);
void ShowPerson(const struct Addressbook* pabs);
int Isexist(const struct Addressbook* pabs, string name);
void DeletePerson(struct Addressbook* pabs, int n);
void FindPerson(const struct Addressbook* pabs);
void ModifyPerson(struct Addressbook* pabs);
void ClearPerson(struct Addressbook* pabs);