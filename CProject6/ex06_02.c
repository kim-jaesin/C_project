#include<stdio.h>

int total(int, int, int);//�Լ� ���� ����,������(int �ڿ����� �̸�) ��������   
//�׷��� �� ��Ż���� ���Ǹ����
double average(int);

int main()
{
	int kor, eng, mat;
	int tot;
	double avg;
	printf("�� ������ ������ �Է��ϼ���:");
	scanf_s("%d%d%d", &kor, &eng, &mat);
	total(kor, eng, mat);//�Լ� ȣ��
	tot = total(kor, eng, mat);//total�ڿ� ���������� �پ����
	avg = average(tot);
	printf("�� ������ ����%d�Դϴ�.", tot);
	printf("�� ������ �����%.1lf�Դϴ�.\n", avg);
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
