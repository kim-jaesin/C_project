#include<stdio.h>

int main()
{
	char number;
	double batting_avg;
	int age;
	//char name = "�����";
	//char position = "����";
	char name[80], position[80];


	printf("���ȣ�� �Է��ϼ���:");
	scanf_s("%c", &number);
	printf("�̸��� �Է��ϼ���:");
	scanf_s("%s",name,80);
	printf("�������� �Է��ϼ���:");
	scanf_s("%s", position, 80);
	printf("Ÿ���� �Է��ϼ���:");
	scanf_s("%lf", &batting_avg);
	printf("���̸� �Է��ϼ���:");
	scanf_s("%d", &age);
	//printf("���ȣ%c\nŸ��%lf\n����%d\n", number, batting_avg, age); //���ȣ9 ,Ÿ��0.9000 ,����21(,����)
	//printf("�̸�:%s", name);
	//printf("������:%s", position);
	printf("%c��-%s-%s,Ÿ����%lf�̰� ���̴�%d���Դϴ�.", number,name,position, batting_avg, age);

	return 0;
}


/*Vitamin_C�߱����� �����Ͽ� �������̸��� �����ǵ� ������ϴ� ���α׷��� �ۼ��Ͻÿ�.*/