#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "Function.h"
int main()
{/*
	int a = 10000;
	FILE* pf = fopen("test.txt", "wb");
	fwrite(&a, 4, 1, pf);
	fclose(pf);
	pf = NULL;*/
	/*FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}*/
	/*fputc('h', pf);
	fputc('e', pf);
	fputc('l', pf);
	fputc('l', pf);
	fputc('o', pf);
	fputc(' ', pf);
	fputc('w', pf);
	fputc('o', pf);
	fputc('r', pf);
	fputc('l', pf);
	fputc('d', pf);*/
	/*int i = 0;
	char ch = '0';
	for (i = 0; i < 11; i++)
	{
		ch = fgetc(pf);
		printf("%c ", ch);
	}
	fclose(pf);
	pf = NULL;*/
	/*FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	char str1[12] = "0";
	char* str3 = fgets(str1, 6, pf);
	puts(str3);
	char* str4 = fgets(str3, 7, pf);
	puts(str4 + 1);
	fclose(pf);
	pf = NULL;*/
	/*FILE* pf = fopen("test.txt", "w");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	fputs("Hello ", pf);
	fputs("World!", pf);
	fclose(pf);
	pf = NULL;*/
	//char buf[20] = "0";
	///*fgets(buf, 20, stdin);
	//fputs(buf, stdout);*/
	//gets(buf);
	//puts(buf);
	/*FILE* pf = fopen("test.txt", "w");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	struct S s = { 0 };
	fprintf(pf, "%d %f %s", s.i, s.f, s.str);
	fclose(pf);
	pf = NULL;*/
	/*FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}*/
	/*struct S s = { 0 };
	fscanf(stdin, "%d %f %s", &(s.i), &(s.f), s.str);
	fprintf(stdout, "%d, %.2f, %s\n", s.i, s.f, s.str);*/
	/*fclose(pf);
	pf = NULL;*/
	/*struct S s1 = { 100, 3.14, "zhangsan" };
	struct S s2 = { 0 };
	char buf[1024] = { 0 };
	sprintf(buf, "%d %f %s", s1.i, s1.f, s1.str);
	printf("%s\n", buf);
	sscanf(buf, "%d %f %s", &(s2.i), &(s2.f), s2.str);
	printf("%d %f %s\n", s2.i, s2.f, s2.str);*/
	/*struct S s1 = { 100, 3.14, "ÕÅÈý" };
	FILE* pf = fopen("test.txt", "wb");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	fwrite(&s1, sizeof(s1), 1, pf);
	fclose(pf);
	pf = NULL;*/
	/*struct S s = { 0 };
	FILE* pf = fopen("test.txt", "rb");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	fread(&s, sizeof(s), 1, pf);
	printf("%d, %f, %s\n", s.i, s.f, s.str);
	fclose(pf);
	pf = NULL;*/
	/*FILE* pf = fopen("test.txt", "w");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return;
	}
	fputs("hello world", pf);
	fclose(pf);
	pf = NULL;*/
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		perror("Open failed");
		return;
	}
	int ch = 0;
	while ((ch = fgetc(pf)) != EOF)
	{
		putchar(ch);
	}
	printf("\n");
	if (ferror(pf))
	{
		printf("End error!\n");
	}
	else if (feof(pf))
	{
		printf("End of file!\n");
	}
	fclose(pf);
	pf = NULL;
	return 0;
}