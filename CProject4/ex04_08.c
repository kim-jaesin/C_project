#include<stdio.h>

int main()
{
	int num;
	printf("정수 입력:");
	scanf_s("%d", &num);

	if (num < 0)
		printf("입력 값은 0보다 작다");
	if (num > 0)
		printf("입력 값은 0보다 크다");
	if (num == 0)
		printf("입력 값은 0이다");

	return 0;
}
//지금부터 좀더 프로그래밍 부분을 공부함 한	번 공부하면 다르건가볍게 넘어감
//