#include<stdio.h>

int main()
{
	//변수(메모리에 값을 저장한다.)
	//단,저장공간에 이름이 붙는다.
	int hap;// 변수선언(4byte)
	hap = 10+20; // hap=30
	printf("%d\n" ,hap); //30
	hap = 50;
	printf("%d", hap);
	printf("%lf", hap);//lf:long float(8byte) 실수
	printf("%f", (float)hap);//f:float
	return 0;
}