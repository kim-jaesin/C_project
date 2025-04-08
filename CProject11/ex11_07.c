#include<stdio.h>
void exchange();
int a, b;//external variable (외부변수:함수 밖에 존재,전체에 존재하는 변수) 
int main()
{
	printf("정수값 두 개를 입력하세요:");
	scanf_s("%d%d", &a, &b);
	exchange();
	printf("a:%d,b:%d\n", a, b);

	return 0;
}

void exchange()
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
