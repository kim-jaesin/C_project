#include<stdio.h>

int main()
{
	int a = 10;

	printf("논리곱 연산:%d\n", (a > 5) && (a <= 15));//논리곱연산 1
	printf("논리곱 연산:%d\n", (a != 10) || (a = 20));//논리곱연산 1
	printf("논리부정 연산자:%d\n", !((a - 5) > 0));//논리곱연산 0
	printf("피연산자가 상수인 경우:%d\n", -3.4 && (a > 0));//논리곱연산 1
	
	//C언어에서는 0이아닌 모든값을 참으로 인식한다.따라서 4번째줄의 -3.4는 참으로 인식하여
	//1로 인식

	return 0;
}