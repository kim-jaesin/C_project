#include<stdio.h>
#include <stdlib.h>
int main()
{
	double* hight;
	double* low;

	hight = (double*)malloc(sizeof(double));
	low = (double*)malloc(sizeof(double));
	//�����Ҵ� ���н� NULL�� ��ȯ�Ѵ�.
	if (hight == 0 || low == 0) {
		printf("�����Ҵ� �޸𸮰� �����մϴ�.\n");
		return 0;// ���α׷� ����
	}
	printf("�ְ��°� ��������� �Է��ϼ���\n");
	scanf_s("%lf %lf", hight, low);
	printf("�ϱ����� %.1lf�Դϴ�.\n", *hight- *low);

	free(hight);
	free(low);
	return 0;
}
/*
�����Ҵ��̶� �������� ���α׷��� �޸𸮿� ����ɶ� �� ����ŭ �޸𸮿� �����.
*/