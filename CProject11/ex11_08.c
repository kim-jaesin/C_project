#include<stdio.h>
double get_next(double*);
double get_before(double*);
int i;//default:0 디폴트 값 0, 전역변수..,스태틱이랑 다른 개념,
int main()
{
	double ary[] = { 0.1,0.3,0.5,0.7,0.9 };
	printf("next호출:%.1lf\n", get_next(ary));//0.1 i=0
	printf("next호출:%.1lf\n", get_next(ary));//0.3 i=1
	printf("before호출:%.1lf\n", get_before(ary));//0.5 i=2
	printf("before호출:%.1lf\n", get_before(ary));//0.3 i=1
	return 0;
}

double get_next(double*ap)
{
	double temp;
	temp = ap[i];
	i++;
	return temp;
}

double get_before(double*ap)
{
	double temp;
	temp = ap[i];
	i--;
	return temp;
}
/*
static과 외부변수차이:
외부변수는 다른 파일에서도 쓸 수 있다. static은 안됨 

개념:변수의 종류는 뭐가 있나 ?
*/