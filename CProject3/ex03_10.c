#include<stdio.h>

int main()
{
	char name[80];
	char sex;
	int age;
	double height;

	printf("�̸��� �Է��ϼ���:");
	scanf_s("%s", name,80);//c�� ���� 1���� ���� ����1���� 1byte
	printf("������ �Է��ϼ���:");
	scanf_s(" %c", &sex, 1);
	printf("���̸� �Է��ϼ���:");
	scanf_s("%d" ,&age);
	printf("Ű�� �Է��ϼ���:");
	scanf_s(" %lf", & height);

	printf("�̸�:%s ����:%c ����:%d Ű:%f", name, sex, age, height);

	return 0;
}