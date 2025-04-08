#include<stdio.h>
int main()
{
	for (int y = 1; y <=5; y++)//1부터 n까지 반복  행
	{
		for (int x = 1; x <= y; x++)//각줄에 1개씩 출력  열
		{
				printf("*");
		}
		printf("\n"); //putchar("\n")
	}
	return 0;
}
/*
*(0.0)
**(1.0) (1.1)
***(2.0)(2.1)(2.2)
****(3.0)(3.1)(3.2)(3.3)
*****(4.0)(4.1)(4.2)(4.3)(4.4)
*/
/*
#include<stdio.h>
int main()
{
	for (int y =0; y < 5; y++)
	{
		for (int x =0 ; x < y+1; x++) or for (int x =0 ; x <= y; x++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
*/