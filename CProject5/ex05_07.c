#include<stdio.h>

int main()
{
	int pre;
	int a = 5;
	int b = 5;

	a++;
	++a;//7
	pre = ++a * 3;//24
	printf("pre=%d\n", pre); //24

	pre = b++ * 3;//15
	printf("pre=%d\n", pre);//15
	printf("b=%d", b);//6




	return 0;
}