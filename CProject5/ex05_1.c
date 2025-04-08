#include<stdio.h>
//음수가 입력 될 때까지 입력된 값을 누적하여 출력
int main()
{
	int sum = 0;
	int n = 0;
	//while ,scanf_s ,if
	printf("0또는 양수값을 입력하세요:");
	while (n>=0)
		{
		scanf_s("%d", &n);
		sum = sum + n;
		if (n < 0)
			break;
	}
	printf("그 동안 누적된 값:%d\n", sum);
	return 0;
}