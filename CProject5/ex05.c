#include<stdio.h>

int main()
{
	int age;
	int i;
	int sum = 0;

	for (i=0;i<5;i++)
	{
		printf("���̸� �Է��Ͻÿ�:",i);
		scanf_s("%d", &age);
		sum = sum + age;
	}
	printf("��ճ��̴� %.1lf�Դϴ�.", sum/5.0);
	return 0;
}