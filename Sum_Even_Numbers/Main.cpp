#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	int n = 0;
	int sum = 0;
	cin >> n;
	while (n > 1000 || n < 1)
	{
		cout << "Wrong number, input again!" << endl;
		cin >> n;
	}
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			sum += i;
		}
	}
	cout << sum << endl;
	return 0;
}