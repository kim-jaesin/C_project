#include<stdio.h>

int main()
{
	int i;
	for (i = 1; i < 10;i++)
	{
		printf("7*%d=%2d입니다.", i, i * 7);
		if (i % 3 == 0) //%나머지를 구하는 연산자
			printf("\n");
	}

	return 0;
}