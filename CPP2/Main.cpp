#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	//int int = 10;error,标识符不能是关键字(int)
	//float u8-2 = 1.0;error, 标识符只能由数字、下划线和字母组成
	//double 2_h = 2.5;error, 标识符必须由字母或下划线开头
	//int Int = 10;正确，Int不是关键字int，标识符区分大小写
	//cout << "short " << sizeof(short) << endl;//short类型占2个字节
	//cout << " int " << sizeof(int) << endl;//int类型占4个字节
	//cout << " long " << sizeof(long) << endl;//long类型在window64位下占4个字节
	//cout << "long long " << sizeof(long long) << endl;//long long类型占8个字节
	//short num1 = 32769;//short类型所能表示数的范围是(-32768 - 32767)
	//int num2 = 10;
	//long num3 = 10;
	//long long num4 = 10;
	//cout << num1 << endl;
	//float num1 = 3.14f;//系统默认将小数视为double型，在小数后面加f表示其为float型
	//float f1 = 3.1415926;
	//cout << f1 << endl;//系统默认输出6位有效数字的小数
	float f1 = 2e2;//科学计数法f1 = 2 * 10 ^ 2 
	cout << f1 << endl;
	float f2 = 3e-2;//科学计数法f2 = 3 * 10 ^ (-2)
	cout << f2 << endl;
	return 0;
}