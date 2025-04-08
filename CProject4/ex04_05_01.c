#include<stdio.h>

int main()
{
	int num1 = 0;
	int num2 = 0;

	num1++;
	++num1;

	printf("%d\n",num1);//2
	printf("%d\n", ++num1);//3
	printf("%d\n", num1);//num1++=3
	printf("%d\n", num1++);//++num1=5
	printf("%d\n", num1);//4

	/*
	printf("%d\n",num1);=2
	printf("%d\n", ++num1);=3
	printf("%d\n", num1);=3
	printf("%d\n", num1++);=3
	printf("%d\n", num1);=4

	num1++;or ++num1;
	*/


	return 0;
}