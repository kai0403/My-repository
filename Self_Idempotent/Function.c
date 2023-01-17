#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
//int IsIdempotent(int n)
//{
//	int num1 = n / 100000;//十万位
//	int num2 = (n % 100000) / 10000;//万位
//	int num3 = (n % 10000) / 1000;//千位
//	int num4 = (n % 1000) / 100;//百位
//	int num5 = (n % 100) / 10;//十位
//	int num6 = n % 10;//个位
//	
//	if (num1 != 0)//六位数
//	{
//		if (pow(num1, 6) + pow(num2, 6) + pow(num3, 6) + pow(num4, 6) + pow(num5, 6) + pow(num6, 6) == n)
//		{
//			return 1;
//		}
//		else
//		{
//			return 0;
//		}
//	}
//	else if (num2 != 0)//五位数
//	{
//		if (pow(num2, 5) + pow(num3, 5) + pow(num4, 5) + pow(num5, 5) + pow(num6, 5) == n)
//		{
//			return 1;
//		}
//		else
//		{
//			return 0;
//		}
//	}
//	else if (num3 != 0)//四位数
//	{
//		if (pow(num3, 4) + pow(num4, 4) + pow(num5, 4) + pow(num6, 4) == n)
//		{
//			return 1;
//		}
//		else
//		{
//			return 0;
//		}
//	}
//	else if (num4 != 0)//三位数
//	{
//		if (pow(num4, 3) + pow(num5, 3) + pow(num6, 3) == n)
//		{
//			return 1;
//		}
//		else
//		{
//			return 0;
//		}
//	}
//	else if (num5 != 0)//两位数
//	{
//		if (pow(num5, 2) + pow(num6, 2) == n)
//		{
//			return 1;
//		}
//		else
//		{
//			return 0;
//		}
//	}
//	else//一位数
//	{
//		return 1;
//	}
//}