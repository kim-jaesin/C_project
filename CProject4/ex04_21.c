#include<stdio.h>

int main()
{
	int code;//코드번호
	int amount;//사용량
	double basic = 0;//기본요금
	double price = 0;//kw당 요금
	double tax_rate = 0;//세금비율
	double total;//전체요금
	double tax;//세금
	printf("코드번호를 입력하세요(1:가정용,2:산업용,3:교육용):\n");
	scanf_s("%d", &code);
	printf("전기 사용량을 입력하세요:\n");
	scanf_s("%d", &amount);
	switch (code)
	{
	case 1:
		tax_rate = 0.09;
		basic = 1130;
		price = 127.8;
		break;
	case 2:
		tax_rate = 0.08;
		basic = 660;
		price = 88.5;
		break;
	case 3:
		tax_rate = 0.05;
		basic = 370;
		price = 52;
	}
	total = (amount * price) + basic;
	tax = total * tax_rate;
	
	printf("최종 전기요금은 %.0lf원입니다.\n", total + tax);


	return 0;
}
//case의 ''은 문자일때만 숫자는 x
//항상 중복되는것은 1번만 하게 만들기 