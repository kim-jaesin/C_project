#include<stdio.h>

int main()
{
	int i = 1;
	int l;
	printf("�Ѱ��� ���� �Է��Ͻÿ�:");
	scanf_s("%d", &l);
	while (i <= 9)
	{
		printf("%d*%d=%d�Դϴ�.\n", l, i, l * i);
		i++;

	}

	return 0;
}