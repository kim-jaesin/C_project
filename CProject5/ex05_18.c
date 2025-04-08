#include<stdio.h>

int main()
{
	int i,j;
	for (i = 1; i <= 9; i++)
	{
		for (j = 2; j <= 8; j += 3)
		{
			printf("%d*%d=%d\n", j,i,j*i);//2 5 8 단만 실행 
		}
	}
	return 0;
}