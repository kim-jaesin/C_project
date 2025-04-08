#include<stdio.h>
int main()
{
	char animal[5][20];/*char에서 열은 최대 문자 수를 말한다.  animal[i][20]에서 20까지 넣으면
	                                                           특정 위치까지 나타내 오류가 난다*/
	int i;
	for (i=0;i<5;i++)
	{
		scanf_s("%s\n", animal[i],20);
		//scanf_s("%s\n", animal[i][20],20);
	}
	for (i = 0; i < 5; i++)
	{
		printf("%s\m", animal[i]);
		//printf("%s\m", animal[i][20]);
	}
	return 0;
}