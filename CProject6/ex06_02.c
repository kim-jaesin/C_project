#include<stdio.h>

int total(int, int, int);//함수 원형 선언,변수명(int 뒤에오는 이름) 생략가능   
//그래그 후 토탈에서 정의만들기
double average(int);

int main()
{
	int kor, eng, mat;
	int tot;
	double avg;
	printf("세 과목의 점수를 입력하세요:");
	scanf_s("%d%d%d", &kor, &eng, &mat);
	total(kor, eng, mat);//함수 호출
	tot = total(kor, eng, mat);//total뒤에 변수선언이 붙어야함
	avg = average(tot);
	printf("세 점수의 합은%d입니다.", tot);
	printf("세 점수의 평균은%.1lf입니다.\n", avg);
	return 0;
}

int total(int kor, int eng , int mat )
{
	int tot;
	tot = kor + eng + mat;
	
	return tot;
}

double average(int tot)
{
	double avg;
	avg = tot / 3.0;

	return avg;
}
