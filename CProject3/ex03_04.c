#include<stdio.h>

int main()
{
	int num1, num2;
	printf("�� ������ �Է��ϼ���.:");
	scanf_s("%d%d", &num1, &num2);

	printf("������ ������� \"%d/%d=%lf\"�Դϴ�.\n",num1,num2,(double)num1/num2);
	
	return 0;
}