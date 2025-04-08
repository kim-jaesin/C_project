#include<stdio.h>

int main()
{
	for (int y = 5; y > 0; y--)
	{
		for (int x = 0; x < y; x++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

/*
***** (5.0)(5.1)(5.2)(5.3)(5.4)  :y=5,x=0 에서 54321 참이니 5개 시작
****  (4.0)(4.1)(4.2)(4.3)   :y가 1개낮아지고  올라감 432
***   (3.0)(3.1)(3.2)
**    (2.0)(2.1)
*     (1.0)
*/

/*
#include<stdio.h>
int main()
{
	for (int y =0; y < 5; y++)
	{
		for (int x =0 ; x <5-y; x++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
*/