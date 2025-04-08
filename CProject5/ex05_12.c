#include<stdio.h>

int main()
{
	int i;
	int age;
	int sum=0;
	printf("나이를 입력하시오\n");
	for (i = 0;i<5;i++)
	{
		scanf_s("%d", &age);
		sum = sum + age;

	}
	sum = sum / i;
	printf("다섯명의 평균 나이는%.1lf입니다.\n", (float)sum);
	return 0;
}