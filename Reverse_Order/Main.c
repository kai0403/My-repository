#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
int main()
{
	int i = 0, j = 9;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	while (i < j)
	{
		int temp = * (arr + i);
		*(arr + i) = *(arr + j);
		*(arr + j) = temp;
		i++;
		j--;
	}
	for (int k = 0; k < 10; k++)
	{
		printf("%d ", arr[k]);
	}
	return 0;
}