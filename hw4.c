#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)

{
	int num, i;
	printf("num:");
	scanf("%d", &num);

	for (i = 2; i < num; i++)
		if (num % i == 0)
		{
			printf("is no prime");
			break;
		}
		else
		{
			printf("is prime");
			break;
		}
	return 0;
}