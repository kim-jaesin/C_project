#include<stdio.h>

int main()
{
	int anData[4] = { 1,2,3,4 };//선언과 동시에 초기화 일반 변수 선언과 다르게 {}를 넣는다.
	int i;
	
	for (i = 0; i < 4; i++) //i의 값은 0123 anData의 1234가 출력 anData배열의 1에 i의값1을 넣어라
	{
		printf("anData는%d이다.\n", anData[i]);
	}
	//모든 배열의 이름은 시작 주소이다. 
	//첫 번째 요소(인덱스가 0번인 요소)의 주소이다.
	printf("\n%x  %X", anData, anData);
	printf("\n%x  %X\n", &anData[0], &anData[0]);//c48ff518  C48FF518=주소를 16비트로 나타냄
	//메모리에 int4byte로 4개를 anData로 선언 
	//메모리는 1byte단위로 주소가 되어있다. 
	//배열명은 1000번째(시작번지)를 나타냄 c언어에서 나타내는 주소값은 무조건 시작번지로 알아야함
	// anData[(i)0]=1000번째 위치 anData[(i)1]=1004 anData[(i)2]=1008

	return 0;
}