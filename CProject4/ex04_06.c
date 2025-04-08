#include<stdio.h>

int main()
{
	int nData = 10, nNewData = 20;
	int nReselt = 10;

	printf("%d\n", nData == nReselt || nData > nNewData);//1,둘중 하나만참이면 무조건 참
	//(참||거짓)
	//printf("%d\n", nData != nReselt || nData > nNewData);
	//0,(거짓||거짓) ||는 또는이라 뒤에것을 체크함
	printf("%d\n", nData != nReselt && nData > nNewData);//&&은 둘다참일때,뒤에것을 참여 안함
	printf("%d\n", nData >= nReselt && ++nNewData);//앞에 참 뒤에도 참 ++nNewData는21임으로 
	                                               //C언어에서는 0이아닌 숫자는 모두 참이다.
	printf("%d\n", nNewData);//21
	return 0;
}
/*(==)=같다, (||)=또는 or*/