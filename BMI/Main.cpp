#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	double weight = 0;//体重(kg)
	double height = 0;//身高(m)
	double BMI = 0;//体重指数
	cin >> weight;//输入体重
	cin >> height;//输入身高
	BMI = weight / pow(height, 2);
	if (BMI < 18.5)
	{
		cout << "偏瘦" << endl;
	}
	else if (BMI < 20.9)
	{
		cout << "苗条" << endl;
	}
	else if (BMI <= 24.9)
	{
		cout << "适中" << endl;
	}
	else
	{
		cout << "偏胖" << endl;
	}
	return 0;
}