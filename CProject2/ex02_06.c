#include<stdio.h>

int main()
{
	char number;
	double batting_avg;
	int age;

	printf("등번호를 입력하세요:");
	scanf_s("%c", &number, 1);
	printf("타율을 입력하세요:");
	scanf_s("%lf", &batting_avg);
	printf("나이를 입력하세요:");
	scanf_s("%d", &age);
	//printf("등번호:%c\n",number);
	//printf("타율:%lf\n",batting_avg);
	//printf("나이:%d\n",age);
	printf("등번호%c\n타율%lf\n나이%d\n", number, batting_avg, age); //등번호9 ,타율0.9000 ,나이21(,빼기)


	






	return 0;
}

//vitamin_c야구단의 수비수는 등번호 1번부터
//9번까지 9명이 있습니다. 등번호와 타율,나이를 각각
//입력 받은 후에 한줄에 출력하는 프로그램을 작성하시오
//단 등번호는 문자.타율은 실수값,나이는 정수값으로 처리한다.
//등번호number,타율batting_avg,나이age