#include<stdio.h>

int main()
{
	int ninput = 0;

	scanf_s("%d", &ninput);

	if(ninput>=10)
	{
		if(ninput>20)
			puts("20초과");
		else
			puts("20이하");
	}
	else
	{
		printf("10미만");
		if (ninput >= 5)
			puts("5이상");
		else
			puts("5이하");
	}
	return 0;
}
//10미만5이상으로 나옴 교수님과 같음