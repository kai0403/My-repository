#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
//int main() 
//{
//
//    BaseCalculator* cal = new AddCalculator;
//    cal->m_A = 10;
//    cal->m_B = 20;
//    cout << cal->getResult() << endl;
//    delete cal;
//
//    cal = new SubCalculator;
//    cal->m_A = 20;
//    cal->m_B = 10;
//    cout << cal->getResult() << endl;
//    delete cal;
//
//    return 0;
//}
int main() 
{
	int x, y, z;
	cin >> x >> y >> z;
	cuboid a(x, y, z);
	rectangle b(x, y);

	rectangle* p = &b;
	cout << p->getval() << '\n';

	p = &a;
	cout << p->getval();
	return 0;
}