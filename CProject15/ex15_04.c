#include<stdio.h>
#include<stdlib.h>
struct profile
{
	int age;
	double height;
	char* np;
};
struct student
{
	struct profile pf;
	int num;
	double grade;
};

int main()
{
	struct student s1;
	
	printf("나이를 입력하세요:");
	scanf_s("%d", &s1.pf.age);
	printf("키를 입력하세요:");
	scanf_s("%lf", &s1.pf.height);
	s1.pf.np=(char*)malloc(20);//동적할당
	printf("성함을 입력하세요:");
	scanf_s("%s", s1.pf.np,20);
	s1.num = 5;
	s1.grade = 4.4;
	
	printf("이름:%s", s1.pf.np);
	printf("나이:%d", s1.pf.age);
	printf(" 키:%.1lf" , s1.pf.height);
	printf("학번:%d", s1.num);
	printf("학점:%.1lf", s1.grade);
	free(s1.pf.np);
	return 0;
}