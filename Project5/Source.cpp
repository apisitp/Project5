#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num;
	printf("enter number");
	scanf("%d", &num);
	if (num > 0)
	{
		printf("more than zero");
	}
	else
	{
		printf("less or equal zero");
	}
	return 0;
}