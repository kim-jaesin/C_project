#include<stdio.h>

int main()
{
	int num;
	printf("���� �Է�:");
	scanf_s("%d", &num);

	if (num < 0)
		printf("�Է� ���� 0���� �۴�");
	if (num > 0)
		printf("�Է� ���� 0���� ũ��");
	if (num == 0)
		printf("�Է� ���� 0�̴�");

	return 0;
}
//���ݺ��� ���� ���α׷��� �κ��� ������ ��	�� �����ϸ� �ٸ��ǰ����� �Ѿ
//