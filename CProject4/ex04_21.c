#include<stdio.h>

int main()
{
	int code;//�ڵ��ȣ
	int amount;//��뷮
	double basic = 0;//�⺻���
	double price = 0;//kw�� ���
	double tax_rate = 0;//���ݺ���
	double total;//��ü���
	double tax;//����
	printf("�ڵ��ȣ�� �Է��ϼ���(1:������,2:�����,3:������):\n");
	scanf_s("%d", &code);
	printf("���� ��뷮�� �Է��ϼ���:\n");
	scanf_s("%d", &amount);
	switch (code)
	{
	case 1:
		tax_rate = 0.09;
		basic = 1130;
		price = 127.8;
		break;
	case 2:
		tax_rate = 0.08;
		basic = 660;
		price = 88.5;
		break;
	case 3:
		tax_rate = 0.05;
		basic = 370;
		price = 52;
	}
	total = (amount * price) + basic;
	tax = total * tax_rate;
	
	printf("���� �������� %.0lf���Դϴ�.\n", total + tax);


	return 0;
}
//case�� ''�� �����϶��� ���ڴ� x
//�׻� �ߺ��Ǵ°��� 1���� �ϰ� ����� 