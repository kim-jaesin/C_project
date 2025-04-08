#include<stdio.h>

int main()
{
	//하나의 문자만을 전용으로 입출력하는 함수
	//문자들을 연속으로 입출력하면 문자열의 입출력이 된다.
	//getchar        putchar
	char str[80];//문자열을 저장할 배열
	char ch;//getchar함수의 리턴값을 저장할 배열
	int i;
	printf("문자열을 입력하세요:");//Love
	for (i = 0; i < 4; i++)
	{
		ch = getchar();//키보드로부터 문자를 입력받아 리턴한다.
		str[i] = ch;//리턴된 문자를 배열에 차례로 저장
	}
	str[i] = '\0';//마지막에 널문자를 저장하여문자열을 완성
	printf("입력된 문자열:%s\n", str);
	i = 0;
	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	str[i] = '\0';
	printf("입력된 문자열:%s\n", str);
	/*char ary[10] = {'L','o','v','e'};
	puts(ary);*/
	return 0;
}