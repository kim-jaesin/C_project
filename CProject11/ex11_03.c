#include<stdio.h>
int TestFunc()
{
	//1. int nResult = 0;
	static int nResult = 10;
	nResult++;
	return nResult;//1,값을 되돌리고 함수 종료(종료가 되면 메모리에서 사라진다.)
}
int main()
{
	printf("%d\n", TestFunc());//1  static int nResult = 10;로 하면 11 nResult++;때문에 1증가
	printf("%d\n", TestFunc());//1(다시 호출하면 다시 생성) 12 nResult++; static때문에 안없어지고 1더 증가
	printf("%d\n", TestFunc());//1                          13 nResult++; static때문에 안없어지고 1더 증가
	return 0;
}
/*
printf("%d\n", TestFunc(10,20)); 10,20을 주는건 인자 값 받는건 매개변수

static의 공간이 별도로 있다.함수가 없어지거나 말거나 상관없다.
공용공간이다.중요(언어마다 다 있다.)     -정적 변수- 
이건 프로그램 종료하면 사라짐 그전에는 유지한다. 

함수가 첫번째 줄에 나오면 선언 x 그 뒤에 나오면 선언o
*/