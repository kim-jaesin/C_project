#include<stdio.h>

int main()
{
	int history, letters, art;
	int total;
	double average;


	printf("���� ������ �Է��Ͻÿ�:");
	scanf_s("%d", &history);
	printf("��ȭ ������ �Է��Ͻÿ�:");
	scanf_s("%d", &letters);
	printf("�̼� ������ �Է��Ͻÿ�:");
	scanf_s("%d", &art);
	total = history + letters + art;
	average = (double)total / 3;

	printf("������ %d\n ����� %lf�̴�", total, average);

	return 0;
}
/*����,��ȭ,���� �� ������ ������ �Է� �޾Ƽ� ������ ����� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�*/

// ���� �ʱ�ȭ�� ����� ���ڸ� �Է��Ҷ� ���� �Է� �ڵ��� �ʱ�ȭ 