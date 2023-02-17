#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "WorkerManager.h"
#include "Worker.h"
#include "Employee.h"
#include "Manager.h"
#include "Boss.h"
int main()
{
	/*Worker* worker1 = new Employee(1, "张三", 1);
	Worker* worker2 = new Manager(2, "李四", 2);
	Worker* worker3 = new Boss(3, "王五", 3);
	worker1->ShowInfo();
	cout << endl;
	delete worker1;
	worker2->ShowInfo();
	cout << endl;
	delete worker2;
	worker3->ShowInfo();
	delete worker3;*/
	/*Worker* worker = new Boss(3, "王五", 3);
	worker->ShowInfo();*/
	/*Worker* worker = NULL;
	worker = new Employee(1, "张三", 1);
	worker->ShowInfo();*/
	/*Worker* worker = new Manager(2, "李四", 2);
	worker->ShowInfo();*/
	WorkerManager wm;
	int choice = 0;
	while (true)//实现用户与系统接口
	{
		wm.Show_Menu();//打印菜单界面
		cout << "Please input your choice:" << endl;
		cin >> choice;
		switch (choice)
		{
		case EXIT://退出系统
			wm.ExitSystem();
			break;
		case ADD://增加职工
			wm.Add_Staff();
			break;
		case DISPLAY://显示职工
			wm.ShowStaff();
			break;
		case DELETE://删除职工
			wm.DelStaff();
			break;
		case MODIFY://修改职工
			wm.ModStaff();
			break;
		case SEARCH://查找职工
			wm.SearStaff();
			break;
		case ORDER://排序职工
			wm.SortStaff();
			break;
		case CLEAR://清空职工
			wm.ClearStaff();
			break;
		default:
			system("cls");
			break;
		}
	}
	return 0;
}