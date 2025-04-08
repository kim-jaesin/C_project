#include<stdio.h>

int main()
{
	int input, change, coffee;
	int w500, w100, w50, w10;

	printf("돈을 입력하시오:");
	scanf_s("%d", &input); //1000원
	//커피값 150원,1000원을 넣고 거스름돈850원을 받음
	//나누기(/).%나머지 ex)10%3=1 힌트:변수 재선언
	//코딩공부는 계속 생각해야한다.
	printf("커피값을 입력하시오:");
	scanf_s("%d", &coffee);

	change = input - coffee;
	w500 = change / 500;
	change = change % 500; //850원에서 %(나머지)500뺀=350
	w100 = change / 100;   // 읽을때 500원을 뺀 나머지(%)라고 읽으면쉽다.
	change = change % 100;
	w50 = change / 50;
	change = change % 50;
	w10 = change / 10;
	change = change % 10;

	printf("500원짜리 동전%d개 \n", w500);
	printf("100원짜리 동전%d개 \n", w100);
	printf("50원짜리 동전%d개 \n", w50);
	printf("10원짜리 동전%d개 \n", w10);







	return 0;
}