#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int Frequency(char str1[], char str2[], int sz1, int sz2)
{
	int count = 0;
	int i = 0;
	int j = 0;
	int sum = 0;
	for (i = 0; i < sz1; i++)
	{
		sum = 0;
		for (j = 0; j < sz2; j++)
		{
			if (str1[i + j] == str2[j])
			{
				sum++;
				if (sum == sz2)
				{
					count++;
					sum = 0;
				}
			}
			else
			{
				break;
			}
		}
	}
	return count;
}