#include<stdio.h>
int num3(int num1, int num2);
int main()
{
	int num1, num2, sum;
	printf("ù ��° ������ �Է��Ͻÿ�:");
	scanf_s("%d", &num1);
	printf("�� ��° ������ �Է��Ͻÿ�:");
	scanf_s("%d", &num2);
	sum = num3(num1, num2);
	printf("�� ������ ���� %d�Դϴ�.", sum);
	return 0;
}
int num3(int num1,int num2)
{
	int sum;
	sum = num1 + num2;
	return sum;
}