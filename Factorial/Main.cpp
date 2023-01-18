#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	int n = 0;
	long long int Fac = 1;
	cin >> n;
	while (n > 20 || n < 1)
	{
		cout << "Wrong number, input again!" << endl;
		cin >> n;
	}
	for (int i = 1; i <= n; i++)
	{
		Fac *= i;
	}
	cout << Fac << endl;
	return 0;
}