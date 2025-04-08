#include<stdio.h>

int main()
{
	int num1, num2;
	char ch;
	printf("영문 한 글자와 정수 둘을 입력하시오.\n");
	scanf_s("%c%d%d", &ch, 1, &num1, &num2);
	switch (ch)
	{
	case 'a':
		num1 = num1 + num2;
		printf("답은%d입니다.", num1); //printf("%d\n", num1+num2);
		break;
	case 'b':
		num1 = num1 * num2;
		printf("답은%d입니다.", num1);//printf("%d\n", num1*num2);
		break;
	case 'c':
		num1 = num1 - num2;
		printf("답은%d입니다.", num1); //printf("%d\n", num1 - num2);
		break;
	default:
		puts("알수 없는 명령");
		break;
	}
	return 0;
}
/*영문 한글자와 정수 둘을 입력,b 40 50
a:두 수를 더함 
b:두수를 곱함
c:먼저 입력된 정수에서 나중에 입력한 정수를 뺌
해당되지 않으면 "알수 없는 명령"이라는 문자열을 출력
*/

/*내가 실수한것
_s가 들어간 코드에 문자가 들어가면 들어간 수 만큼 숫자를 넣는다.
puts는 단순히 문자열만 있을때 쓴다. \n,%d같은거에 쓰면 실행은 되지만 \n,%d 이 출력 된다. */