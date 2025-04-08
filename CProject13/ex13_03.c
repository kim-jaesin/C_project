#include<stdio.h>
void str_prn(char**, int);
int main()
{
	char* ptr_ary[] = { "eagle","tiger","lion","squirrel" };//포인터 배열
	
	/*char ptr_ary[] = "monky";//값을 배열에 복사
	char ptr_ary2[3] = { 'a','b','c' };
	char ptr_ary3[] = {'a','b','c','\0'};
	printf("%s\n", ptr_ary);//monky
	printf("%c\n", *(ptr_ary+2));//인덱스 2번째 n출력
	printf("%s\n", ptr_ary2);
	printf("%s\n", ptr_ary3);
	printf("%s\n", ptr_ary2[0]);
	*/
	int count;
	count = sizeof(ptr_ary) / sizeof(ptr_ary[0]);
	str_prn(ptr_ary, count);//함수 호출



	return 0;
}

void str_prn(char**spp, int count)
{
	for (int i = 0; i<count; i++)
	{
		printf("%s\n", spp[i]);
		printf("%s\n", *(spp+i));
	}
}

/*
ptr_ary2 배열에 문자열의 끝을 나타내는 널 문자('\0')가 없기 때문에 쓰래기 값이 나온다.
배열의 요소가 주소로 구성된 배열 =포인터 배열
*/