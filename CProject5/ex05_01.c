#include<stdio.h>

//반복문
int main()
{
	int num = 0;

	while (num<5)//조건식을 만족하는 동안(참 일동안만 실행)
	{
		//num++;
		printf("hello wrold! %d\n", num);
		num++;

	}

	return 0;
}
//num->0,1,2,3,4,5(거짓)