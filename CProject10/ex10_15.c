#include<stdio.h>
#include<string.h>
int main()
{
	char novel[800] = {0};//전체 줄거리를 저장할 배열
	char str_in[80];//입력 문자열을 저장할 배열
	
	while (1)
	{
		printf("문자열을 입력하세요:");
		gets_s(str_in, 80);
		if (strcmp(str_in , "끝") == 0)//입력된 데이터값이 끝인가?
			break;
		strcat_s(novel, sizeof(novel), str_in);
		strcat_s(novel, sizeof(novel), " ");
		printf("현재까지 줄거리:");
		puts(novel);
		puts("\n");
	}
	return 0;
}
/*
문자열 저장 방법
1배열
2포인터 변수
while(~하는동안 무한루프 if문으로 끝)
for(조건을 만족할 때 까지)
do while(먼저실행 후 비교 )

	char ch = "a";
	printf("%c\n", ch);
	char* p = "a";
	printf("%c,%p", *p, p);
	printf("%c",ch);
	printf("%d\n",1==1 );
	printf("%d\n", 'a' == 'a');
	printf("%d\n", 'b' == 98);
	printf("%d\n", 1 == "1");
	printf("%d\n", "1" == "1");
	printf("%d\n", "1" == "2");
	printf("%d\n", "a" == "a");
	printf("%d\n", "ad" == "a");
	printf("%d\n", "끝" == "끝");

	return 0;
	strcmp: 문자열을 비교하는 함수
}
*/