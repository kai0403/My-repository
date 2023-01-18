#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	int n = 0;
	cin >> n;
	while (n < 1 || n > 9)
	{
		cout << "Wrong number, input again!" << endl;
		cin >> n;
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j << " * " << i << " = " << i * j << "    ";
		}
		cout << endl;
	}
	return 0;
}