#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "WorkerManager.h"
#include "Worker.h"
#include "Employee.h"
#include "Manager.h"
#include "Boss.h"
int main()
{
	/*Worker* worker1 = new Employee(1, "����", 1);
	Worker* worker2 = new Manager(2, "����", 2);
	Worker* worker3 = new Boss(3, "����", 3);
	worker1->ShowInfo();
	cout << endl;
	delete worker1;
	worker2->ShowInfo();
	cout << endl;
	delete worker2;
	worker3->ShowInfo();
	delete worker3;*/
	/*Worker* worker = new Boss(3, "����", 3);
	worker->ShowInfo();*/
	/*Worker* worker = NULL;
	worker = new Employee(1, "����", 1);
	worker->ShowInfo();*/
	/*Worker* worker = new Manager(2, "����", 2);
	worker->ShowInfo();*/
	WorkerManager wm;
	int choice = 0;
	while (true)//ʵ���û���ϵͳ�ӿ�
	{
		wm.Show_Menu();//��ӡ�˵�����
		cout << "Please input your choice:" << endl;
		cin >> choice;
		switch (choice)
		{
		case EXIT://�˳�ϵͳ
			wm.ExitSystem();
			break;
		case ADD://����ְ��
			wm.Add_Staff();
			break;
		case DISPLAY://��ʾְ��
			wm.ShowStaff();
			break;
		case DELETE://ɾ��ְ��
			wm.DelStaff();
			break;
		case MODIFY://�޸�ְ��
			wm.ModStaff();
			break;
		case SEARCH://����ְ��
			wm.SearStaff();
			break;
		case ORDER://����ְ��
			wm.SortStaff();
			break;
		case CLEAR://���ְ��
			wm.ClearStaff();
			break;
		default:
			system("cls");
			break;
		}
	}
	return 0;
}