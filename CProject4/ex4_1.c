#include<stdio.h>

int main()
{
	int num1, num2;
	char ch;
	printf("���� 2���� �Է��Ͻÿ�: ");
	scanf_s("%d%d", &num1, &num2);
	printf("�����ȣ�� �Է��Ͻÿ�:");
	scanf_s(" %c", &ch, 1);
	switch(ch)
	{
	case '+':
		num1 = num1 + num2;
		printf("���� % d�Դϴ�.", num1);
		break;
	case'-':
		num1 = num1 - num2;
		printf("���� % d�Դϴ�.", num1);
		break;
	case'*':
		num1 = num1 * num2;
		printf("���� % d�Դϴ�.", num1);
		break;
	case'/':
		if (num1 < 0)
		{
			(float)num1 = num1 / num2;
			printf("���� %lf�Դϴ�.", (float)num1);
		}
	}
	return 0;
}
