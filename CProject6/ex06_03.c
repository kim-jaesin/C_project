#include<stdio.h>
int Add(int, int);
void ShowAddResuit(int);//void=��ȯ���� ����. �Ű������� �ִ�.
int Readnum(void);//�Ű������� ����. ��ȯ���� �ִ�.
void HowToUseThisProg(void);//=��ȯ���� �Ű������� ����.
//�Լ� 4��,�Լ��� ����
int main()
{
	int num1, num2, result;
	HowToUseThisProg();
	num1= Readnum();
	num2=Readnum();//�ٽû���
	result = Add(num1, num2);
	ShowAddResuit(result);

	return 0;
}
void HowToUseThisProg()//����:��ȯ���� �Ű������� ����.
{
	printf("�� ���� ������ �Է��ϸ� ���� ����� ��µ˴ϴ�.\n");
	printf("�� ���� ������ �Է��ϼ���.\n");
}
int Readnum()//������ ���� ���� ��ų��:�Ű������� ����. ��ȯ���� �ִ�. 
{
	int num;
	scanf_s("%d", &num);
	return num;//return�� ������ �����
}
int Add(int num1, int num2)
{
	//int result;
	//result = num2 + num1;

	return num1 + num2;
}
void ShowAddResuit(int num)//�޴°� ������ �ִ°� ����  ����
{
	printf("���� ��� ���:%d\n", num);
}
//�Լ��� �ѹ� ����� ������ ������ �����ϴ�.