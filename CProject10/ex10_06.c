#include<stdio.h>

int main()
{
	int age;
	char* greeting;
	printf("���̸� �Է��ϼ���:");
	scanf_s("%d", &age);
	if (age > 30)
	{
		//printf("ó�� �˰ڽ��ϴ�.");
		greeting = "ó�� �˰ڽ��ϴ�.";
	}
	else
	{	//printf("�ݰ�����.");
		greeting = "�ݰ�����";
	}
	printf("�λ縻:%s", greeting);


	return 0;
}