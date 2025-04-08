#include<stdio.h>
int* increase();
int main()
{
	int i;
	int* sp;
	for (i = 0; i < 5; i++)
	{
		sp=increase();//포인터 함수로 주소값이 넘어옴 sp가 sum을 가르킴
		printf("sum:%d",*sp);//sum=합,포인터 변수가 가르키는 값 결과는 1,2,3,4,5
	}
	return 0;
}

int* increase()//주소 반환(int*)실수면 double
{
	static int sum;

	sum++;

	return &sum;//여기서 넘어가는 값이 주소값 이여야 한다.  call by value값을 넘기면서 반환한다.
}
/*
&sum=call by address(reference)

int*=포인터 변수가 가르키는 곳의 타입

sp가 sum을 가르키는이유:
변수 개념은 전부 스택 sum은static이니 sum의 주소  increase()를 붙여야한다.
*/