#include<stdio.h>

int main()
{
	char str[50] = "I like C programming";//문자열은 배열로 넣는다.
	//문자열 끝에는 자동으로 널 문자가 붙는다.
	printf("string:%s\n", str);
	str[8] = '\0';
	printf("string:%s\n", str);

	str[6] = '\0';
	printf("string:%s\n", str);
	str[8] = '\0';
	printf("string:%s\n", str);
	str[1] = '\0';
	printf("string:%s\n", str);



	return 0;
}