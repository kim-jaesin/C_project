//char novel[800] = {0};전체 줄거리를 저장할 배열 char str_in[80];입력 문자열을 저장할 배열
//문자열을 입력하여 끝이라는 단어가 만났을때 멈추게 하기
#include<stdio.h>
#include<string.h>
int main()
{
	char novel[800] = { 0 };
	char str_in[80];
	while (1)
	{
		printf("줄거리를 입력하시오:");
		gets_s(str_in, 80);
		if (strcmp(str_in, "끝") == 0)
			break;
		strcat_s(novel, sizeof(novel), str_in);
		strcat_s(novel, sizeof(novel), " ");
		printf("현재까지 줄거리는:");
		puts(novel);
		printf("\n");
	}
	
	return 0;
}