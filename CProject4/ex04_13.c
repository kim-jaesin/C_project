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
	if (bmi < 20)
		puts("��ü��");
	else if (20 <= bmi && bmi<= 24.9)
		puts("ǥ��");
	else
		puts("��ü��");


	return 0;
}
//(bmi>=20.0)&&bmi<25.0
//(bmi<20.0)