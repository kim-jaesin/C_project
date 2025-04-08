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

	if (bmi>=20 && bmi < 25)
		puts("표준입니다.\n");
	else
		puts("체중 조절이 필요합니다.");
	return 0;
}
/*
BMI는 체중을 키의 제곱으로 나눈다(단위 체중은kg,키는cm)
BMI 20미만:저체중,20~24.9:표준,25이상 과체중
if (bmi>=20 && bmi < 25)은 20이하이면서 동시에25미만인 사람을 참이라고 해야 하기에 &&을 쓴다.
*/ 