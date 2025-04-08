#include<stdio.h>

int main()
{
	int nData = 10;
	int* pnData = &nData;

	printf("%d,%d\n", nData, *pnData);//10,10
	printf("%p,%p\n", &nData, pnData);//nData의 시작주소,p의값 출력 (a의 주소와 동일)

	*pnData = 20;//중요 :포인터를 사용하여 함수에 인자를 전달하면 함수에서 원래 변수의 값을 직접 변경할 수 있다.**
	printf("%d\n", nData);

	return 0;
}
//포인터 변수는 주소로 받게 되어 있다.
// *ap=*ap+10 