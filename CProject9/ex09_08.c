#include<stdio.h>
double ary_min(double*);

//배열에서 최솟값 구하기
int main()
{
	double ary[] = { 1.5,2.0,16.4,2.3,3.5 };
	double res;
	res = ary_min(ary);// //min이 ary배열의 최솟값이니까  main으로 올때 ary의 배열함수를 거처 그걸 res에 저장한다
	printf("배열의최솟값:%.1lf\n", res);
	return 0;
}

double ary_min(double*ap)
{
	int i;
	double min;
	min= ap[0];
	for (i = 0; i < 5; i++)
	{
		if (ap[i] < min)
		{
			min = ap[i];
		}
	}
	return min;
}
/*
if문이 필요한 이유:최솟값을 구하려면 조건부로 값을 갱신해야 함
조건 없이 값을 덮어쓰면 항상 마지막 값이 결과로 나오므로 의미가 없음

i의값이0일때  min과 같음 거짓이지만 for문으로 계속 반복 따라서 배열값의 순서가 바뀌더라도 가능

i=1로 해도 가능, 첫 번째 값을 제외한 비교를 만들 수 있음,
하지만 모든 값을 동일하게 처리하는 단순성의 장점을 잃게 된다.
*/
