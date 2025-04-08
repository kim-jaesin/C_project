#include<stdio.h>

int main()
{
	int i = 1;
	int l;
	printf("한개의 단을 입력하시오:");
	scanf_s("%d", &l);
	while (i <= 9)
	{
		printf("%d*%d=%d입니다.\n", l, i, l * i);
		i++;

	}

	return 0;
}