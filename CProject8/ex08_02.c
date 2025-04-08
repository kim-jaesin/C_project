#include<stdio.h>

int main()
{
	int a = 10;
	int* ap = &a;
	char al = 'a';
	printf("%d\n", a);//=10**
	printf("%p\n", &a);//00000034AEEFF5C4 a의시작 주소값**
	printf("%p\n", ap);//00000034AEEFF5C4 p에 저장된 a의 시작 주소값**
	printf("%d\n", *ap);//포인터 변수를 사용하여 a의 변수의 값을 출력**
	printf("%p\n", &ap);//포인터 변수의 시작 주소값**
	printf("%x", al); //16진수 아스키 코드'a'는 61
    //전부 구별할 줄 알아야 한다.**
	return 0;
}
/*
10
000000AA39B2F794
000000AA39B2F794
10
000000AA39B2F7B8
*/

/*

*/