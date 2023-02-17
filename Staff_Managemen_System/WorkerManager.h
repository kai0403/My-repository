//ְ������ϵͳ
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
class WorkerManager//����ְ��������
{
public:
	WorkerManager();//���캯��
	void InitStaff();//��ʼ��ְ����Ϣ
	void Show_Menu();//��ӡ�˵�
	void ExitSystem();//�˳�ϵͳ
	void Add_Staff();//���ְ������
	void ShowStaff();//��ʾְ����Ϣ
	void DelStaff();//ɾ��ְ����Ϣ
	void ModStaff();//�޸�ְ����Ϣ
	void SearStaff();//����ְ����Ϣ
	void SortStaff();//����ְ���������
	void ClearStaff();//���ְ����Ϣ
	void Save();//�����ļ�����
	int GetStaffNum();//���ԭ������ְ������
	int StaffExist(int num);//�ж�ְ���Ƿ����
	~WorkerManager();//��������

public:
	int m_StaffNum;//ְ������
	Worker** m_StaffArr;//ְ��ָ������
	bool m_FileIsEmpty;//�ж��ļ��Ƿ�Ϊ�ձ�־
};