#include<stdio.h>
int main()
{
	int val = 10;//����Ÿ�� ���Ϻ����� x
	{//��ȣ�������� ���� �� ��ȣ�� ������ ������
		int val = 20;
		val++;
		printf("val=%d\n", val);
	}
	printf("val=%d\n", val);
	return 0;
}
/*
12�� html�������� ���µ� java�� ���� html�� �ǹ��� ������ �����̴�. 
*/