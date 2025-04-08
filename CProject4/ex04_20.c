#include<stdio.h>

int main()
{
	double a, b, res;
	char op;
	printf("숫자,연산기호,숫자를 입력하시오.\n");
	scanf_s(" %lf%c%lf", &a, &op, 1, &b);
	switch (op)
	{
	case '+':
		res = a + b;
		printf("답은%.2lf입니다.", res);
		break;
	case '-':
		res = a - b;
		printf("답은%.2lf입니다.", res);
		break;
	case'*':
		res = a * b;
		printf("답은%.2lf입니다.", res);
		break;
	case'/':
		res = a / b;
		printf("답은%.2lf입니다.", res);
		break;
	default:
		puts("알수 없는 명령");
	}
	return 0; //10*20  
}
/*default를 넣지말고 res=0을 해서 초기화시킨후 printf("답은%.2lf입니다.", res);
가 중복이 되니까 switch 끝나는 }밑에 printf를넣는다.*/

