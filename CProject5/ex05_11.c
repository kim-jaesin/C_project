#include<stdio.h>

int main()
{
	int i ,num=0 ;
	int total=0;
	printf("0부터num까지의 덧셈,num은?");
	scanf_s("%d", &num);

	for (i = 0; i <num+1; i++)
	{
		total = i + total;
	}
	printf("0부터%d까지의 덧셈은%d이다.",num, total);

	return 0;
}
