#include<stdio.h>
int TestFunc()
{
	//1. int nResult = 0;
	static int nResult = 10;
	nResult++;
	return nResult;//1,���� �ǵ����� �Լ� ����(���ᰡ �Ǹ� �޸𸮿��� �������.)
}
int main()
{
	printf("%d\n", TestFunc());//1  static int nResult = 10;�� �ϸ� 11 nResult++;������ 1����
	printf("%d\n", TestFunc());//1(�ٽ� ȣ���ϸ� �ٽ� ����) 12 nResult++; static������ �Ⱦ������� 1�� ����
	printf("%d\n", TestFunc());//1                          13 nResult++; static������ �Ⱦ������� 1�� ����
	return 0;
}
/*
printf("%d\n", TestFunc(10,20)); 10,20�� �ִ°� ���� �� �޴°� �Ű�����

static�� ������ ������ �ִ�.�Լ��� �������ų� ���ų� �������.
��������̴�.�߿�(���� �� �ִ�.)     -���� ����- 
�̰� ���α׷� �����ϸ� ����� �������� �����Ѵ�. 

�Լ��� ù��° �ٿ� ������ ���� x �� �ڿ� ������ ����o
*/