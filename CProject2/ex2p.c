#include<stdio.h>

int main()
{
	int input, change, coffee;
	int w500, w100, w50, w10;

	printf("���� �Է��Ͻÿ�:");
	scanf_s("%d", &input);
	printf("Ŀ�ǰ��� �Է��Ͻÿ�:");
	scanf_s("%d", &coffee);

	change = input - coffee;
	w500 = change / 500;
	change = change % 500;
	w100 = change / 100;   
	change = change % 100;
	w50 = change / 50;
	change = change % 50;
	w10 = change / 10;
	change = change % 10;

	printf("500��¥�� ����%d�� \n", w500);
	printf("100��¥�� ����%d�� \n", w100);
	printf("50��¥�� ����%d�� \n", w50);
	printf("10��¥�� ����%d�� \n", w10);

	printf("500��¥�� ����%d�� �ݾ��� %d \n", w500,w500*500);
	printf("100��¥�� ����%d�� �ݾ��� %d \n", w100,w100*100);
	printf("50��¥�� ����%d�� �ݾ��� %d \n", w50,w50*50);
	printf("10��¥�� ����%d�� �ݾ��� %d\n", w10,w10*10);



	return 0;
}