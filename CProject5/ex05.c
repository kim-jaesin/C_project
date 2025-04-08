#include<stdio.h>

int main()
{
	int age;
	int i;
	int sum = 0;

	for (i=0;i<5;i++)
	{
		printf("나이를 입력하시오:",i);
		scanf_s("%d", &age);
		sum = sum + age;
	}
	printf("평균나이는 %.1lf입니다.", sum/5.0);
	return 0;
}