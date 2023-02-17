#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "WorkerManager.h"
WorkerManager::WorkerManager()//���캯��
{
	ifstream ifs(FILENAME, ios::in);
	//1.�ļ�������
	if (!ifs.is_open())
	{
		cout << "The file does not exist!" << endl;//��ʾ�ļ�������
		this->m_FileIsEmpty = true;//��־�ļ�Ϊ��
		this->m_StaffNum = 0;//��ʼ������Ϊ0
		this->m_StaffArr = NULL;//��ʼ������ָ��Ϊ��ָ��
		ifs.close();
		return;
	}
	//2.�ļ�������Ϊ��
	char ch = 0;
	ifs >> ch;
	if (ifs.eof())
	{
		cout << "The file exists but it is empty!" << endl;//��ʾ�ļ����ڵ�Ϊ��
		this->m_FileIsEmpty = true;//��־�ļ�Ϊ��
		this->m_StaffNum = 0;//��ʼ������Ϊ0
		this->m_StaffArr = NULL;//��ʼ������ָ��Ϊ��ָ��
		ifs.close();
		return;
	}
	//3.�ļ������Ҳ�Ϊ��
	int num = this->GetStaffNum();
	this->m_StaffNum = num;
	cout << "The number of staff is " << this->m_StaffNum << endl;
	this->m_StaffArr = new Worker * [this->m_StaffNum];
	this->InitStaff();
	////���Դ���
	//for (int i = 0; i < this->m_StaffNum; i++)
	//{
	//	cout << "Staff Number: " << this->m_StaffArr[i]->m_Num << '\t'
	//		<< "Staff Name: " << this->m_StaffArr[i]->m_Name << '\t'
	//		<< "Department Number: " << this->m_StaffArr[i]->m_DepNum << endl;
	//}
}

void WorkerManager::InitStaff()//��ʼ��ְ����Ϣ
{
	ifstream ifs(FILENAME, ios::in);
	if (!ifs.is_open())//�ж��ļ��Ƿ��ȡ�ɹ�
	{
		system("pause");
		system("cls");
		return;
	}
	int staffnum = 0;;
	string name;
	int depnum = 0;
	int index = 0;
	while (ifs >> staffnum && ifs >> name && ifs >> depnum)//��ȡ�ļ�����
	{
		Worker* worker = NULL;
		if (depnum == 1)//ְ��ְλΪԱ��
		{
			worker = new Employee(staffnum, name, 1);
		}
		else if (depnum == 2)//ְ��ְλΪ����
		{
			worker = new Manager(staffnum, name, 2);
		}
		else if (depnum == 3)//ְ��ְλΪ�ϰ�
		{
			worker = new Boss(staffnum, name, 3);
		}
		this->m_StaffArr[index] = worker;//�����ݴ���ָ��������
		index++;
	}
}

void WorkerManager::Show_Menu()//��ӡ�˵�
{
	cout << "Weclome to the staff management system!" << endl;
	cout << "0.Exit the management program" << endl;
	cout << "1.Add to the information of staff" << endl;
	cout << "2.Display the information of staff" << endl;
	cout << "3.Delete the information of outgoing staff" << endl;
	cout << "4.Modify the information of staff" << endl;
	cout << "5.Search for the information of staff" << endl;
	cout << "6.Order with number" << endl;
	cout << "7.Clear all the files" << endl;
	cout << endl;
}

void WorkerManager::ExitSystem()//�˳�ϵͳ
{
	cout << "Exit successfully!" << endl;
	exit(0);
}

void WorkerManager::Add_Staff()//���ְ��
{
	cout << "Please input the number of the staff to be added:" << endl;
	int addnum = 0;//�û�������Ҫ��ӵ�ְ������
	cin >> addnum;
	if (addnum > 0)//�û�������ȷ
	{
		int NewSize = this->m_StaffNum + addnum;//�����¿ռ�Ĵ�С
		Worker** NewSpace = new Worker * [NewSize];//�����¿ռ�
		if (this->m_StaffArr != NULL)//ԭ��������
		{
			for (int i = 0; i < this->m_StaffNum; i++)//��ԭ�������ݿ�������ָ��������
			{
				NewSpace[i] = this->m_StaffArr[i];
			}
		}
		for (int i = 0; i < addnum; i++)//��������ӵ�Ա����Ϣ
		{
			int num;
			string name;
			int depselect;
			cout << "Please input the staff number of the Person " << i + 1 << endl;
			cin >> num;//�û�����ְ�����
			cout << "Please input the name of the Person " << i + 1 << endl;
			cin >> name;//�û�����ְ������
			cout << "Please input the department number of the Person " << i + 1 << endl;
			cout << "1.Employee" << endl;
			cout << "2.Manager" << endl;
			cout << "3.Boss" << endl;
			cin >> depselect;//�û����벿�ű��
			Worker* worker = NULL;
			switch (depselect)
			{
			case EMPLOYEE:
				worker = new Employee(num, name, 1);//����Ա����Ϣ
				break;
			case MANAGER:
				worker = new Manager(num, name, 2);//���澭����Ϣ
				break;
			case BOSS:
				worker = new Boss(num, name, 3);//�����ϰ���Ϣ
				break;
			default:
				system("cls");//����
				break;
			}
			NewSpace[this->m_StaffNum + i] = worker;//����Ϣ�洢���¿��ٵ�ָ��������
		}
		delete[] this->m_StaffArr;//�ͷ�ԭ�еĿռ�
		this->m_StaffArr = NULL;
		this->m_StaffArr = NewSpace;//�����¿ռ�ָ��
		this->m_StaffNum = NewSize;//����ְ������
		cout << "The number of added staff is " << addnum << endl;
	}
	else//�û��������
	{
		cout << "Input wrong!" << endl;
	}
	this->Save();//�������ݵ��ļ���
	this->m_FileIsEmpty = false;//��־�ļ���Ϊ��
	cout << "Save successfully!" << endl;//��ʾ�ļ�����ɹ�
	system("pause");//��ʾ�����������
	system("cls");//����
}

void WorkerManager::ShowStaff()//��ʾְ����Ϣ
{

	if (this->m_FileIsEmpty == true)//�ļ�Ϊ�ջ����ļ�������
	{
		cout << "The file does not exist or it is empty!" << endl;
		system("pause");
		system("cls");
		return;
	}
	else
	{
		for (int i = 0; i < this->m_StaffNum; i++)
		{
			this->m_StaffArr[i]->ShowInfo();//��̬��ʽ�������������ʾְ����Ϣ����
			cout << endl;
		}
	}
	system("pause");
	system("cls");
}

void WorkerManager::DelStaff()//ɾ��ְ����Ϣ
{
	if (this->m_FileIsEmpty)//�ж��ļ��Ƿ���ڻ����Ƿ�Ϊ��
	{
		cout << "The file does not exist or it is empty!" << endl;
		system("pause");
		system("cls");
		return;
	}
	int num = 0;
	cout << "Please input the staff number you want to delete: " << endl;
	cin >> num;//�û���������ɾ��ְ����ְ�����
	int ret = this->StaffExist(num);//�����ְ����Ŷ�Ӧ�±�
	if (ret == -1)//ְ��������
	{
		cout << "Delete failed, the staff does not exist!" << endl;
	}
	else//ְ�����ڣ�����ɾ��
	{
		for (int i = ret; i < this->m_StaffNum - 1; i++)//����ǰ��
		{
			this->m_StaffArr[i] = this->m_StaffArr[i + 1];
		}
		this->m_StaffNum--;//����ְ������
		this->Save();//���浽�ļ���
		cout << "Delete succeed!" << endl;//��ʾɾ���ɹ�
		if (this->m_StaffNum == 0)//���ɾ����ְ����Ϊ0�����־�ļ�Ϊ��
		{
			this->m_FileIsEmpty = true;
		}
	}
	system("pause");//�����������
	system("cls");//����
}

void WorkerManager::ModStaff()//�޸�ְ����Ϣ
{
	//1.�ж��ļ��Ƿ�Ϊ�ջ��߲�����
	if (this->m_FileIsEmpty == true)
	{
		cout << "The file does not exist or it is empty!" << endl;
		system("pause");
		system("cls");
		return;
	}
	//2.��ʾ�û���������Ա����Ӧ��ţ����ж��Ƿ����
	int num = 0;
	cout << "Please input the staff number to be modified: " << endl;
	cin >> num;
	int ret = this->StaffExist(num);
	if (ret == -1)//Ա��������
	{
		cout << "The staff does not exist!" << endl;
	}
	//3.�����޸�Ա�����ڣ���ʼ�޸�
	else
	{
		delete this->m_StaffArr[ret];//ɾ��ԭʼ����
		int NewNum = 0;
		string NewName;
		int NewDepnum = 0;
		cout << "Please input the new staff number: " << endl;
		cin >> NewNum;
		cout << "Please input the new name: " << endl;
		cin >> NewName;
		cout << "Please input the new department number: " << endl;
		cin >> NewDepnum;
		Worker* worker = NULL;
		switch (NewDepnum)
		{
		case EMPLOYEE:
			worker = new Employee(NewNum, NewName, 1);
			break;
		case MANAGER:
			worker = new Manager(NewNum, NewName, 2);
			break;
		case BOSS:
			worker = new Boss(NewNum, NewName, 3);
			break;
		default:
			cout << "Wrong number!" << endl;
			break;
		}
		//4.�������ݵ������в���ʾ�޸ĳɹ�
		this->m_StaffArr[ret] = worker;
		cout << "Modify succeed!" << endl;
		//5.���浽�ļ��в�����
		this->Save();
	}
	system("pause");
	system("cls");
}

void WorkerManager::SearStaff()//����ְ����Ϣ
{
	//1.�ж��ļ��Ƿ�Ϊ�ջ����Ƿ����
	if (this->m_FileIsEmpty == true)
	{
		cout << "The file does not exist or it is empty!" << endl;
		system("pause");
		system("cls");
		return;
	}
	//2.��ʾ�û�������ҷ�ʽ:1->��ְ����Ų��� 2->��ְ����������
	int select = 0;
	cout << "Please input the approach to search: " << endl;
	cout << "1. Search with staff number" << endl;
	cout << "2. Search with staff name" << endl;
	cin >> select;
	if (select == 1)//����ְ����Ų���
	{
		int num = 0;
		cout << "Please input the staff numebr: " << endl;
		cin >> num;
		int ret = this->StaffExist(num);
		if (ret == -1)//����ְ��������
		{
			cout << "Search failed, the staff does not exist!" << endl;
		}
		else//����Ա������
		{
				
			cout << "Staff finded!" << endl;
			this->m_StaffArr[ret]->ShowInfo();;	
		}
	}
	else//����ְ����������
	{
		string name;
		bool flag = false;
		cout << "Please input the name of the staff:" << endl;
		cin >> name;
		for (int i = 0; i < this->m_StaffNum; i++)
		{
			if (this->m_StaffArr[i]->m_Name == name)
			{
				cout << "Staff finded!" << endl;
				flag = true;
				this->m_StaffArr[i]->ShowInfo();
				cout << endl;
			}
		}
		if (flag == false)
		{
			cout << "Staff not finded!" << endl;
		}
	}
	system("pause");
	system("cls");
}

void WorkerManager::SortStaff()//��ְ����Ϣ����ְ���������
{
	if (this->m_FileIsEmpty == true)//�ļ�Ϊ�ջ����ļ�������
	{
		cout << "The file does not exist or it is empty!" << endl;
		system("pause");
		system("cls");
		return;
	}
	int select = 0;
	cout << "Please select an approach to sort: " << endl;
	cout << "1. Ascending order" << endl;
	cout << "2. Descending order" << endl;
	cin >> select;
	if (select == 1)
	{
		for (int i = 0; i < this->m_StaffNum - 1; i++)//��������
		{
			int min = i;
			for (int j = i; j < this->m_StaffNum; j++)
			{
				if (this->m_StaffArr[min]->m_Num > this->m_StaffArr[j]->m_Num)
				{
					min = j;
				}
			}
			if (min != i)
			{
				Worker* temp = this->m_StaffArr[min];
				this->m_StaffArr[min] = this->m_StaffArr[i];
				this->m_StaffArr[i] = temp;
			}
		}
		cout << "Order succeed!" << endl;//��ӡ��ʾ����ɹ�
		this->Save();//���浽�ļ���
	}
	else if (select == 2)
	{
		for (int i = 0; i < this->m_StaffNum - 1; i++)//��������
		{
			int max = i;
			for (int j = i + 1; j < this->m_StaffNum; j++)
			{
				if (this->m_StaffArr[max]->m_Num < this->m_StaffArr[j]->m_Num)
				{
					max = j;
				}
			}
			if (max != i)
			{
				Worker* temp = this->m_StaffArr[max];
				this->m_StaffArr[max] = this->m_StaffArr[i];
				this->m_StaffArr[i] = temp;
			}
		}
		cout << "Order succeed!" << endl;//��ӡ��ʾ����ɹ�
		this->Save();//���浽�ļ���
	}
	system("pause");
	system("cls");
}

void WorkerManager::ClearStaff()//����ļ�
{
	int select = 0;
	cout << "Are you sure to clear all of the information ? " << endl;//��ʾ�û��Ƿ�ȷ�����
	cout << "1. Yes" << endl;
	cout << "Else. No" << endl;
	cin >> select;
	if (select != 1)//�û������
	{
		cout << "Cancel succeed!" << endl;
	}
	else//�û�ȷ�����
	{
		ofstream ofs(FILENAME, ios::trunc);//ɾ���ļ�
		ofs.close();
		if (this->m_StaffArr != NULL)
		{
			for (int i = 0; i < this->m_StaffNum; i++)//�ͷŶ�����ÿ��ְ������
			{
				delete this->m_StaffArr[i];
				this->m_StaffArr[i] = NULL;
			}
		}
		this->m_StaffArr = NULL;//�ͷŶ�������ָ��
		this->m_StaffNum = 0;//��ְ������Ϊ0
		this->m_FileIsEmpty = true;//��־�ļ�Ϊ��
		cout << "Clear succeed!" << endl;//��ʾ�û���ճɹ�
	}
	system("pause");//�����������
	system("cls");//����
}

void WorkerManager::Save()//����Ϣ���浽�ļ���
{
	ofstream ofs(FILENAME, ios::out);
	for (int i = 0; i < this->m_StaffNum; i++)
	{
		ofs << this->m_StaffArr[i]->m_Num << '\t'
			<< this->m_StaffArr[i]->m_Name << '\t'
			<< this->m_StaffArr[i]->m_DepNum << endl << endl;
	}
	ofs.close();
}

int WorkerManager::GetStaffNum()//���ԭ������ְ������
{
	ifstream ifs(FILENAME, ios::in);//��ȡ�ļ��е�����
	if (!ifs.is_open())//�ж��ļ��Ƿ�򿪳ɹ�
	{
		return -1;
	}
	int staffnum = 0;
	string name;
	int depnum = 0;
	int num = 0;//��¼ְ������
	while (ifs >> staffnum && ifs >> name && ifs >> depnum)//���ζ�ȡ�ļ�������
	{
		num++;//ÿ��һ����ְ��������һ
	}
	ifs.close();
	return num;//����ְ������
}

int WorkerManager::StaffExist(int num)//�ж�ְ���Ƿ����
{
	int index = -1;
	for (int i = 0; i < this->m_StaffNum; i++)
	{
		if (this->m_StaffArr[i]->m_Num == num)//ְ�����ڣ��������±�
		{
			index = i;
			break;
		}
	}
	return index;
}

WorkerManager::~WorkerManager()//���������ͷŶ����ռ�
{
	if (this->m_StaffArr != NULL)
	{
		for (int i = 0; i < this->m_StaffNum; i++)
		{
			if (this->m_StaffArr[i] != NULL)
			{
				delete this->m_StaffArr[i];
				this->m_StaffArr[i] = NULL;
			}
		}
		delete[] this->m_StaffArr;
		this->m_StaffArr = NULL;
	}
}