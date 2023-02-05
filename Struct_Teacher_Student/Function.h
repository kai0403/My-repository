#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;
struct Student
{
	string s_name;
	int score;
};

struct Teacher
{
	string t_name;
	struct Student stu[5];
};

void InitStruct(struct Teacher* pt, int len);
void PrintStruct(struct Teacher* pt, int len);