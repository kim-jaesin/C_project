#include<stdio.h>

int main()
{
	int num = 10;
	num = 20;
	num = 30;
	printf("num=%d\n", num); //num=30
	num = num + 10;
	num = num + 10;
	num = num + 10;
	printf("num=%d\n", num); //num=60
	num = num + 1;
	num = num + 1;
	num = num + 1;
	printf("num=%d\n", num); //num=63
	num += 1;
	printf("num=%d\n", num); //num=64
	num += 3;
	printf("num=%d\n", num); //num=67
	num++;//�����Ŀ� 1����
	num++;//���� ������
	num++;//�����Ŀ� 1����
	printf("num=%d\n", num);//70
	++num;//�ڱ� �ڽ��� ���� ������ 1���� 
	++num;//���� ������
	++num;
	printf("num=%d\n", num);//73
	num--;
	--num;
	num--;
	printf("num=%d\n", num);//70




	return 0;
}