#include<stdio.h>
struct student
{
	int num;
	char name[20];
	double grade;
};
int main()
{
	struct student s1={315,"ȫ�浿",2.4},
	s2={247,"�̼���",3.7},
	s3 = { 330,"�������",4.4 };//����ü ������ ����� �ʱ�ȭ
	struct student max;//������ ���� ���� �л��� �����͸� ������ ����ü ����
	max = s1;//ó���� ȫ�浿�� ������ ���ٰ� ����
	if (s2.grade > max.grade)
		max = s2;
	if (s3.grade > max.grade)
		max = s3;
	printf("�й�:%d\n", max.num);
	printf("�̸�:%s\n", max.name);
	printf("����:%.1lf\n", max.grade);
	return 0;
}
