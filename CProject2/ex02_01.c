#include<stdio.h>

int main()
{
	int bonbong, bonus, total;
	double tax, real_income;

	bonbong = 150;
	bonus = 60;

	total = bonbong + bonus; //�� ���Ծ��� ����+���ʽ�
	//������ �Ѽ��Ծ��� 9%(*0.09)
	tax = total * 0.09;
	real_income = total - tax;
	printf("�̸����� �Ǽ��Ծ���? %lf�����Դϴ�.", real_income);

	return 0;
}