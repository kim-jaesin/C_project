#include<stdio.h>

int main()
{
	printf("1234578901234567890\n");
	printf("%10c%c\n",'A','B'); //10ĭ �ڿ� A�ٷεڿ� B�� ����
	printf("%-10c%c\n", 'A', 'B');//A�� �Ǿ� B�� �״��
	//printf("%10d\n",2024);
	printf("%010d\n",2024); //2024�տ� 0���� ä���� 
	printf("%+d\n", 128);
	printf("%xd\n", 2024);//%#x�϶� 2024�� 0x7e8d�� ��Ÿ�� (0x=16���� ǥ���)
	//%x =7e8d�� ��Ÿ��
	printf("%#010x\n", 0x7d5);//#010x  
	return 0;
}