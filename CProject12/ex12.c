#include<stdio.h>
int main()
{
	int row_order[4][5];
	//int col_order[4][5];
	int i, j;
	int n = 0; //m = 0;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 5; j++)
		{
			n++;
			row_order[i][j] = n;
		}
	}
	printf("행우선순서로 저장된 배열")
	return 0;
}