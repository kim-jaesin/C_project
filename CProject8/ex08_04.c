#include<stdio.h>

int main()
{
	int num1 = 100, num2 = 200;
	int* pnum;//포인터 변수 선언
	//num1의 주소값대입
	pnum = &num1;
	//포인터 pnum이 num1을 가리킴+30을 더한다.
	*pnum = *pnum+30;
	printf("num1=%d\n", num1);
	//(*pnum)+=30;
	*pnum = *pnum - 30;
	printf("num1=%d\n", num1);

	pnum = &num2;
	*pnum = *pnum - 30;
	printf("num2=%d\n", num2);

	return 0;
}