#include<stdio.h>
struct student
{
	int num;
	char name[20];
	double grade;
};
int main()
{
	struct student s1={315,"홍길동",2.4},
	s2={247,"이순신",3.7},
	s3 = { 330,"세종대왕",4.4 };//구조체 변수의 선언과 초기화
	struct student max;//학점이 가장 높은 학생의 데이터를 저장할 구조체 변수
	max = s1;//처음에 홍길동의 학점이 높다고 가정
	if (s2.grade > max.grade)
		max = s2;
	if (s3.grade > max.grade)
		max = s3;
	printf("학번:%d\n", max.num);
	printf("이름:%s\n", max.name);
	printf("학점:%.1lf\n", max.grade);
	return 0;
}
