#include<stdio.h>
#include<string.h>
int main()
{
	char name[10] = { 0 };//�̸�
	char tel[20] = { 0 };//��ȭ��ȣ
	char address[50] = { 0 };//�ּ�
	char str[80] = { 0 };//�Էµ� ������ ���� �����
	printf("�̸��� �Է��ϼ���:");
	gets_s(name, sizeof(name));
	strcat_s(str, sizeof(str), name);
	strcat_s(str, sizeof(str), ",");
	printf("��ȭ��ȣ�� �Է��ϼ���:");
	gets_s(tel, sizeof(tel));
	strcat_s(str, sizeof(str), tel);
	strcat_s(str, sizeof(str), ",");
	printf("�ּҸ� �Է��ϼ���:");
	gets_s(address, sizeof(address));
	strcat_s(str, sizeof(str), address);
	strcat_s(str, sizeof(str), ",");
	puts( str);
	return 0;
}