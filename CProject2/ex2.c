#include<stdio.h>

int main()
{
	int history, letters, art;
	int total;
	double average;

	printf("역사,뭉화,미술 점수를 입역 하시오:");
	scanf_s("%d%d%d", &history, &letters, &art);

	total = history + letters + art;
	average = total / 3; //45.333333

	printf("총점%d\n 평균 %lf", total, average);

	return 0;
}
//90 85 90 88.333333
//파일을 지우고 다시 했을때 88.000000 
//제대로 실행됬던건 다른게 실행됌
