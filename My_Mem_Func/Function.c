#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
void* MyMemcpy(void* dest, const void* src, size_t n)
{
	assert(dest && src);
	void* ret = dest;
	for (int i = 0; i < n; i++)
	{
		*(char*)dest = *(char*)src;
		++(char*)dest;
		++(char*)src;
	}
	return ret;
}

void* MyMemmove(void* dest, const void* src, size_t n)
{
	assert(dest && src);
	void* ret = dest;
	if (dest < src || dest > (char*)src + n - 1)
	{
		for (int i = 0; i < n; i++)
		{
			*(char*)dest = *(char*)src;
			++(char*)dest;
			++(char*)src;
		}
	}
	else
	{
		for (int i = n - 1; i >= 0; i--)
		{
			*((char*)dest + i) = *((char*)src + i);
		}
	}
	return ret;
}

int MyMemcmp(const void* str1, const void* str2, size_t n)
{
	assert(str1 && str2);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		if (*((char*)str1 + i) > *((char*)str2 + i))
		{
			return 1;
		}
		else if (*((char*)str1 + i) < *((char*)str2 + i))
		{
			return -1;
		}
	}
	return 0;
}

void* MyMemset(void* s, int c, size_t n)
{
	assert(s);
	void* ret = s;
	int i = 0;
	for (i = 0; i < n; i++)
	{
		*((char*)s + i) = c;
	}
	return ret;
}
