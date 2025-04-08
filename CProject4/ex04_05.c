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
	num++;//다음식에 1증가
	num++;//후위 연산자
	num++;//다음식에 1증가
	printf("num=%d\n", num);//70
	++num;//자기 자신의 값을 무조건 1증가 
	++num;//전위 연산자
	++num;
	printf("num=%d\n", num);//73
	num--;
	--num;
	num--;
	printf("num=%d\n", num);//70




	return 0;
}