#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	double h = 0;
	int f = 0;
	cin >> h >> f;
	double d = h;
	double h2 = 0;
	if (f == 1)
	{
		cout << setiosflags(ios::fixed) << setprecision(1) << h << " " << h / 2 << endl;
	}
	else
	{
		for (int i = 0; i <= f - 2; i++)
		{
			d += pow(0.5, i) * h;
		}
		cout << setiosflags(ios::fixed) << setprecision(1) << d << " " << h * pow(0.5, f) << endl;
	}
	return 0;
}