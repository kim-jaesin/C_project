#include<stdio.h>

int main()
{
	char str[80];
	printf("���ڿ��� �Է��ϼ���:");
	//scanf_s("%s", str,50); �������� ������ ����
	//printf("�Էµ� ���ڿ�:%s\n", str);
	gets(str,80);
	puts(str);//������ ���Ÿ� printf

	return 0;
}