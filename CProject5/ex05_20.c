#include<stdio.h>

int main()
{
	//2�� ����̰ų� 3�� ���
	int num;
	for (num = 0; num < 20; num++)
	{
		if (num % 2 == 0 || num % 3 == 0)
			continue;//(����Ѵ�.) ���� num++�� ���� 
		printf("%d.", num);
	}

	return 0;
}
/*
num=0
num<20
num++
*/