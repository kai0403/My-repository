#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			for (int k = 0; k <= 9; k++)
			{
				if (100 * i + 10 * j + k == pow(i, 3) + pow(j, 3) + pow(k, 3))
				{
					cout << 100 * i + 10 * j + k << endl;
				}
			}
		}
	}
	return 0;
}