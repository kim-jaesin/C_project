#include<stdio.h>

int main()
{
	char number;
	double batting_avg;
	int age;

	printf("���ȣ�� �Է��ϼ���:");
	scanf_s("%c", &number, 1);
	printf("Ÿ���� �Է��ϼ���:");
	scanf_s("%lf", &batting_avg);
	printf("���̸� �Է��ϼ���:");
	scanf_s("%d", &age);
	//printf("���ȣ:%c\n",number);
	//printf("Ÿ��:%lf\n",batting_avg);
	//printf("����:%d\n",age);
	printf("���ȣ%c\nŸ��%lf\n����%d\n", number, batting_avg, age); //���ȣ9 ,Ÿ��0.9000 ,����21(,����)


	






	return 0;
}

//vitamin_c�߱����� ������� ���ȣ 1������
//9������ 9���� �ֽ��ϴ�. ���ȣ�� Ÿ��,���̸� ����
//�Է� ���� �Ŀ� ���ٿ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�
//�� ���ȣ�� ����.Ÿ���� �Ǽ���,���̴� ���������� ó���Ѵ�.
//���ȣnumber,Ÿ��batting_avg,����age