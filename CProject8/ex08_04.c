#include<stdio.h>

int main()
{
	int num1 = 100, num2 = 200;
	int* pnum;//������ ���� ����
	//num1�� �ּҰ�����
	pnum = &num1;
	//������ pnum�� num1�� ����Ŵ+30�� ���Ѵ�.
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