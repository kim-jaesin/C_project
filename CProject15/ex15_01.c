#include<stdio.h>
/*����ü ����δ� �迭, ������ ����, �̹�
�̹����ǵ� ���� �� ��� ���� �ڷ����� ����� �� �ִ�
���� ���� Ÿ��      structŰ����  student����ü �̸�*/
struct student//�л��̶�� ����ü  ����ü�� ������ �ϳ��� ��� �����.
{
	int num;//�ɹ�
	double grade;
};
int main()
{
	struct student s1;//struct student(����ü)�� Ÿ������ ����. ����ü ���� ������ ���� �Ѵ�.
	s1.num = 2;          //  (.)�� �ɹ� ���� ������
	s1.grade= 2.7;
	printf("%d %lf", s1.num, s1.grade);
	return 0;
}