#include<stdio.h>
int Absocompare(int num1, int num2);
//���밪�� ū ���� ����:-3<5,-7>-3,-7>2
int GatAbsoValue(int num);
//���������� ���밪�� ��ȯ
int main()
{
	int num1, num2;
	//int result;
	printf("�� ���� ������ �Է��Ͻÿ�:\n");
	scanf_s("%d %d", &num1, &num2);//-7 5
	//result = Absocompare(num1,num2);//-7  5
	//result = Absocompare(num1,num2);
	//printf("%d��%d�� ���밪�� ū ����:%d\n",num1,num2,result);
	printf("���밪�� ū ����:%d\n", num1, num2, Absocompare(num1,num2));
	return 0;
}
int Absocompare(int num1, int num2)//-7  5
{
	//if(num1>num2)��
	if(GatAbsoValue(num1)> GatAbsoValue(num2))//�Լ� �ȿ��� �ٸ� �Լ��� ȣ�� �� �� �ִ�.,���밪 ��
		return num1;
	else
		return num2;
}
int GatAbsoValue(int num)//������ �����
{
	if (num < 0)
	{
		return num*(-1);
	}
	return num;
}
