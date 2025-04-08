#include<stdio.h>

int main()
{
	int a = 10, b = 20;//지역변수
	printf("바꾸기 전a:%d,b:%d\n", a, b);
	{
		int temp = 0;//{}밖에서는 안된다. {}안에서만 가능,지역변수
		temp = a;
		a = b;
		b = temp;
	}
	printf("바꾼 후a:%d,b:%d\n", a, b);
	//printf("temp=%d\n",temp);


	return 0;
}
/*개념:
지역변수의 개념 
지역변수가 사용할수 있는 범위
해당되는 괄호
지역변수는 함수가 종료되면 종료 된다.(temp)
변수선언된 위치와 {}가 중요하다.
*/
