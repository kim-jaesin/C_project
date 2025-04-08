#include<stdio.h>

int main()
{
	int n;
	int i;
	printf("양수를 입력하세요:");
	scanf_s("%d", &n);
	i = 0;
	while (i <n)
	{
		printf("*");
		i++;
	}
	return 0;
}