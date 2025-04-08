#include<stdio.h>
int main()
{
	char str[80];
	char ch;
	int i=0;
	printf("문자열을 입력하세요(종료는 앤터):");
	while (1)
	{
		ch = getchar();//문자 하나 입력
		if (ch == '\n')//종료인지 체크
			break;
		str[i] =  ch;//입력된 문자를 저장한다.
		i++;
	}
	str[i] = '\0';
	printf("입력된 문자열은 %s\n", str);
	return 0;
}