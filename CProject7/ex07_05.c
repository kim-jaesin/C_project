#include<stdio.h>
//배열을 사용하여 평균 나이를 계산하는 프로그램
int main()
{
	int ages[5];
	int tot = 0;
	double avg;
	int i;
	printf("다섯명의 나이를 입력하세요:");// i < 5은 반복 회수 
	for (i = 0; i < 5; i++)
	{
		scanf_s("%d", &ages[i]);
	}
	printf("입력된 나이는 :");
	for (i = 0; i < 5; i++)
	{
		tot = tot + ages[i];
	}
	printf("나이의 합은%d", tot);
	avg = tot / 5.0;
	printf("입력된 다섯명의 나이 출력:");
	for (i = 0; i < 5; i++)
	{
		printf("%d", ages[i]);
	}
	printf("\n다섯명의 평균 나이는%.1lf", avg);
	
	return 0;
}
//다섯명의 나이를 저장할 배열
//합 누적변수
//평균 나이를 저장
//반복 제어 변수

//평균을 구할때 avg = tot / 5.0; 초기화를 하고 printf("나이의 평균은%lf", avg);이걸 바로 해도 된다. 
//for문을 쓸 이유가 없다.