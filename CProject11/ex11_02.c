#include<stdio.h>
int main()
{
	int val = 10;//동일타입 동일변수는 x
	{//괄호가있으면 가능 단 괄호가 끝나면 없어짐
		int val = 20;
		val++;
		printf("val=%d\n", val);
	}
	printf("val=%d\n", val);
	return 0;
}
/*
12월 html웹개발을 배우는데 java를 쓰고 html은 건물로 따지면 뼈대이다. 
*/