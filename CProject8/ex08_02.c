#include<stdio.h>

int main()
{
	int a = 10;
	int* ap = &a;
	char al = 'a';
	printf("%d\n", a);//=10**
	printf("%p\n", &a);//00000034AEEFF5C4 a�ǽ��� �ּҰ�**
	printf("%p\n", ap);//00000034AEEFF5C4 p�� ����� a�� ���� �ּҰ�**
	printf("%d\n", *ap);//������ ������ ����Ͽ� a�� ������ ���� ���**
	printf("%p\n", &ap);//������ ������ ���� �ּҰ�**
	printf("%x", al); //16���� �ƽ�Ű �ڵ�'a'�� 61
    //���� ������ �� �˾ƾ� �Ѵ�.**
	return 0;
}
/*
10
000000AA39B2F794
000000AA39B2F794
10
000000AA39B2F7B8
*/

/*

*/