#include<stdio.h>

int main()
{
	double ary[] = { 1.5,20.1,16.4,2.3,3.5 };
	int i;
	double tot=0;
	double avg;
	for (i = 0; i < 5; i++)
	{
		tot = tot + *(ary+i);
	}
	avg = tot / i;//또 사용할것 아니니 5로 사용 
	printf("나이의 총합:%.2lf\n", tot);
	printf("나이의 평균:%.2lf\n", avg);
	return 0;
}
/*
다음 배열이 평균값을 구하여 출력하는 프로그램을 작성하시오.
단, 배열요소를 참조할 때는 배열명에 정수값을 더하는 
포인터 표현을 사용하여 평균 소수점 이하 둘째자리 까지 출력하시오.
double ary[]={1,5,20,1,16,4,2.3,3.5};
시험에 나옴
*/