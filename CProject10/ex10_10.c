#include<stdio.h>

int main()
{
	char fruit[80] = "apple";
	char* strp = "strawberry";
	int len;
	len = strlen(fruit);//null문자 제외
	printf("문자열의 길이:%d\n", len);//5

	len = strlen(strp);//strlen문자열의 길이를 측정해 준다.null문자 제외
	printf("문자열의 길이:%d\n", len);//10

	return 0;
}