#include<stdio.h>

int main()
{
	int nData = 0, x = 10, y = 20;
	//조건 연산자
	nData = x < y ? x : y; //조건식? 참:거짓 여기서 nDaTa가 10으로 나오는데
	//그 이유는 x < y=참(1),x : y=거짓(0)
	printf("%d\n", nData);

	if (x<y)
		nData = x;
	else
		nData = y;
	printf("%d\n", nData);



	return 0;
}
/*
?=조건식이 참일 경우: ? 바로 뒤의 값을 반환합니다.
:=조건식이 거짓일 경우: : 바로 뒤의 값을 반환합니다.
*/