#include<stdio.h>
double get_next(double*);
double get_before(double*);
int i;//default:0 ����Ʈ �� 0, ��������..,����ƽ�̶� �ٸ� ����,
int main()
{
	double ary[] = { 0.1,0.3,0.5,0.7,0.9 };
	printf("nextȣ��:%.1lf\n", get_next(ary));//0.1 i=0
	printf("nextȣ��:%.1lf\n", get_next(ary));//0.3 i=1
	printf("beforeȣ��:%.1lf\n", get_before(ary));//0.5 i=2
	printf("beforeȣ��:%.1lf\n", get_before(ary));//0.3 i=1
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
static�� �ܺκ�������:
�ܺκ����� �ٸ� ���Ͽ����� �� �� �ִ�. static�� �ȵ� 

����:������ ������ ���� �ֳ� ?
*/