#include<stdio.h>

int main()
{
	int num1, num2;
	char ch;
	printf("영문 한 글자와 정수 둘을 입력하시오.\n");
	scanf_s("%d %c %d", &num1, &ch, 1, &num2);
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
/*a
5
5
*/