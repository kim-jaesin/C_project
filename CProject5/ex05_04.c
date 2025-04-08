#include<stdio.h>

int main()
{
	int i=1;
	int sum=0;

	while (i<=100)
	{
		//홀수,짝수체크하는 공식 &/2=0(짝)1(홀)
		if (i % 2 != 0)
			sum = sum + i;//가운데sum이 쓰레기값이라 실행x 이땐 초기화를 해야한다. 
		i++;//i=i+1
	}
	printf("1부터100까지의 홀수의 합은%d\n", sum);

	

	return 0;
}
//1부터100까지의 홀수의 합