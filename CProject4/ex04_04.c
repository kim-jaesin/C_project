#include<stdio.h>

int main()
{
	int nData = 10, nNewData = 20;
	int x = 0, y = 0;

	printf("%d\n", !nData && nNewData);//!nData=10�� �ƴϴ� �������� nNewData�Ǵ� x ����
	                                   //���� ��� 0
	printf("%d\n", !(nData && x)); // nData=�� x=����
	printf("%d\n", !nData && x); //0
	printf("%d\n", x || !y);  //x=���� �ڿ��� �Ű� �Ⱦ� 
	printf("%d\n", !(x && !y));//=1 x�� ����,�ڿ��� �Ű� �Ⱦ� ������ �տ�! �پ 1(��)�� ����

	return 0;
}