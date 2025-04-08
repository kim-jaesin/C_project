#include<stdio.h>

int main()
{
	char name[80];
	char sex;
	int age;
	double height;

	printf("이름을 입력하세요:");
	scanf_s("%s", name,80);//c는 문자 1개를 쓸때 영어1개당 1byte
	printf("성별을 입력하세요:");
	scanf_s(" %c", &sex, 1);
	printf("나이를 입력하세요:");
	scanf_s("%d" ,&age);
	printf("키를 입력하세요:");
	scanf_s(" %lf", & height);

	printf("이름:%s 설명:%c 나이:%d 키:%f", name, sex, age, height);

	return 0;
}