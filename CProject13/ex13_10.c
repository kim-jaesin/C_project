#include<stdio.h>
int sum(int, int);//�Լ� ���� ����
//�Լ� ������:�Լ������ʹ� �Լ��� �̸��̴�.
//�Լ����� �Լ��� ���ǵǾ� �ִ� �޸��� ��ġ���̸� �Լ��� ����Ų��.
int main()
{
	int(* fp)(int,int);//�Լ������� ���� ����
	int res;
	fp = sum;//�Լ����� �Լ������� ������ �����Ѵ�
	res=fp(10,20);//�Լ������� ������ �Լ��� ȣ���Ѵ�.
	printf("result:%d", res);

	return 0;
}

int sum(int a, int b)
{

	return a + b;
}