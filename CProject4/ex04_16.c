#include<stdio.h>

int main()
{
	int Iot;

	printf("��÷ ��ȣ�� �Է��ϼ���:");
	scanf_s("%d", &Iot);//1,2,3

	switch (Iot)
	{
	case 1:
		printf("�輭��\n");//1 �Ǽ����� �ȵ� �ݵ�� ���� ���̳� ���ڸ� ����.
		break;
	case 2://case�ڿ� ���°��� ������ �ȴ�.
		printf("ȫ����\n");//2 ����'2'�� ������
		break;
	case 3:
		printf("�Ȼ��\n");//3 
		break;//�������� ���ص� �ȴ�.
	default: //�ش�Ǵ� ���� ������
		printf("��÷�ڰ� �����ϴ�.");
	}



	return 0;
}

//swtich~case:����ġ ���̽���=