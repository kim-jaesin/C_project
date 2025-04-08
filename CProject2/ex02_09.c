#include<stdio.h>

int main()
{
	double num1 = 245; //245.0
	int num2 = 3.1415; //3
	int num3 = 129; 
	char ch = num3; //1byte(8bit) 저장 -128~127(+2)

	printf("정수 245를 실수로:%lf\n", num1);
	printf("실수 3.1415를 정수로:%d\n", num2);
	printf("큰정수 12를 작은 정수로:%d\n", ch); //-127

	return 0;
}