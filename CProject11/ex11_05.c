#include<stdio.h>
int* increase();
int main()
{
	int i;
	int* sp;
	for (i = 0; i < 5; i++)
	{
		sp=increase();//������ �Լ��� �ּҰ��� �Ѿ�� sp�� sum�� ����Ŵ
		printf("sum:%d",*sp);//sum=��,������ ������ ����Ű�� �� ����� 1,2,3,4,5
	}
	return 0;
}

int* increase()//�ּ� ��ȯ(int*)�Ǽ��� double
{
	static int sum;

	sum++;

	return &sum;//���⼭ �Ѿ�� ���� �ּҰ� �̿��� �Ѵ�.  call by value���� �ѱ�鼭 ��ȯ�Ѵ�.
}
/*
&sum=call by address(reference)

int*=������ ������ ����Ű�� ���� Ÿ��

sp�� sum�� ����Ű������:
���� ������ ���� ���� sum��static�̴� sum�� �ּ�  increase()�� �ٿ����Ѵ�.
*/