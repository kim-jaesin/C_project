#include<stdio.h>
//������ �Է� �� ������ �Էµ� ���� �����Ͽ� ���
int main()
{
	int sum = 0;
	int n = 0;
	//while ,scanf_s ,if
	printf("0�Ǵ� ������� �Է��ϼ���:");
	while (n>=0)
		{
		scanf_s("%d", &n);
		sum = sum + n;
		if (n < 0)
			break;
	}
	printf("�� ���� ������ ��:%d\n", sum);
	return 0;
}