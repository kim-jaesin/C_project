#include<stdio.h>

int main()
{
	char ch = 'A'; //char ����Ÿ��(1byte)
	int ch2 = 'A';

	printf("ch2+5=%d", 'A' + 5);

	//sizeof()������:�޸��� ũ�⸦ ����Ʈ ������ ���
	printf("literal int size:%d\n", sizeof(7)); //4����Ʈ
	printf("literal int size:%d\n", sizeof(7.14)); //8����Ʈ
	printf("literal int size:%d\n", sizeof('A')); //4����Ʈ

	printf("literal char size:%d\n", sizeof(ch));//1����Ʈ
	printf("literal int size:%d\n", sizeof(65));//4
	printf("literal char size:%d\n", sizeof("65"));//4



	return 0;
}