#include<stdio.h>

int main()
{
	int i = 0;
	int sum = 0;
	for (i=1;i<=10;i++)//i=1처음만 실행
	{
		sum = sum + i;
	}
	printf("0부터10까지의 합은:%d", sum);

	return 0;
}
//제일많이씀