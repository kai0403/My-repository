#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
void AddPerson(struct Addressbook* pabs)
{
	if (pabs->size >= MAX)//判断通讯录是否满了
	{
		cout << "The number of contacts is full!" << endl;
	}
	else
	{
		//输入姓名
		string name;
		cout << "Please input the name: " << endl;
		cin >> name;
		pabs->contactsArray[pabs->size].name = name;
		//输入性别
		int sex = 0;
		
		while(1)
		{
			cout << "Please input the sex: " << endl;
			cout << "1.male" << endl;
			cout << "0.female" << endl;
			cin >> sex;
			if (sex == 1 || sex == 0)
			{
				if (sex == 0)
				{
					pabs->contactsArray[pabs->size].sex = "female";
					break;
				}
				else
				{
					pabs->contactsArray[pabs->size].sex = "male";
					break;
				}
			}
			else
			{
				cout << "Wrong number, input again!" << endl;
			}
		}
		//输入年龄
		int age = 0;
		cout << "Please input the age:" << endl;
		cin >> age;
		pabs->contactsArray[pabs->size].age = age;
		//输入电话
		string phone;
		cout << "Please input the phone number: " << endl;
		cin >> phone;
		pabs->contactsArray[pabs->size].phone = phone;
		//输入住址
		string address;
		cout << "Please input the address: " << endl;
		cin >> address;
		pabs->contactsArray[pabs->size].address = address;
		cout << "Successfully added!" << endl;
		pabs->size++;
		system("pause");
		system("cls");
	}
}

void ShowPerson(const struct Addressbook* pabs)
{
	if (pabs->size == 0)
	{
		cout << "The address book is empty!" << endl;
		system("pause");
		system("cls");
	}
	else
	{
		for (int i = 0; i < pabs->size; i++)
		{
			cout << "姓名: " << pabs->contactsArray[i].name
				<< "\t性别: " << pabs->contactsArray[i].sex
				<< "\t年龄: " << pabs->contactsArray[i].age
				<< "\t电话: " << pabs->contactsArray[i].phone
				<< "\t住址: " << pabs->contactsArray[i].address << endl;
		}
		system("pause");
		system("cls");
	}
}

int Isexist(const struct Addressbook* pabs, string name)
{
	for (int i = 0; i < pabs->size; i++)
	{
		if (pabs->contactsArray[i].name == name)
		{
			return i;
		}
	}
	return -1;
}

void DeletePerson(struct Addressbook* pabs, int n)
{
	for (int i = n; i < pabs->size - 1; i++)
	{
		pabs->contactsArray[i] = pabs->contactsArray[i + 1];
	}
	cout << "Delete successfully!" << endl;
	pabs->size--;
	system("pause");
	system("cls");
}

void FindPerson(const struct Addressbook* pabs)
{
	string name;
	cout << "Please input the name to be finded: " << endl;
	cin >> name;
	int ret = Isexist(pabs, name);
	if (ret == -1)
	{
		cout << "The contact does not exist!" << endl;
	}
	else
	{
		cout << "姓名: " << pabs->contactsArray[ret].name
			<< "\t性别: " << pabs->contactsArray[ret].sex
			<< "\t年龄: " << pabs->contactsArray[ret].age
			<< "\t电话: " << pabs->contactsArray[ret].phone
			<< "\t住址: " << pabs->contactsArray[ret].address << endl;
	}
	system("pause");
	system("cls");
}

void ModifyPerson(struct Addressbook* pabs)
{
	string name;
	cout << "Please input the name to be modified: " << endl;
	cin >> name;
	int ret = Isexist(pabs, name);
	if (ret == -1)
	{
		cout << "The contact does not exist!" << endl;
	}
	else
	{
		//输入姓名
		string name;
		cout << "Please input the name: " << endl;
		cin >> name;
		pabs->contactsArray[ret].name = name;
		//输入性别
		int sex = 0;

		while (1)
		{
			cout << "Please input the sex: " << endl;
			cout << "1.male" << endl;
			cout << "0.female" << endl;
			cin >> sex;
			if (sex == 1 || sex == 0)
			{
				if (sex == 0)
				{
					pabs->contactsArray[ret].sex = "female";
					break;
				}
				else
				{
					pabs->contactsArray[ret].sex = "male";
					break;
				}
			}
			else
			{
				cout << "Wrong number, input again!" << endl;
			}
		}
		//输入年龄
		int age = 0;
		cout << "Please input the age:" << endl;
		cin >> age;
		pabs->contactsArray[ret].age = age;
		//输入电话
		string phone;
		cout << "Please input the phone number: " << endl;
		cin >> phone;
		pabs->contactsArray[ret].phone = phone;
		//输入住址
		string address;
		cout << "Please input the address: " << endl;
		cin >> address;
		pabs->contactsArray[ret].address = address;
		cout << "Successfully modified! " << endl;
	}
	system("pause");
	system("cls");
}

void ClearPerson(struct Addressbook* pabs)
{
	int choice = 0;
	cout << "Are you sure to clear the address book? " << endl;
	cout << "1. Yes" << endl;
	cout << "0. No" << endl;
	cin >> choice;
	if (choice == 0)
	{
		cout << "Clearance canceled! " << endl;
	}
	else
	{
		pabs->size = 0;
		cout << "Successfully cleared! " << endl;
	}
	system("pause");
	system("cls");
}

void ShowMenu(struct Addressbook* pabs)
{
	int input = 0;
	do
	{
		cout << "Please input your choice:" << endl;
		cout << "1.Add a contact" << endl;
		cout << "2.Show contacts" << endl;
		cout << "3.Delete contacts" << endl;
		cout << "4.Find contacts" << endl;
		cout << "5.Modify contacts" << endl;
		cout << "6.Clear contacts" << endl;
		cout << "0.Exit" << endl;
		cin >> input;
		switch (input)
		{
		case Add:
			AddPerson(pabs);
			break;
		case Show:
			ShowPerson(pabs);
			break;
		case Delete:
		{
			string name;
			cout << "Please input the name to be deleted: " << endl;
			cin >> name;
			int ret = Isexist(pabs, name);
			if (ret == -1)
			{
				cout << "The contact is not finded!" << endl;
				system("pause");
				system("cls");
			}
			else
			{
				DeletePerson(pabs, ret);
			}
		}
			break;
		case Find:
			FindPerson(pabs);
			break;
		case Modify:
			ModifyPerson(pabs);
			break;
		case Clear:
			ClearPerson(pabs);
			break;
		case Exit:
			cout << "Exit Successfully!" << endl;
			break;
		default:
			cout << "Wrong number, input again!" << endl;
			break;
		}
	} while (input);
}