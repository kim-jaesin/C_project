#include<stdio.h>

int main()
{
	int nData = 10;
	int* pnData = &nData;

	printf("%d,%d\n", nData, *pnData);//10,10
	printf("%p,%p\n", &nData, pnData);//nData�� �����ּ�,p�ǰ� ��� (a�� �ּҿ� ����)

	*pnData = 20;//�߿� :�����͸� ����Ͽ� �Լ��� ���ڸ� �����ϸ� �Լ����� ���� ������ ���� ���� ������ �� �ִ�.**
	printf("%d\n", nData);

	return 0;
}
//������ ������ �ּҷ� �ް� �Ǿ� �ִ�.
// *ap=*ap+10 