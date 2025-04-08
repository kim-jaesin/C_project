#include<stdio.h>

int main()
{
	int bonbong, bonus, total;
	double tax, real_income;

	bonbong = 150;
	bonus = 60;

	total = bonbong + bonus; //총 수입액은 본봉+보너스
	//세금은 총수입액의 9%(*0.09)
	tax = total * 0.09;
	real_income = total - tax;
	printf("이몽룡의 실수입액은? %lf만원입니다.", real_income);

	return 0;
}