#include<stdio.h>

int main()
{
	int ary[5] = { 10,20,30,40,50 };
	int* ap = ary;//int*ap=&ary[0];
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("%d ",*(ap+i));
		printf("%d ", ary[i]);
		printf("%d\n ", ap[i]);
	}

	return 0;
}