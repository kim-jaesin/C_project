#include<stdio.h>

int main()
{
	int ary[] = { 1,3,2 };
	int i, j, temp;

	for (i = 0; i < 2; i++)
	{
		for (j =i+1; j < 3; j++)
		{
			if (ary[i] < ary[j])
			{
				temp = ary[i];
				ary[i] = ary[j];
				ary[j] = temp;
			}
		}
	}
	for (i = 0; i < 3; i++)
	{
		printf("%d", ary[i]);
	}
	return 0;
}