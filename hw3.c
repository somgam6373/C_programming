#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)

{
	int a, b, c;
	for(a = 0; a < 5; a++)
	{
		for (b = a; b <= 5; b++)
		{
			printf(" ");
		}
		for (c = 0; c <= a*2; c++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}