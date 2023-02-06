#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
void Init(struct Hero* ph)
{
	strcpy(ph->name, "ÕÔÐÅ");
	ph->age = 20;
	strcpy(ph->sex, "male");
	strcpy((ph + 1)->name, "·ðÒ®¸ê");
	(ph + 1)->age = 30;
	strcpy((ph + 1)->sex, "male");
	strcpy((ph + 2)->name, "Þ±¶÷");
	(ph + 2)->age = 25;
	strcpy((ph + 2)->sex, "female");
	strcpy((ph + 3)->name, "°¢¿¨Àö");
	(ph + 3)->age = 28;
	strcpy((ph + 3)->sex, "female");
}

void BubbleSort(struct Hero* ph, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i; j < n - 1; j++)
		{
			if ((ph + j)->age > (ph + j + 1)->age)
			{
				/*int temp2 = 0;
				temp2 = (ph + j)->age;
				(ph + j)->age = (ph + j + 1)->age;
				(ph + j + 1)->age = temp2;
				char* temp = (char*)malloc(sizeof((ph + j)->name));
				assert(temp);
				strcpy(temp, (ph + j)->name);
				strcpy((ph + j)->name, (ph + j + 1)->name);
				strcpy((ph + j + 1)->name, temp);
				strcpy(temp, (ph + j)->sex);
				strcpy((ph + j)->sex, (ph + j + 1)->sex);
				strcpy((ph + j + 1)->sex, temp);
				free(temp);
				temp = NULL;*/
				struct Hero temp = *(ph + j);
				*(ph + j) = *(ph + j + 1);
				*(ph + j + 1) = temp;
			}
		}
	}
}

void Print(const struct Hero* ph, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "ÐÕÃû: " << (ph + i)->name << " " << "\tÐÔ±ð: " << (ph + i)->sex << " " << "\tÄêÁä: " << (ph + i)->age << endl;
	}
}