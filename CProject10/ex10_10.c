#include<stdio.h>

int main()
{
	char fruit[80] = "apple";
	char* strp = "strawberry";
	int len;
	len = strlen(fruit);//null���� ����
	printf("���ڿ��� ����:%d\n", len);//5

	len = strlen(strp);//strlen���ڿ��� ���̸� ������ �ش�.null���� ����
	printf("���ڿ��� ����:%d\n", len);//10

	return 0;
}