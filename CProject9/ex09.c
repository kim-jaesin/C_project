//배열에서 최솟값 구하기 변수 double 함수 double ary_min(double*);
#include<stdio.h>
double ary_min(double*);
int main()
{
	double ary[] = { 1.5,2.0,16.4,2.3,3.5 };
	double res;
	res = ary_min(ary); //min이 ary배열의 최솟값이니까  main으로 올때 ary의 배열함수를 거처 그걸 res에 저장한다
	printf("최솟값은%.1lf", res);
	return 0;
}
double ary_min(double*ap)
{
	int i;
	double min=ap[0];
	for (i = 0; i < 5; i++)
	{
		if (ap[i] < min)
		{
			min = ap[i];
		}
	}
	return min;
}