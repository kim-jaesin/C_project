#include<stdio.h>

int main()
{
	int ninput;
	char chCredit;

	printf("������ �Է��Ͻÿ�:");
	scanf_s("%d", &ninput);

	if (90 <= ninput)
	{
		chCredit = 'A';
		printf("credit:%c\n", chCredit);
	}
	else if (80 <= ninput && ninput < 90)
	{
		chCredit = 'B';
		printf("credit:%c\n", chCredit);
	}
	else if (70 <= ninput && ninput < 80)
	{
		chCredit = 'C';
		printf("credit:%c\n", chCredit);
	}
	else if (60 <= ninput && ninput < 70)
	{
		chCredit = 'D';
		printf("credit:%c\n", chCredit);
	}
	else
	{
		chCredit = 'F';
		printf("credit:%c\n", chCredit);
	}
	return 0;
}
/*90�� �̻�'A',80���̻�'B'
70�� �̻�'C',60���̻�'D' �׿� 'F'*/