#include<stdio.h>

int main()
{
	int num1, num2;
	char ch;
	printf("정수 2개를 입력하시오: ");
	scanf_s("%d%d", &num1, &num2);
	printf("연산기호를 입력하시오:");
	scanf_s(" %c", &ch, 1);
	switch(ch)
	{
	case '+':
		num1 = num1 + num2;
		printf("답은 % d입니다.", num1);
		break;
	case'-':
		num1 = num1 - num2;
		printf("답은 % d입니다.", num1);
		break;
	case'*':
		num1 = num1 * num2;
		printf("답은 % d입니다.", num1);
		break;
	case'/':
		if (num1 < 0)
		{
			(float)num1 = num1 / num2;
			printf("답은 %lf입니다.", (float)num1);
		}
	}
	return 0;
}
