#include<stdio.h>

int main()
{
	char str[] = "Good morning!";
	//문자열 끝에는 null('\0')이 자동 삽입
	//배열의 길이는 14
	puts(str);
	printf("배열 str의 크기;%d\n",sizeof(str));//14
	printf("null문자 문자형 출력; %c\n", str[13]);
	printf("null문자 정수형 출력;%d\n", str[13]);
	//!=>?
	str[12] = '?';
	//str의 인덱스 12는 Good morning!의0부터 시작임으로 !가 ?로 바뀐다. 
	printf("문자열 출력:%s\n", str);

	return 0;
}
//"Good morning!"이라는 문자열은 실제로 메모리에 저장될 때 다음과 같은 구성입니다 
//G o o d (공백) m o r n i n g ! \0
//이렇게 문자열의** 마지막에는 항상 \0(널 문자) * *가 붙기 때문에, 총 14개의 문자가 배열에 저장됩니다.
//배열의 인덱스는 0부터 시작하지만 위에는 문자열(배열)의 길이 이기때문에 14가 맞다. 
/*ex)char str[] = { "Good morning!" };에서 인덱스는 0부터 시작이니까 인덱스 값을 생각한다면
  ex)char str[i]일때의 값이고 강사님이 말한 14는 char str[]의 문자열이 메모리에서 차지하는  전체 크기 값 이다 