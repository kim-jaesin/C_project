#include<stdio.h>

int main()
{
	int ninput = 0;
	char chCredit = 'x';

	scanf_s("%d", &ninput);
	if(90 <= ninput)
		chCredit = 'A';
	else if(ninput>=80)
		chCredit = 'B';
	else if (ninput >= 70)
		chCredit = 'C';
	else if (ninput >= 60)
		chCredit = 'D';
	else
		chCredit = 'F';

	printf("credit:%c\n", chCredit);
	/*if문은 참일시 바로밑 명령문을 실행하게된다.그러므로 변수초기화가 실행되어
	따로 1개씩총5개의 printf 명령문과 {}를 만들 필요없이 마지막만 만들어 코드를 간결하게 한다.*/
	return 0;
}
//교수님이 하신것
