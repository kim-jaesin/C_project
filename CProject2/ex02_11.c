#include<stdio.h>

int main()
{
	int history, letters, art;
	int total;
	double average;


	printf("역사 점수를 입력하시오:");
	scanf_s("%d", &history);
	printf("문화 점수를 입력하시오:");
	scanf_s("%d", &letters);
	printf("미술 점수를 입력하시오:");
	scanf_s("%d", &art);
	total = history + letters + art;
	average = (double)total / 3;

	printf("총점은 %d\n 평균은 %lf이다", total, average);

	return 0;
}
/*역사,문화,예능 세 과목의 점수를 입력 받아서 총점과 평균을 구한후 출력하는 프로그램을 작성하시오*/

// 변수 초기화를 사람이 숫자를 입력할땐 숫자 입력 코딩후 초기화 