#include<stdio.h>

int main()
{
	int nData = 10, nNewData = 20;
	int nReselt = 10;

	printf("%d\n", nData == nReselt || nData > nNewData);//1,���� �ϳ������̸� ������ ��
	//(��||����)
	//printf("%d\n", nData != nReselt || nData > nNewData);
	//0,(����||����) ||�� �Ǵ��̶� �ڿ����� üũ��
	printf("%d\n", nData != nReselt && nData > nNewData);//&&�� �Ѵ����϶�,�ڿ����� ���� ����
	printf("%d\n", nData >= nReselt && ++nNewData);//�տ� �� �ڿ��� �� ++nNewData��21������ 
	                                               //C������ 0�̾ƴ� ���ڴ� ��� ���̴�.
	printf("%d\n", nNewData);//21
	return 0;
}
/*(==)=����, (||)=�Ǵ� or*/