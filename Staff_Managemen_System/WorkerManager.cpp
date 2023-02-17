#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "WorkerManager.h"
WorkerManager::WorkerManager()//构造函数
{
	ifstream ifs(FILENAME, ios::in);
	//1.文件不存在
	if (!ifs.is_open())
	{
		cout << "The file does not exist!" << endl;//提示文件不存在
		this->m_FileIsEmpty = true;//标志文件为空
		this->m_StaffNum = 0;//初始化人数为0
		this->m_StaffArr = NULL;//初始化数组指针为空指针
		ifs.close();
		return;
	}
	//2.文件存在且为空
	char ch = 0;
	ifs >> ch;
	if (ifs.eof())
	{
		cout << "The file exists but it is empty!" << endl;//提示文件存在但为空
		this->m_FileIsEmpty = true;//标志文件为空
		this->m_StaffNum = 0;//初始化人数为0
		this->m_StaffArr = NULL;//初始化数组指针为空指针
		ifs.close();
		return;
	}
	//3.文件存在且不为空
	int num = this->GetStaffNum();
	this->m_StaffNum = num;
	cout << "The number of staff is " << this->m_StaffNum << endl;
	this->m_StaffArr = new Worker * [this->m_StaffNum];
	this->InitStaff();
	////测试代码
	//for (int i = 0; i < this->m_StaffNum; i++)
	//{
	//	cout << "Staff Number: " << this->m_StaffArr[i]->m_Num << '\t'
	//		<< "Staff Name: " << this->m_StaffArr[i]->m_Name << '\t'
	//		<< "Department Number: " << this->m_StaffArr[i]->m_DepNum << endl;
	//}
}

void WorkerManager::InitStaff()//初始化职工信息
{
	ifstream ifs(FILENAME, ios::in);
	if (!ifs.is_open())//判断文件是否读取成功
	{
		system("pause");
		system("cls");
		return;
	}
	int staffnum = 0;;
	string name;
	int depnum = 0;
	int index = 0;
	while (ifs >> staffnum && ifs >> name && ifs >> depnum)//读取文件数据
	{
		Worker* worker = NULL;
		if (depnum == 1)//职工职位为员工
		{
			worker = new Employee(staffnum, name, 1);
		}
		else if (depnum == 2)//职工职位为经理
		{
			worker = new Manager(staffnum, name, 2);
		}
		else if (depnum == 3)//职工职位为老板
		{
			worker = new Boss(staffnum, name, 3);
		}
		this->m_StaffArr[index] = worker;//将数据存入指针数组中
		index++;
	}
}

void WorkerManager::Show_Menu()//打印菜单
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

void WorkerManager::ExitSystem()//退出系统
{
	cout << "Exit successfully!" << endl;
	exit(0);
}

void WorkerManager::Add_Staff()//添加职工
{
	cout << "Please input the number of the staff to be added:" << endl;
	int addnum = 0;//用户输入需要添加的职工数量
	cin >> addnum;
	if (addnum > 0)//用户输入正确
	{
		int NewSize = this->m_StaffNum + addnum;//计算新空间的大小
		Worker** NewSpace = new Worker * [NewSize];//开辟新空间
		if (this->m_StaffArr != NULL)//原来有数据
		{
			for (int i = 0; i < this->m_StaffNum; i++)//将原来的数据拷贝到新指针数组中
			{
				NewSpace[i] = this->m_StaffArr[i];
			}
		}
		for (int i = 0; i < addnum; i++)//储存新添加的员工信息
		{
			int num;
			string name;
			int depselect;
			cout << "Please input the staff number of the Person " << i + 1 << endl;
			cin >> num;//用户输入职工编号
			cout << "Please input the name of the Person " << i + 1 << endl;
			cin >> name;//用户输入职工姓名
			cout << "Please input the department number of the Person " << i + 1 << endl;
			cout << "1.Employee" << endl;
			cout << "2.Manager" << endl;
			cout << "3.Boss" << endl;
			cin >> depselect;//用户输入部门编号
			Worker* worker = NULL;
			switch (depselect)
			{
			case EMPLOYEE:
				worker = new Employee(num, name, 1);//储存员工信息
				break;
			case MANAGER:
				worker = new Manager(num, name, 2);//储存经理信息
				break;
			case BOSS:
				worker = new Boss(num, name, 3);//储存老板信息
				break;
			default:
				system("cls");//清屏
				break;
			}
			NewSpace[this->m_StaffNum + i] = worker;//将信息存储到新开辟的指针数组中
		}
		delete[] this->m_StaffArr;//释放原有的空间
		this->m_StaffArr = NULL;
		this->m_StaffArr = NewSpace;//更改新空间指向
		this->m_StaffNum = NewSize;//更新职工人数
		cout << "The number of added staff is " << addnum << endl;
	}
	else//用户输入错误
	{
		cout << "Input wrong!" << endl;
	}
	this->Save();//保存数据到文件中
	this->m_FileIsEmpty = false;//标志文件不为空
	cout << "Save successfully!" << endl;//提示文件保存成功
	system("pause");//提示按任意键继续
	system("cls");//清屏
}

void WorkerManager::ShowStaff()//显示职工信息
{

	if (this->m_FileIsEmpty == true)//文件为空或者文件不存在
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
			this->m_StaffArr[i]->ShowInfo();//多态方式调用其子类的显示职工信息函数
			cout << endl;
		}
	}
	system("pause");
	system("cls");
}

void WorkerManager::DelStaff()//删除职工信息
{
	if (this->m_FileIsEmpty)//判断文件是否存在或者是否为空
	{
		cout << "The file does not exist or it is empty!" << endl;
		system("pause");
		system("cls");
		return;
	}
	int num = 0;
	cout << "Please input the staff number you want to delete: " << endl;
	cin >> num;//用户输入所需删除职工的职工编号
	int ret = this->StaffExist(num);//保存该职工编号对应下标
	if (ret == -1)//职工不存在
	{
		cout << "Delete failed, the staff does not exist!" << endl;
	}
	else//职工存在，进行删除
	{
		for (int i = ret; i < this->m_StaffNum - 1; i++)//数据前移
		{
			this->m_StaffArr[i] = this->m_StaffArr[i + 1];
		}
		this->m_StaffNum--;//更新职工人数
		this->Save();//保存到文件中
		cout << "Delete succeed!" << endl;//提示删除成功
		if (this->m_StaffNum == 0)//如果删除后职工数为0，则标志文件为空
		{
			this->m_FileIsEmpty = true;
		}
	}
	system("pause");//按任意键继续
	system("cls");//清屏
}

void WorkerManager::ModStaff()//修改职工信息
{
	//1.判断文件是否为空或者不存在
	if (this->m_FileIsEmpty == true)
	{
		cout << "The file does not exist or it is empty!" << endl;
		system("pause");
		system("cls");
		return;
	}
	//2.提示用户输入所需员工对应编号，并判断是否存在
	int num = 0;
	cout << "Please input the staff number to be modified: " << endl;
	cin >> num;
	int ret = this->StaffExist(num);
	if (ret == -1)//员工不存在
	{
		cout << "The staff does not exist!" << endl;
	}
	//3.所需修改员工存在，开始修改
	else
	{
		delete this->m_StaffArr[ret];//删除原始数据
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
		//4.更新数据到数据中并提示修改成功
		this->m_StaffArr[ret] = worker;
		cout << "Modify succeed!" << endl;
		//5.保存到文件中并清屏
		this->Save();
	}
	system("pause");
	system("cls");
}

void WorkerManager::SearStaff()//查找职工信息
{
	//1.判断文件是否为空或者是否存在
	if (this->m_FileIsEmpty == true)
	{
		cout << "The file does not exist or it is empty!" << endl;
		system("pause");
		system("cls");
		return;
	}
	//2.提示用户输入查找方式:1->按职工编号查找 2->按职工姓名查找
	int select = 0;
	cout << "Please input the approach to search: " << endl;
	cout << "1. Search with staff number" << endl;
	cout << "2. Search with staff name" << endl;
	cin >> select;
	if (select == 1)//按照职工编号查找
	{
		int num = 0;
		cout << "Please input the staff numebr: " << endl;
		cin >> num;
		int ret = this->StaffExist(num);
		if (ret == -1)//所查职工不存在
		{
			cout << "Search failed, the staff does not exist!" << endl;
		}
		else//所查员工存在
		{
				
			cout << "Staff finded!" << endl;
			this->m_StaffArr[ret]->ShowInfo();;	
		}
	}
	else//按照职工姓名查找
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

void WorkerManager::SortStaff()//将职工信息按照职工编号排序
{
	if (this->m_FileIsEmpty == true)//文件为空或者文件不存在
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
		for (int i = 0; i < this->m_StaffNum - 1; i++)//升序排列
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
		cout << "Order succeed!" << endl;//打印提示排序成功
		this->Save();//保存到文件中
	}
	else if (select == 2)
	{
		for (int i = 0; i < this->m_StaffNum - 1; i++)//降序排列
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
		cout << "Order succeed!" << endl;//打印提示排序成功
		this->Save();//保存到文件中
	}
	system("pause");
	system("cls");
}

void WorkerManager::ClearStaff()//清空文件
{
	int select = 0;
	cout << "Are you sure to clear all of the information ? " << endl;//提示用户是否确定清空
	cout << "1. Yes" << endl;
	cout << "Else. No" << endl;
	cin >> select;
	if (select != 1)//用户不清空
	{
		cout << "Cancel succeed!" << endl;
	}
	else//用户确定清空
	{
		ofstream ofs(FILENAME, ios::trunc);//删除文件
		ofs.close();
		if (this->m_StaffArr != NULL)
		{
			for (int i = 0; i < this->m_StaffNum; i++)//释放堆区的每个职工对象
			{
				delete this->m_StaffArr[i];
				this->m_StaffArr[i] = NULL;
			}
		}
		this->m_StaffArr = NULL;//释放堆区数组指针
		this->m_StaffNum = 0;//将职工数置为0
		this->m_FileIsEmpty = true;//标志文件为空
		cout << "Clear succeed!" << endl;//提示用户清空成功
	}
	system("pause");//按任意键继续
	system("cls");//清屏
}

void WorkerManager::Save()//将信息保存到文件中
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

int WorkerManager::GetStaffNum()//获得原数据中职工人数
{
	ifstream ifs(FILENAME, ios::in);//读取文件中的数据
	if (!ifs.is_open())//判断文件是否打开成功
	{
		return -1;
	}
	int staffnum = 0;
	string name;
	int depnum = 0;
	int num = 0;//记录职工人数
	while (ifs >> staffnum && ifs >> name && ifs >> depnum)//依次读取文件中数据
	{
		num++;//每读一行则职工人数加一
	}
	ifs.close();
	return num;//返回职工人数
}

int WorkerManager::StaffExist(int num)//判断职工是否存在
{
	int index = -1;
	for (int i = 0; i < this->m_StaffNum; i++)
	{
		if (this->m_StaffArr[i]->m_Num == num)//职工存在，返回其下标
		{
			index = i;
			break;
		}
	}
	return index;
}

WorkerManager::~WorkerManager()//析构函数释放堆区空间
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