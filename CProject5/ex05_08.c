#include<stdio.h>

int main()
{
	int n;
	int i;
	printf("����� �Է��ϼ���:");
	scanf_s("%d", &n);
	i = 0;
	while (i <n)
	{
		printf("*");
		i++;
	}
	return 0;
}