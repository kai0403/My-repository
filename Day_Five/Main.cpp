#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
//int main()
//{
//	int score = 0;
//	cout << "Please input a score:" << endl;
//	cin >> score;
//	if (score > 600)
//	{
//		cout << "Congratulations, you are admitted to first-class university!" << endl;
//		if (score > 700)
//		{
//			cout << "Congratulations, you are admitted to Tsinghua University!" << endl;
//		}
//		else if (score > 650)
//		{
//			cout << "Congratulations, you are admitted to Peking University!" << endl;
//		}
//		else
//		{
//			cout << "Congratulations, you are admitted to Renmin University of China!" << endl;
//		}
//	}
//	else if (score > 500)
//	{
//		cout << "Congratulations, you are admitted to second-class university!" << endl;
//	}
//	else
//	{
//		cout << "Sorry, you are not admitted to undergraduate course." << endl;
//	}
//	return 0;
//}
//三只小猪称体重
//int main()
//{
//	int A = 0;
//	int B = 0;
//	int C = 0;
//	cout << "Please input the weight of the pig_A:" << endl;
//	cin >> A;
//	cout << "Please input the weight of the pig_B:" << endl;
//	cin >> B;
//	cout << "Please input the weight of the pig_C:" << endl;
//	cin >> C;
//	if (A == B || A == C || B == C)
//	{
//		if (A == B)
//		{
//			if (A > C)
//			{
//				cout << "The heaviest pig is pig_A or pig_B." << endl;
//			}
//			else if (A < C)
//			{
//				cout << "The heaviest pig is pig_C." << endl;
//			}
//			else
//			{
//				cout << "The heaviest pig is pig_A or pig_B or pig_C." << endl;
//			}
//		}
//		else if (A == C)
//		{
//			if (A > B)
//			{
//				cout << "The heaviest pig is pig_A or pig_C." << endl;
//			}
//			else if (A < B)
//			{
//				cout << "The heaviest pig is pig_B." << endl;
//			}
//			else
//			{
//				cout << "The heaviest pig is pig_A or pig_B or pig_C." << endl;
//			}
//		}
//		else
//		{
//			if (A > B)
//			{
//				cout << "The heaviest pig is pig_A." << endl;
//			}
//			else if (A < B)
//			{
//				cout << "The heaviest pig is pig_B or pig_C." << endl;
//			}
//			else
//			{
//				cout << "The heaviest pig is pig_A or pig_B or pig_C." << endl;
//			}
//		}
//	}
//	else
//	{
//		if (A > B)//A比B重
//		{
//			if (A > C)//A比C重
//			{
//				cout << "The heaviest pig is pig_A." << endl;
//			}
//			else//C比A重
//			{
//				cout << "The heaviest pig is pig_C." << endl;
//			}
//		}
//		else//B比A重
//		{
//			if (B > C)//B比C重
//			{
//				cout << "The heaviest pig is pig_B." << endl;
//			}
//			else//C比B重
//			{
//				cout << "The heaviest pig is pig_C." << endl;
//			}
//		}
//	}
//	return 0;
//}

//三目运算符
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	c = a > b ? b : a;
//	(a < b ? a : b) = 100;// a = 100;
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//	return 0;
//}

//switch语句
int main()
{
	int score = 0;
	int rank = 0;
	cout << "Please rate the movie:" << endl;
	cin >> score;
	if (score >= 9 && score <= 10)
	{
		rank = 3;
	}
	else if (score >= 8)
	{
		rank = 2;
	}
	else if (score >= 7)
	{
		rank = 1;
	}
	else
	{
		rank = 0;
	}
	switch (rank)
	{
	case 3:
		cout << "The moive is classical." << endl;
		break;
	case 2:
		cout << "The moive is great." << endl;
		break;
	case 1:
		cout << "The moive is so far so good." << endl;
		break;
	default:
		cout << "The moive is boring." << endl;
		break;
	}
	return 0;
}