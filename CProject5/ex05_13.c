#include<stdio.h>

int main()
{
	int x, y;

	for (x=0;x<=10;x++)
	{
		y = 2 * x + 1;
		printf("%5d", y);
	}
	printf("\n");
	return 0;
}