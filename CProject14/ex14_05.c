#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char temp[80];//�ӽ� ���� �迭,����� ũ�� Ȯ���Ѵ�.
	char* str[3];//���� �Ҵ�� �������� ������ ������ �迭
	for (int i = 0;i<3;i++)
	{
		printf("���ڿ��� �Է��ϼ���:");
		gets(temp);//���ڿ� �Է� �ڵ����� \0�� �߰�
		str[i] = (char*)malloc(strlen(temp)+1);//�Է¹��� ���ڿ��� ���̿� �°� �����Ҵ� temp�� ������ �����
		strcpy_s(str[i], strlen(temp)+1,temp);//���� �Ҵ�� �������� ���ڿ��� �����Ѵ�.
	}
	for (int i = 0; i < 3; i++)
	{
		printf("%s\n", str[i]);
	}
	for (int i = 0; i < 3; i++)
	{
		free(str[i]);
	}
	return 0;
}