#include<stdio.h>
#include<string.h>
int main()
{
	char fruit[80] = "straw";
	strcat_s(fruit, sizeof(fruit),"berry");
	printf("����� ���ڿ�:%s\n", fruit);
	return 0;
}
/*
strcat ���ڿ� ���� �׷��� ��½� strawberry�� ���´�.
*/