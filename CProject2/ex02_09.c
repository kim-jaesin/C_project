#include<stdio.h>

int main()
{
	double num1 = 245; //245.0
	int num2 = 3.1415; //3
	int num3 = 129; 
	char ch = num3; //1byte(8bit) ���� -128~127(+2)

	printf("���� 245�� �Ǽ���:%lf\n", num1);
	printf("�Ǽ� 3.1415�� ������:%d\n", num2);
	printf("ū���� 12�� ���� ������:%d\n", ch); //-127

	return 0;
}