#include<stdio.h>

int main()
{
	int nData = 10, nNewData = 20;
	int x = 0, y = 0;

	printf("%d\n", !nData && nNewData);//!nData=10이 아니다 거짓으로 nNewData판단 x 만약
	                                   //뒤의 결과 0
	printf("%d\n", !(nData && x)); // nData=참 x=거짓
	printf("%d\n", !nData && x); //0
	printf("%d\n", x || !y);  //x=거짓 뒤에꺼 신경 안씀 
	printf("%d\n", !(x && !y));//=1 x는 거짓,뒤에꺼 신경 안씀 하지만 앞에! 붙어서 1(참)이 나옴

	return 0;
}