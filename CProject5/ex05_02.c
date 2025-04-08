#include<stdio.h>

int main()
{
	int nlnput = 0;
	scanf_s("%d", &nlnput);//-1
	do//(~하다)
	{
		printf("%dth printf()\n", nlnput);//-1
		nlnput--;

	} while (nlnput > 0);//선실행 후 비교 while문과 반대

	return 0;
}