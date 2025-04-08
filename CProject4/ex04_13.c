#include<stdio.h>

int main()
{
	double weight, height;
	double bmi;
	printf("몸무게를 입력하시오(kg):");
	scanf_s("%lf", &weight);
	printf("키를 입력하시오(cm):");
	scanf_s("%lf", &height);
	height = height / 100;
	bmi = weight / (height * height);
	printf("당신의bmi는:%.1lf", bmi);
	if (bmi < 20)
		puts("저체중");
	else if (20 <= bmi && bmi<= 24.9)
		puts("표준");
	else
		puts("과체중");


	return 0;
}
//(bmi>=20.0)&&bmi<25.0
//(bmi<20.0)