#include<stdio.h>
int sum(int, int);
int mul(int, int);
int max(int, int);
void func(int (*fp)(int, int));
int main()
{
	int sel;
	printf("1.두 정수의 합\n");
	printf("2.두 정수의 곱\n");
	printf("3.두 정수 중에서 큰 값 계산:\n");
	printf("원하는 작업을 선택 하세요:\n");

	scanf_s("%d", &sel);
	switch (sel)
	{
	case 1:
		func(sum);
		break;
	case 2:
		func(mul);
		break;
	case 3:
		func(max);
		break;
	}
}
void func(int (*fp)(int , int ))//이 함수가 인터페이스 역활을 한다. 중간역활
{
	int a, b, c;
	int res;
	printf("두 정수 값을 입력하세요:");
	scanf_s("%d %d", &a, &b);
	res = fp(a, b);
	printf("결과값은:%d\n", res);
}
int sum(int a, int b)
{
	return a+b;
}
int mul(int a, int b)
{
	return a*b;
}
int max(int a, int b)
{
	if(a>b)
		return a;
	else
		return b;
}
/*
인터페이스 = 중간역활을 한다.
이러한 방식을 함수 포인터 라고 한다.

void func(int (*fp)(int , int ))에서 함수 포인터(int (*fp))를 사용한 이유:
func(sum)에서 func와sum이 둘다 함수인데 func가sum이란 함수에서 처리를 
해야하니까 주소값이 필요하 함수포인터로 쓴거다


함수 포인터 선언에서는 매개변수 이름이 선택 사항 (int, int)
일반적으로 함수 포인터를 정의할 때는 생략하는 것이 관례
*/