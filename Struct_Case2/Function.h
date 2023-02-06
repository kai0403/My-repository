#pragma once
#include <iostream>
#include <string>
#include <cassert>
using namespace std;
struct Hero
{
	char name[20];
	char sex[10];
	int age;
};

void Init(struct Hero* ph);
void BubbleSort(struct Hero* ph, int n);
void Print(const struct Hero* ph, int n);
