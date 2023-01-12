#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include"Function.h"
#define M 9
int main()
{
	int arr[M] = { 1,2,3,4,5,6,7,8,9 };
	int i = 0;
	int j = M - 1;
	while (i < j)
	{
		int temp = *(arr + i);
		*(arr + i) = *(arr + j);
		*(arr + j) = temp;
		i++;
		j--;
	}
	for (i = 0; i < M; i++)
	{
		printf("%-4d", arr[i]);
	}
	return 0;
}