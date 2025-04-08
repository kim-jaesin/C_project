#include<stdio.h>
int main()
{
	int nums[5][6] = { {1,2,3,4,5,0},{6,7,8,9,10,0},{11,12,13,14,15,0},{16,17,18,19,20,0},{0,0,0,0,0,0} };
	int i, j;

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 5; j++)
		{
			nums[i][5] += nums[i][j];//행의 합  nums[0][4]행까지의합
			nums[4][j] += nums[i][j];//열의 합 
			nums[4][5] += nums[i][j];//전체의 합
		}
		printf("\n");
	}


	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 6; j++)
		{
			printf("%5d ", nums[i][j]);
		}
		printf("\n");
	}
	return 0;
}
/*
출력 결과:
1 2 3 4 5 0
6 7 8 9 10 0
11 12 13 14 15 0
16 17 18 19 20 0
0 0 0 0 0 0
*/