#include<stdio.h>

int main()
{
	int i ,num=0 ;
	int total=0;
	printf("0����num������ ����,num��?");
	scanf_s("%d", &num);

	for (i = 0; i <num+1; i++)
	{
		total = i + total;
	}
	printf("0����%d������ ������%d�̴�.",num, total);

	return 0;
}
