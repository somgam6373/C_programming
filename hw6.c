#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n;
	int arr[5];
	
	printf("Please input five integers:");
	scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);

	printf("Odd numbers:");
	for (n = 0; n < 5; n++)
	{
		if (arr[n] % 2 == 1)
			printf("%3d", arr[n]);
	}

	printf("\nEven numbers:");
	for (n = 0; n < 5; n++)
	{
		if (arr[n] % 2 == 0)
			printf("%3d", arr[n]);
	}
	return 0;
}
