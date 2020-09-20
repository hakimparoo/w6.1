#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void cut(char*);
int main()
{
	char* p1, str[50];
	p1 = str;
	printf(" Input string => ");
	scanf("%s", str);
	cut(p1);
}
void cut(char* a)
{
	while (*a != '\0')
	{
		if (*a == *(a + 1))
		{

		}
		else
		{
			printf("%c", *a);
		}
		a++;
	}
}