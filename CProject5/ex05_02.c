#include<stdio.h>

int main()
{
	int nlnput = 0;
	scanf_s("%d", &nlnput);//-1
	do//(~�ϴ�)
	{
		printf("%dth printf()\n", nlnput);//-1
		nlnput--;

	} while (nlnput > 0);//������ �� �� while���� �ݴ�

	return 0;
}