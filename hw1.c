#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int num1, num2;
	int result1, result2, result3;
	printf("첫번째 정수:");
	scanf("%d", &num1);
	printf("두번째 정수:");
	scanf("%d", &num2);

	result1 = num1 & num2;
	printf("%d & %d = %d \n",num1, num2, result1);
	result2 = num1 | num2;
	printf("%d | %d = %d \n",num1, num2, result2);
	result3 = num1 ^ num2;
	printf("%d ^ %d = %d \n", num1, num2, result3);


	return 0;

}
