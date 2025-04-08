#include<stdio.h>

int main()
{
	char ch = 'A'; //char 문자타입(1byte)
	int ch2 = 'A';

	printf("ch2+5=%d", 'A' + 5);

	//sizeof()연산자:메모리의 크기를 바이트 단위로 계산
	printf("literal int size:%d\n", sizeof(7)); //4바이트
	printf("literal int size:%d\n", sizeof(7.14)); //8바이트
	printf("literal int size:%d\n", sizeof('A')); //4바이트

	printf("literal char size:%d\n", sizeof(ch));//1바이트
	printf("literal int size:%d\n", sizeof(65));//4
	printf("literal char size:%d\n", sizeof("65"));//4



	return 0;
}