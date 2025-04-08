#include<stdio.h>

int main()
{
	char ch1, ch2;

	printf("첫 번째 문자를 입력하세요:");
	//scanf_s("%c%c", &ch1,1, &ch2,2); //%c%c 사이를 띄우면 안됨
	scanf_s("%c", &ch1, 1);
	printf("두 번째 문자를 입력하세요:");
	scanf_s(" %c", &ch2, 2);//"(공백)%c 공백이 없으면 두번째 글씨가 엔터로 처리
	printf("첫번째 문자:%c\n", ch1);
	printf("두번째 문자:%c\n", ch2);


	return 0;
}
/*원인은 첫번째 문자를 입력할 때 같이 입력되는 엔터키에 있다.
이 엔터키에 대한 아스키코드값인 새줄문자가 두번째 scanf 함수가 실행
될때 ch2에 자동 저장된다.*/