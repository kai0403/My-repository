#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	//int int = 10;error,��ʶ�������ǹؼ���(int)
	//float u8-2 = 1.0;error, ��ʶ��ֻ�������֡��»��ߺ���ĸ���
	//double 2_h = 2.5;error, ��ʶ����������ĸ���»��߿�ͷ
	//int Int = 10;��ȷ��Int���ǹؼ���int����ʶ�����ִ�Сд
	//cout << "short " << sizeof(short) << endl;//short����ռ2���ֽ�
	//cout << " int " << sizeof(int) << endl;//int����ռ4���ֽ�
	//cout << " long " << sizeof(long) << endl;//long������window64λ��ռ4���ֽ�
	//cout << "long long " << sizeof(long long) << endl;//long long����ռ8���ֽ�
	//short num1 = 32769;//short�������ܱ�ʾ���ķ�Χ��(-32768 - 32767)
	//int num2 = 10;
	//long num3 = 10;
	//long long num4 = 10;
	//cout << num1 << endl;
	//float num1 = 3.14f;//ϵͳĬ�Ͻ�С����Ϊdouble�ͣ���С�������f��ʾ��Ϊfloat��
	//float f1 = 3.1415926;
	//cout << f1 << endl;//ϵͳĬ�����6λ��Ч���ֵ�С��
	float f1 = 2e2;//��ѧ������f1 = 2 * 10 ^ 2 
	cout << f1 << endl;
	float f2 = 3e-2;//��ѧ������f2 = 3 * 10 ^ (-2)
	cout << f2 << endl;
	return 0;
}