#include<stdio.h>
struct cracker
{
	int price;
	int calories;
};

int main()
{
	struct cracker basasak;
	basasak.price;
	basasak.calories;
	printf("�ٻ���� ���ݰ� ������ �Է��ϼ���");
	scanf_s("%d %d", &basasak.price, &basasak.calories);
	printf("����:%d�� Į�θ�:%dkcal", basasak.price, basasak.calories);
	return 0;
}