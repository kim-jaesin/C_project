#include<stdio.h>

int main()
{
	double weight, height;
	double bmi;
	printf("�����Ը� �Է��Ͻÿ�(kg):");
	scanf_s("%lf", &weight);
	printf("Ű�� �Է��Ͻÿ�(cm):");
	scanf_s("%lf", &height);
	height = height / 100;
	bmi = weight / (height * height);
	printf("�����bmi��:%.1lf", bmi);

	if (bmi>=20 && bmi < 25)
		puts("ǥ���Դϴ�.\n");
	else
		puts("ü�� ������ �ʿ��մϴ�.");
	return 0;
}
/*
BMI�� ü���� Ű�� �������� ������(���� ü����kg,Ű��cm)
BMI 20�̸�:��ü��,20~24.9:ǥ��,25�̻� ��ü��
if (bmi>=20 && bmi < 25)�� 20�����̸鼭 ���ÿ�25�̸��� ����� ���̶�� �ؾ� �ϱ⿡ &&�� ����.
*/ 