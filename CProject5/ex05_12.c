#include<stdio.h>

int main()
{
	int i;
	int age;
	int sum=0;
	printf("���̸� �Է��Ͻÿ�\n");
	for (i = 0;i<5;i++)
	{
		scanf_s("%d", &age);
		sum = sum + age;

	}
	sum = sum / i;
	printf("�ټ����� ��� ���̴�%.1lf�Դϴ�.\n", (float)sum);
	return 0;
}