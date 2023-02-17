//职工管理系统
#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include "Worker.h"
#include "Employee.h"
#include "Manager.h"
#include "Boss.h"
using namespace std;
#define FILENAME "stafile.txt"
enum Choice
{
	EXIT,
	ADD,
	DISPLAY,
	DELETE,
	MODIFY,
	SEARCH,
	ORDER,
	CLEAR
};
enum Occupation
{
	null,
	EMPLOYEE,
	MANAGER,
	BOSS
};
class WorkerManager//创建职工管理类
{
public:
	WorkerManager();//构造函数
	void InitStaff();//初始化职工信息
	void Show_Menu();//打印菜单
	void ExitSystem();//退出系统
	void Add_Staff();//添加职工函数
	void ShowStaff();//显示职工信息
	void DelStaff();//删除职工信息
	void ModStaff();//修改职工信息
	void SearStaff();//查找职工信息
	void SortStaff();//按照职工编号排序
	void ClearStaff();//清空职工信息
	void Save();//保存文件函数
	int GetStaffNum();//获得原数据中职工人数
	int StaffExist(int num);//判断职工是否存在
	~WorkerManager();//析构函数

public:
	int m_StaffNum;//职工数量
	Worker** m_StaffArr;//职工指针数组
	bool m_FileIsEmpty;//判断文件是否为空标志
};