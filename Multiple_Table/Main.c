#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
int main()
{
    int i = 0;
    int j = 0;
    int row = 0;
    int col = 0;
    for (i = 0; i < 81; ++i)
    {
        row = i / 9 + 1;
        col = i % 9 + 1;
        printf("%d*%d=%2d\t", row, col, row * col);
        if ((i + 1) % 9 == 0)
            printf("\n");
    }
	return 0;
}