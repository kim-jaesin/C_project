#include<stdio.h>
int sum(int, int);
int mul(int, int);
int max(int, int);
void func(int (*fp)(int, int));
int main()
{
	int sel;
	printf("1.�� ������ ��\n");
	printf("2.�� ������ ��\n");
	printf("3.�� ���� �߿��� ū �� ���:\n");
	printf("���ϴ� �۾��� ���� �ϼ���:\n");

	scanf_s("%d", &sel);
	switch (sel)
	{
	case 1:
		func(sum);
		break;
	case 2:
		func(mul);
		break;
	case 3:
		func(max);
		break;
	}
}
void func(int (*fp)(int , int ))//�� �Լ��� �������̽� ��Ȱ�� �Ѵ�. �߰���Ȱ
{
	int a, b, c;
	int res;
	printf("�� ���� ���� �Է��ϼ���:");
	scanf_s("%d %d", &a, &b);
	res = fp(a, b);
	printf("�������:%d\n", res);
}
int sum(int a, int b)
{
	return a+b;
}
int mul(int a, int b)
{
	return a*b;
}
int max(int a, int b)
{
	if(a>b)
		return a;
	else
		return b;
}
/*
�������̽� = �߰���Ȱ�� �Ѵ�.
�̷��� ����� �Լ� ������ ��� �Ѵ�.

void func(int (*fp)(int , int ))���� �Լ� ������(int (*fp))�� ����� ����:
func(sum)���� func��sum�� �Ѵ� �Լ��ε� func��sum�̶� �Լ����� ó���� 
�ؾ��ϴϱ� �ּҰ��� �ʿ��� �Լ������ͷ� ���Ŵ�


�Լ� ������ ���𿡼��� �Ű����� �̸��� ���� ���� (int, int)
�Ϲ������� �Լ� �����͸� ������ ���� �����ϴ� ���� ����
*/