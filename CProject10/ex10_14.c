#include<stdio.h>

int main()
{
	char str[80];
	printf("문자열을 입력하세요:");
	//scanf_s("%s", str,50); 공백으로 데이터 구분
	//printf("입력된 문자열:%s\n", str);
	gets(str,80);
	puts(str);//제목을 쓸거면 printf

	return 0;
}