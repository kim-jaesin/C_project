#include<stdio.h>

int main()
{
	//����(�޸𸮿� ���� �����Ѵ�.)
	//��,��������� �̸��� �ٴ´�.
	int hap;// ��������(4byte)
	hap = 10+20; // hap=30
	printf("%d\n" ,hap); //30
	hap = 50;
	printf("%d", hap);
	printf("%lf", hap);//lf:long float(8byte) �Ǽ�
	printf("%f", (float)hap);//f:float
	return 0;
}