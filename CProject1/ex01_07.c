#include<stdio.h>

int main()
{
	//키보드로 부터 입력

	int num;


	printf("정수값 하나를 입력하세요:");
		scanf_s("%d", &num); //100

	printf("입력 받은 정수의 값은 %d입니다\n" ,num);


	return 0;
}