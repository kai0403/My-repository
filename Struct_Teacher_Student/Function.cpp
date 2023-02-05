#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
void InitStruct(struct Teacher* pt, int len)
{
	string nameseed = "ABCDE";
	for (int i = 0; i < len; i++)
	{
		(pt + i)->t_name = "Teacher_";
		(pt + i)->t_name += nameseed[i];
		for (int j = 0; j < 5; j++)
		{
			(pt + i)->stu[j].s_name = "Student_";
			(pt + i)->stu[j].s_name += nameseed[j];
			int random = rand() % 61 + 40;
			(pt + i)->stu[j].score = random;
		}
	}
}

void PrintStruct(struct Teacher* pt, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "The name of the teacher is " << (pt + i)->t_name << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\tThe name of the student is " << (pt + i)->stu[j].s_name 
				 << " The score of the student is " << (pt + i)->stu[j].score << endl;
		}
	}
}