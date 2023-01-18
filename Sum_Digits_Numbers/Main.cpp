#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	int n = 9;
	long long int n1 = n;
	long long int sum = n;
	for (int i = 0; i < 9; i++)
	{
		n1 = n1 * 10 + n;
		sum += n1;
	}
	cout << sum << endl;
	return 0;
}