#include<stdio.h>

int main()
{
	int ary[5] = { 10,20,30,40,50 };
	int i;
	int* ap = ary;
	for (i=0;i<5;i++)
	{
		printf("\n");
		printf("%d\n", ary[i]);
		printf("%d\n", *(ary + i));
	}
	return 0;
}