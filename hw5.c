#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void tentotwo(int n);

int main(void)
{
	int n;
	printf("���� ���� n�� �Է��Ͻÿ�:");
	scanf("%d", &n);
	tentotwo(n);
	return 0;
}

void tentotwo(int n)
{
	if (n == 0)
		return;
	tentotwo(n / 2);
	printf("%d", n % 2);
}