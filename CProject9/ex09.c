//�迭���� �ּڰ� ���ϱ� ���� double �Լ� double ary_min(double*);
#include<stdio.h>
double ary_min(double*);
int main()
{
	double ary[] = { 1.5,2.0,16.4,2.3,3.5 };
	double res;
	res = ary_min(ary); //min�� ary�迭�� �ּڰ��̴ϱ�  main���� �ö� ary�� �迭�Լ��� ��ó �װ� res�� �����Ѵ�
	printf("�ּڰ���%.1lf", res);
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