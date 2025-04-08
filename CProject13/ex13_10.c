#include<stdio.h>
int sum(int, int);//함수 원형 선언
//함수 포인터:함수포인터는 함수의 이름이다.
//함수명은 함수가 정의되어 있는 메모리의 위치값이면 함수를 가리킨다.
int main()
{
	int(* fp)(int,int);//함수포인터 변수 선언
	int res;
	fp = sum;//함수명을 함수포인터 변수에 저장한다
	res=fp(10,20);//함수포인터 변수로 함수를 호출한다.
	printf("result:%d", res);

	return 0;
}

int sum(int a, int b)
{

	return a + b;
}