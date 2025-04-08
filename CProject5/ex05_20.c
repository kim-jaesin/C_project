#include<stdio.h>

int main()
{
	//2의 배수이거나 3의 배수
	int num;
	for (num = 0; num < 20; num++)
	{
		if (num % 2 == 0 || num % 3 == 0)
			continue;//(계속한다.) 그후 num++로 증가 
		printf("%d.", num);
	}

	return 0;
}
/*
num=0
num<20
num++
*/