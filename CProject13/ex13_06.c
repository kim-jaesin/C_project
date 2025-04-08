#include<stdio.h>
int main()
{
	int ary[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
	int(* ap)[4];//배열 포인터 변수 선언
	int i, j;
	//배열명을 배열 포인터 변수에 저장
	ap = ary;
	printf("ary=%p\n", ary);
	printf("(*ap)=%p\n", ap);
	for (i=0;i<3;i++)
	{
		for (j=0;j<4;j++)
		{
			printf("%5d", ap[i][j]);
		}
		printf("\n");
	}
	return 0;
}
/*
2차원 배열
원래 1차원 내가 필요한 만큼 잘라서 밑에 붙이면 2차원이 된다. 
앞[]=열,뒤[]=행
*/