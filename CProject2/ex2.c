#include<stdio.h>

int main()
{
	int history, letters, art;
	int total;
	double average;

	printf("����,��ȭ,�̼� ������ �Կ� �Ͻÿ�:");
	scanf_s("%d%d%d", &history, &letters, &art);

	total = history + letters + art;
	average = total / 3; //45.333333

	printf("����%d\n ��� %lf", total, average);

	return 0;
}
//90 85 90 88.333333
//������ ����� �ٽ� ������ 88.000000 
//����� ��������� �ٸ��� ������
