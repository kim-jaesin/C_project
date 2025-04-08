#include<stdio.h>

int main()
{
	int age;
	char* greeting;
	printf("나이를 입력하세요:");
	scanf_s("%d", &age);
	if (age > 30)
	{
		//printf("처음 뵙겠습니다.");
		greeting = "처음 뵙겠습니다.";
	}
	else
	{	//printf("반가워요.");
		greeting = "반가워요";
	}
	printf("인사말:%s", greeting);


	return 0;
}