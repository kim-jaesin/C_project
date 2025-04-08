#include<stdio.h>

int main()
{
	char str[80]="dream";
	//int a = 10;
	//a=100
	//str = "dream2";//"2",2
	//배열명은 시작 주소값이다. 즉 상수이다.
	// 한마디로 변수에 값을 주어야하는데 상수에 줘서 에러가 난다.
	//ex)100 = 100;
	printf("%x", str);

	return 0;
}