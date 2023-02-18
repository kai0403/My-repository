#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
char* MyStrncpy(char* dest, const char* src, size_t n)
{
	char* str = dest;
	int len1 = strlen(dest);//Ŀ���ַ�������
	int len2 = strlen(src);//Դ�ַ�������
	if (len1 < len2)//Ŀ���ַ�������С��Դ�ַ�������
	{
		/*printf("The size of destination is too small!\n");*///������ʾ
		return "The size of destination is too small!";//ǿ���˳�����
	}
	else if (n > len1 + 1)//��Ҫ�������ַ�����������Ŀ���ַ����ܹ����ܵĶ��
	{
		/*printf("The number of copied characters is too big!\n");*///������ʾ
		return "The number of copied characters is too big!";//ǿ���˳�
	}
	//Ŀ���ַ������ȴ��ڵ���Դ�ַ�������
	//1.n����len2,���൱��strcpy
	if (n > len2)
	{
		while (*src != '\0')
		{
			*dest = *src;
			dest++;
			src++;
		}
		int i = 0;
		for (i = 0; i < len1 - len2; i++)
		{
			*dest = NULL;
			dest++;
		}
		*dest = '\0';
	}
	//2.nС�ڵ���len2
	else
	{
		while (*src != '\0' && n > 0)//��ǰn���ַ������ɹ�
		{
			*dest = *src;
			dest++;
			src++;
			n--;
		}
		//����Ҫ��dest��ָ����ַ�����ʣ���ַ��ÿ�
	}
	return str;
}

int MyStrncmp(const char* str1, const char* str2, size_t num)
{
	//num�������޴󣬱Ƚ��Ƿ�����Ǹ����ַ��Ƿ���ͬ�Լ��Ƿ�Ϊ'\0'����
	while (*str1 && *str2 && num > 0)
	{
		if (*str1 > *str2)
		{
			return 1;
		}
		else if (*str1 < *str2)
		{
			return -1;
		}
		str1++;
		str2++;
		num--;
	}
	return 0;
}

char* MyStrncat(char* dest, const char* src, int num, int size_str1)
{
	int len1 = strlen(dest);//Ŀ�ĵ��ַ����ĳ���
	int len2 = strlen(src);//Դ�ַ����ĳ���
	//1.num > len2, ���൱��strcat
	if (num > len2)
	{
		if (size_str1 - len1 < len2 + 1)
		{
			return "The size of destination is too small!";
		}
		char* str = dest;//����dest��ָ�ַ������׵�ַ
		//����destָ���Լ���ĩβ��'\0'
		while (*dest != '\0')
		{
			dest++;
		}
		//��src��ָ�ַ����ӵ�destĩβ��
		while (*src)
		{
			*dest = *src;
			dest++;
			src++;
		}
		*dest = '\0';//��dest��ָ�ַ���ĩβ������'\0'
		return str;
	}
	else
	{
		if (size_str1 - len1 < num + 1)
		{
			return "The size of destination is too small!";
		}
		char* str = dest;//����dest��ָ�ַ������׵�ַ
		//����destָ���Լ���ĩβ��'\0'
		while (*dest != '\0')
		{
			dest++;
		}
		//��src��ָ�ַ����ӵ�destĩβ��
		while (*src && num > 0)
		{
			*dest = *src;
			dest++;
			src++;
			num--;
		}
		*dest = '\0';//��dest��ָ�ַ���ĩβ������'\0'
		return str;
	}
}