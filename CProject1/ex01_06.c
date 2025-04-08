#include<stdio.h>

int main()
{
	int height;
	int weight;
	int cha;

	height = 168;
	weight = 48;
	cha = height - weight;//+,-,*,/
	printf("키 :%dcm\n",height); //168
	printf("몸무게: %dkg\n", weight);//48
	printf("키에서 모무게를 뺀 값: %d\n", cha);//120


	return 0;
}