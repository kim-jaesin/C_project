#include<stdio.h>

int main()
{
	int input, change, coffee;
	int w500, w100, w50, w10;

	printf("���� �Է��Ͻÿ�:");
	scanf_s("%d", &input); //1000��
	//Ŀ�ǰ� 150��,1000���� �ְ� �Ž�����850���� ����
	//������(/).%������ ex)10%3=1 ��Ʈ:���� �缱��
	//�ڵ����δ� ��� �����ؾ��Ѵ�.
	printf("Ŀ�ǰ��� �Է��Ͻÿ�:");
	scanf_s("%d", &coffee);

	change = input - coffee;
	w500 = change / 500;
	change = change % 500; //850������ %(������)500��=350
	w100 = change / 100;   // ������ 500���� �� ������(%)��� �����齱��.
	change = change % 100;
	w50 = change / 50;
	change = change % 50;
	w10 = change / 10;
	change = change % 10;

	printf("500��¥�� ����%d�� \n", w500);
	printf("100��¥�� ����%d�� \n", w100);
	printf("50��¥�� ����%d�� \n", w50);
	printf("10��¥�� ����%d�� \n", w10);







	return 0;
}