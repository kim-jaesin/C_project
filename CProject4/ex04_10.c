#include<stdio.h>

int main()
{
	int nData = 0, x = 10, y = 20;
	//���� ������
	nData = x < y ? x : y; //���ǽ�? ��:���� ���⼭ nDaTa�� 10���� �����µ�
	//�� ������ x < y=��(1),x : y=����(0)
	printf("%d\n", nData);

	if (x<y)
		nData = x;
	else
		nData = y;
	printf("%d\n", nData);



	return 0;
}
/*
?=���ǽ��� ���� ���: ? �ٷ� ���� ���� ��ȯ�մϴ�.
:=���ǽ��� ������ ���: : �ٷ� ���� ���� ��ȯ�մϴ�.
*/