//�����Ͱ� ������ �ּҸ� �����ϰ�, �̸� ���� �ش� ������ ���� �����ϴ� �ڵ�
/*
#include<stdio.h>
int main()
{
	char c = 'A';//���������� A��� ���ڷ� �ʱ�ȭ
	char* p = &c;//������ ���� ������ ���� �ּҰ��� ����
	printf("%p\n", &c);//����c�� �ּҰ� ���
	printf("%c  %c\n", c, *&c);//����c�� ���ڿ� &c�� �ּҴϱ� �װ� ������(*)�ؼ� ���� c�� �������� ��� ǥ��  
	printf("%c\n", *p);//������ ������ ����� ������ ��
	return 0;
}*/
/*
#include<stdio.h>
int main()
{
	char q = 'F';
	char* qw = &q;
	printf("%c", *&q);
	return 0;
}*/
//�����͸� ����� �� ������ ���� ���� ��ȯ�� �� ���� �ڵ�
#include<stdio.h>
void exchange(int*, int*);//�Լ� ���� 
int main()
{
	int cheoi = 10, metel = 20; 
	exchange(&cheoi, &metel);
	printf("cheoi=%d,metel=%d\n", cheoi, metel);
	return 0;
}
void exchange(int* cp, int* mp)
{
	int temp;
	temp = *cp;
	*cp = *mp;
	*mp = temp;
}