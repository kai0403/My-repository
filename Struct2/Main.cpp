#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
int main()
{
	//Student s = { "����", 20, 85 };//�����ṹ�����
	//Student* ps = &s;//ָ��ָ��ṹ��
	//cout << "����: " << ps->name << endl;
	//cout << "����: " << ps->age << endl;
	//cout << "����: " << ps->score << endl;
	/*Teacher t =
	{
		"101902",
		"����",
		20,
		{"����", 20, 85}
	};
	Teacher* pt = &t;
	cout << "��ʦ��ţ�" << pt->id << endl;
	cout << "��ʦ������" << pt->name << endl;
	cout << "��ʦ���䣺" << pt->age << endl;
	cout << "����ѧ��������" << pt->stu.name << endl;
	cout << "����ѧ�����䣺" << pt->stu.age << endl;
	cout << "����ѧ��������" << pt->stu.score << endl;*/
	Student s = { "����", 30, 70 };
	PrintStudent2(s);
 	return 0;
}