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
	
	printf("���̸� �Է��ϼ���:");
	scanf_s("%d", &s1.pf.age);
	printf("Ű�� �Է��ϼ���:");
	scanf_s("%lf", &s1.pf.height);
	s1.pf.np=(char*)malloc(20);//�����Ҵ�
	printf("������ �Է��ϼ���:");
	scanf_s("%s", s1.pf.np,20);
	s1.num = 5;
	s1.grade = 4.4;
	
	printf("�̸�:%s", s1.pf.np);
	printf("����:%d", s1.pf.age);
	printf(" Ű:%.1lf" , s1.pf.height);
	printf("�й�:%d", s1.num);
	printf("����:%.1lf", s1.grade);
	free(s1.pf.np);
	return 0;
}