#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
int main()
{
	/*cout << "Please input your choice:\n" << endl;
	cout << "1.Easy" << endl;
	cout << "2.Moderate" << endl;
	cout << "3.Difficult" << endl;
	int input = 0;
	cin >> input;
	switch (input)
	{
	case 1:
		cout << "The degree of difficulty is easy." << endl;
		break;
	case 2:
		cout << "The degree of difficulty is moderate." << endl;
		break;
	case 3:
		cout << "The degree of difficulty is difficult." << endl;
		break;
	default:
		cout << "Wrong choice!" << endl;
		break;
	}*/
	/*for (int i = 0; i < 10; i++)
	{
		if (i == 5)
		{
			break;
		}
		cout << i << endl;
	}*/
	for (int i = 0; i < 10; i++)
	{
		
		for (int j = 0; j < 10; j++)
		{
			if (j == 5)
			{
				break;
			}
			cout << "* ";
		}
		cout << endl;
	}
	return 0;
}