#include<stdio.h>

int main()
{
	int x;
	int y;
	for (x=0;x < 5;x++)//세로
	{
		for (y = 0; y < 4; y++)//가로
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
/*
****
****
****
****
****
코드에서 "첫 번째 for 루프(x 루프)가 세로 값을 담당한다"는 것은, x가 전체적으로 반복 횟수를 제어하기 때문
x가 있는 for 문을1번 실행 그후 y문이 거짓일 될때 까지 실행 다시 x문
*/