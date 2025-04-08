#include<stdio.h>

int main()
{
	int n;
	int i;
	printf("양수를 입력하세요:");
	scanf_s("%d", &n);
	i = 0;
	while (i<n)
	{
		printf("*");
		i++;
		if (i % 5 == 0)
			printf("\n");
	}
	
	return 0;
}

/*
13을 주었을때 
*****
*****
***
*/