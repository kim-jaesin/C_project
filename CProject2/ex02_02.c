#include<stdio.h>

int main()
{
	int amount; //���� ��뷮 
	double price, tax, total;
	
	printf("�����뷮�� �Է��ϼ���:");
	scanf_s("%d", &amount);
	price = amount * 88.5 + 660;
	tax = price * 0.09;
	total = price + tax;
	printf("���� ��ü����� %lf���Դϴ�.", total);

	



	return 0;
}
//*�����뷮��kw������ �Է��Ϸ��� ������� ��� �ִ����α׷��� �ۼ� �Ͻÿ�
// ����)�⺻���:660��kw�� �����;88.5
// ��ü���:�⺻���+(�����뷮*kw�� �����)������ ��ü����� 9%
// ���� �����:��ü���+���� 