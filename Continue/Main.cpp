#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
int main()
{
	for (int i = 1; i <= 100; i++)
	{
		if (i % 2 == 0)
		{
			continue;
		}
		cout << i << endl;//���������ż�������
	}
	return 0;
}