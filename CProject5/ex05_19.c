#include<stdio.h>
//������ �Է� �� ������ �Էµ� ���� �����Ͽ� ���
int main()
{
	int sum = 0;
	int n ;
	//while ,scanf_s ,if
	while (1)//1�� ���� ��� ���ѹݺ�
	{
	    printf("0�Ǵ� ������� �Է��ϼ���:");
		scanf_s("%d", &n);
		sum = sum + n;
		if (n < 0)
		{
			break;
		}
	}
    printf("�� ���� ������ ��:%d\n", sum);
	return 0;
}

/*
if (n < 0)
break;
sum += n;
*/