#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	/*int initial = 0;
	while (initial < 11)
	{
		cout << initial << endl;
		initial++;
	}*/
	/*int input = 0;
	int count = 1;
	srand((unsigned int)time(NULL));
	int ret = rand() % 100 + 1;
	cout << "Please input the number you guess:" << endl;
	cin >> input;
	while (1)
	{
		if (input > ret)
		{
			cout << "Too big!" << endl;
			if (count == 5)
			{
				cout << "You failed!" << endl;
				break;
			}
			count++;
			cin >> input;
		}
		else if (input < ret)
		{
			cout << "Too small!" << endl;
			if (count == 5)
			{
				cout << "You failed!" << endl;
				break;
			}
			count++;
			cin >> input;
		}
		else
		{
			cout << "Right!" << endl;
			break;
		}
	}*/
	/*int num = 0;
	do
	{
		cout << num << endl;
		num++;
	} while (num < 10);
	system("pause");*/
	/*int i = 100;
	do
	{
		int hund = i / 100;
		int tens = i % 100 / 10;
		int digits = i % 10;
		if (i == pow(hund, 3) + pow(tens, 3) + pow(digits, 3))
		{
			cout << i << endl;
		}
		i++;
	} while (i < 1000);*/
	for (int i = 0; i < 10; i++)
	{
		cout << i << endl;
	}
	return 0;
}