#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
int main()
{
    string str;
    getline(cin, str);
    int whitespace = 0;
    int digits = 0;
    int chars = 0;
    int others = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 48 && str[i] <= 57)
        {
            digits++;
        }
        else if (str[i] >= 65 && str[i] <= 90 || str[i] >= 97 && str[i] <= 122)
        {
            chars++;
        }
        else if (str[i] == ' ')
        {
            whitespace++;
        }
        else
        {
            others++;
        }
    }
    cout << "chars : " << chars
         << " whitespace : " << whitespace
         << " digits : " << digits
         << " others : " << others << endl;
	return 0;
}