#include<stdio.h>
void user_strcpy(char*, char*);
int main()
{
	char fruiit[20];
	user_strcpy(fruiit, "strawberry");
	printf("배열에 저장된 문자열:%s\n", fruiit);
	return 0;
}

void user_strcpy(char* des, char* src)
{
	while (*src != '\0')
	{
		*des = *src;
		src++;
		des++;

	}
	*des = '\0';
}
/*
src[i] / src[0]은 문자열 복사에 아무 의미가 없다.
if이 불필요한 이유는 if는 특정 조건에 맞아야만실행된다.
마지막에 널 문자(\0)를 넣지 않으면
예상치 못한 값(쓰레기 값)이 출력되거나, 프로그램이 충돌할 수 있다.
*des = '\0';는 while문을 탈출하고 마지막에 null문자가 추가가 된다. 


여기서 
des++;src++;이건 포인터가 아닌 이유가 주소값을 올리는게 아니라  des는 배열때문이고  src문자때문
*/