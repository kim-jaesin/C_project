#include<stdio.h>

int main()
{
	int num1, num2;
	char ch;
	printf("���� �� ���ڿ� ���� ���� �Է��Ͻÿ�.\n");
	scanf_s("%c%d%d", &ch, 1, &num1, &num2);
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
/*���� �ѱ��ڿ� ���� ���� �Է�,b 40 50
a:�� ���� ���� 
b:�μ��� ����
c:���� �Էµ� �������� ���߿� �Է��� ������ ��
�ش���� ������ "�˼� ���� ���"�̶�� ���ڿ��� ���
*/

/*���� �Ǽ��Ѱ�
_s�� �� �ڵ忡 ���ڰ� ���� �� �� ��ŭ ���ڸ� �ִ´�.
puts�� �ܼ��� ���ڿ��� ������ ����. \n,%d�����ſ� ���� ������ ������ \n,%d �� ��� �ȴ�. */