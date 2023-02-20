#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
int main()
{
	Complex* c1 = Assgin(1, 2);
	Complex* c2 = Assgin(3, 4);
	Complex* ret1 = Add(c1, c2);
	printf("%f+(%fi)\n", ret1->realpart, ret1->imagpart);
	Complex* ret2 = Subtract(c1, c2);
	printf("%f+(%fi)\n", ret2->realpart, ret2->imagpart);
	Complex* ret3 = Multiple(c1, c2);
	printf("%f+(%fi)\n", ret3->realpart, ret3->imagpart);
	Complex* ret4 = Divide(c1, c2);
	printf("%f+(%fi)\n", ret4->realpart, ret4->imagpart);
	free(c1);
	c1 = NULL;
	free(c2);
	c2 = NULL;
	free(ret1);
	ret1 = NULL;
	free(ret2);
	ret2 = NULL;
	free(ret3);
	ret3 = NULL;
	free(ret4);
	ret4 = NULL;
	return 0;
}