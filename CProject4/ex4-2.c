#include<stdio.h>

int main()
{
	int num1, num2;
	char ch;
	printf("���� �� ���ڿ� ���� ���� �Է��Ͻÿ�.\n");
	scanf_s("%d %c %d", &num1, &ch, 1, &num2);
	switch (ch)
	{
	case 'a':
		num1 = num1 + num2;
		printf("����%d�Դϴ�.", num1); //printf("%d\n", num1+num2);
		break;
	case 'b':
		num1 = num1 * num2;
		printf("����%d�Դϴ�.", num1);//printf("%d\n", num1*num2);
		break;
	case 'c':
		num1 = num1 - num2;
		printf("����%d�Դϴ�.", num1); //printf("%d\n", num1 - num2);
		break;
	default:
		puts("�˼� ���� ���");
		break;
	}
	return 0;
}
/*a
5
5
*/