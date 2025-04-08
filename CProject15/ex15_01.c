#include<stdio.h>
/*구조체 멤버로는 배열, 포인터 변수, 이미
이미정의된 변수 등 모든 응용 자료형을 사용할 수 있다
내가 만든 타입      struct키워드  student구조체 이름*/
struct student//학생이라는 구조체  구조체는 변수를 하나로 묶어서 만든다.
{
	int num;//맴버
	double grade;
};
int main()
{
	struct student s1;//struct student(구조체)를 타입으로 쓴다. 구조체 변수 선언을 먼저 한다.
	s1.num = 2;          //  (.)은 맴버 참조 연산자
	s1.grade= 2.7;
	printf("%d %lf", s1.num, s1.grade);
	return 0;
}