#include<stdio.h>

int main()
{
	int ninput = 0;
	char chCredit = 'x';

	scanf_s("%d", &ninput);
	if(90 <= ninput)
		chCredit = 'A';
	else if(ninput>=80)
		chCredit = 'B';
	else if (ninput >= 70)
		chCredit = 'C';
	else if (ninput >= 60)
		chCredit = 'D';
	else
		chCredit = 'F';

	printf("credit:%c\n", chCredit);
	/*if���� ���Ͻ� �ٷι� ��ɹ��� �����ϰԵȴ�.�׷��Ƿ� �����ʱ�ȭ�� ����Ǿ�
	���� 1������5���� printf ��ɹ��� {}�� ���� �ʿ���� �������� ����� �ڵ带 �����ϰ� �Ѵ�.*/
	return 0;
}
//�������� �ϽŰ�
