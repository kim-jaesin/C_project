#include<stdio.h>

int main()
{
	int num1, num2, res;

	res = num1 + num2;

	printf("두 정수값을 입력하시오:");
	scanf_s("%d%d" , &num1 , &num2);

	printf("num1+num2는 %d", res);


	return 0;
}