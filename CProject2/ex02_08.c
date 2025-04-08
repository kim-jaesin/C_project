#include<stdio.h>

int main()
{
	char number;
	double batting_avg;
	int age;
	//char name = "김재신";
	//char position = "투수";
	char name[80], position[80];


	printf("등번호를 입력하세요:");
	scanf_s("%c", &number);
	printf("이름을 입력하세요:");
	scanf_s("%s",name,80);
	printf("포지션을 입력하세요:");
	scanf_s("%s", position, 80);
	printf("타율을 입력하세요:");
	scanf_s("%lf", &batting_avg);
	printf("나이를 입력하세요:");
	scanf_s("%d", &age);
	//printf("등번호%c\n타율%lf\n나이%d\n", number, batting_avg, age); //등번호9 ,타율0.9000 ,나이21(,빼기)
	//printf("이름:%s", name);
	//printf("포지션:%s", position);
	printf("%c번-%s-%s,타율은%lf이고 나이는%d살입니다.", number,name,position, batting_avg, age);

	return 0;
}


/*Vitamin_C야구단을 수정하여 선수의이름과 포지션도 입출력하는 프로그램을 작성하시오.*/