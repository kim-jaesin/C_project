#include<stdio.h>
#include<string.h>
int main()
{
	char fruit[80] = "straw";
	strcat_s(fruit, sizeof(fruit),"berry");
	printf("연결된 문자열:%s\n", fruit);
	return 0;
}
/*
strcat 문자열 연결 그래서 출력시 strawberry가 나온다.
*/