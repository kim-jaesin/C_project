#include<stdio.h>

int main()
{
	int amount; //전기 사용량 
	double price, tax, total;
	
	printf("전기사용량을 입력하세요:");
	scanf_s("%d", &amount);
	price = amount * 88.5 + 660;
	tax = price * 0.09;
	total = price + tax;
	printf("최종 전체요금은 %lf원입니다.", total);

	



	return 0;
}
//*전기사용량을kw단위로 입력하려면 사용요금을 계산 주는프로그램을 작성 하시오
// 조건)기본요금:660원kw당 사용요금;88.5
// 전체요금:기본요금+(전기사용량*kw당 사용요금)세금은 전체요금의 9%
// 최종 사용요금:전체요금+세금 