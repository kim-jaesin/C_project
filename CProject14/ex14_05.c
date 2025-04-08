#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char temp[80];//임시 문자 배열,충분히 크게 확보한다.
	char* str[3];//동적 할당된 기억공간을 연결할 포인터 배열
	for (int i = 0;i<3;i++)
	{
		printf("문자열을 입력하세요:");
		gets(temp);//문자열 입력 자동으로 \0을 추가
		str[i] = (char*)malloc(strlen(temp)+1);//입력받은 문자열의 길이에 맞게 동적할당 temp의 공간을 만든것
		strcpy_s(str[i], strlen(temp)+1,temp);//동적 할당된 기억공간에 문자열을 복사한다.
	}
	for (int i = 0; i < 3; i++)
	{
		printf("%s\n", str[i]);
	}
	for (int i = 0; i < 3; i++)
	{
		free(str[i]);
	}
	return 0;
}