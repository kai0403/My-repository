#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
int main() {

    int x = 0;
    int y = 0;
    cin >> x;
    cin >> y;
    Sub sub(x, y);
    sub.calculate();
    return 0;
}