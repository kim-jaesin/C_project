#include<stdio.h>
int main()
{
	int num1 = 10, num2 = 20, num3 = 30, num4 = 40;
	int arr2d[2][4] = { 1,2,3,4,5,6,7,8 };
	int i, j;

	int* whoA[4] = {&num1,&num2,&num3,&num4};//포인터 배열:배열의 요소가 *주소*로 구성된 배열 &가 붙어야 함
	int(*whoB)[4] = arr2d;//배열 포인터
	printf("%d %d %d %d \n", *whoA[0], *whoA[1], *whoA[2], *whoA[3]);
	for (i=0;i<4;i++)
	{
		printf("whoA[%d]배열요소는%d\n",i, *whoA[i]);
	}
	for (i=0;i<2;i++)
	{
		for (j=0;j<4;j++)
		{
			printf("%-5d", whoB[i][j]);
		}
		printf("\n");
	}
	return 0;
}