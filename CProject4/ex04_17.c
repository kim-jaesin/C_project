#include<stdio.h>

int main()
{
	char sel;

	printf("M����, A����, E����\n");
	printf("�Է�: ");
	scanf_s("%c", &sel,1);//�� ��° ���ڴ� %c�� �Է��Ҷ��� ����. 
	//char name[80] �̶�� �Լ������� �ϸ� scanf_s �� ��° ���ڿ� 80�̶�� ���´�. 

	switch (sel)
	{
	case 'm':
	case 'M':
		printf("Morning\n");
		break;
	case 'A':
	case 'a':
		printf("Afternoon\n");
		break;
	case 'e':
	case 'E':
		printf("Evening\n");
		break;
	default: 
		printf("�߸��� �Է��Դϴ�.\n");
		break;

	}


	return 0;
}
//sel ������ 'M' �Ǵ� 'm'�� �� case 'M': �Ǵ� case 'm':�� �ش��ϰ� �˴ϴ�.