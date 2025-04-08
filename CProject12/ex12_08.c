#include<stdio.h>
int main()
{
	int aty1[4] = { 1,2,3,4 };
	int aty2[4] = { 11,12,13,14 };
	int aty3[4] = { 21,22,23,24 };
	int* ptr_ary[3] = { aty1,aty2,aty3 };
	int i, j;
	for (i=0;i<3;i++)
	{
		for (j=0;j<4;j++)
		{
			printf("%5d", ptr_ary[i][j]);
		}
		printf("\n");
	}
	return 0;
}