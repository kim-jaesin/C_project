#include<stdio.h>

int main()
{
	int ninput = 0;

	scanf_s("%d", &ninput);

	if(ninput>=10)
	{
		if(ninput>20)
			puts("20�ʰ�");
		else
			puts("20����");
	}
	else
	{
		printf("10�̸�");
		if (ninput >= 5)
			puts("5�̻�");
		else
			puts("5����");
	}
	return 0;
}
//10�̸�5�̻����� ���� �����԰� ����