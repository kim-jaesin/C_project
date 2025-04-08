#include<stdio.h>
int num3(int num1, int num2);
int main()
{
	int num1, num2, sum;
	printf("첫 번째 정수를 입력하시오:");
	scanf_s("%d", &num1);
	printf("두 번째 정수를 입력하시오:");
	scanf_s("%d", &num2);
	sum = num3(num1, num2);
	printf("두 정수의 합은 %d입니다.", sum);
	return 0;
}
int num3(int num1,int num2)
{
	int sum;
	sum = num1 + num2;
	return sum;
}