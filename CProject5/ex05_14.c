#include<stdio.h>

int main()
{
	int i;
	for (i = 1; i < 10;i++)
	{
		printf("7*%d=%2d�Դϴ�.", i, i * 7);
		if (i % 3 == 0) //%�������� ���ϴ� ������
			printf("\n");
	}

	return 0;
}