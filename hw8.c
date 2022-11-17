#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double arr[5];
double* ptr = &arr;

int devitation();
int main(void)
{
	printf("Enter 5 real numbers:");
	scanf("%lf %lf %lf %lf %lf", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
	devitation();
	return 0;
}
int devitation()
{
	double num1 = *ptr;
	double num2 = *(ptr + 1);
	double num3 = *(ptr + 2);
	double num4 = *(ptr + 3);
	double num5 = *(ptr + 4);
	double average = (num1 + num2 + num3 + num4 + num5) / 5;
	
	double pow1 = pow(num1 - average, 2)*0.2;
	double pow2 = pow(num2 - average, 2)*0.2;
	double pow3 = pow(num3 - average, 2)*0.2;
	double pow4 = pow(num4 - average, 2)*0.2;
	double pow5 = pow(num5 - average, 2)*0.2;

	double total = pow1 + pow2 + pow3 + pow4 + pow5;
	double result = sqrt(total);
	printf("%.3f", result);
}