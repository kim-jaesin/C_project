#include<stdio.h>

int main()
{
	char ch1, ch2;

	printf("�� ���� ���ڸ� �Է��ϼ���:");
	//scanf_s("%c%c", &ch1,1, &ch2,2); //%c%c ���̸� ���� �ȵ�
	scanf_s("%c %c", &ch1, 1, &ch2, 2);
	printf("ù��° ����:%c\n", ch1);
	printf("�ι�° ����:%c\n", ch2);

	return 0;
}