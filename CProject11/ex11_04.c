#include<stdio.h>
void increase();
int main()
{
	int i;
	for (i = 0; i < 5; i++)//for���� �ݺ��� ��Ȯ�� �Ҷ� ����
	{
		increase();//�Լ��� 5�� ȣ���
	}
	return 0;
}

void increase()
{
	static int sum;
	sum++;
	printf("sum:%d\n",sum);
}
/*
�ʱ�ȭ�� ���ߴµ� �۵��� �Ǵ� ������ static�� �ڵ����� 0�ʱ�ȭ�� �Ѵ�.
*/