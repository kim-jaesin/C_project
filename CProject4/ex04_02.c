#include<stdio.h>

int main()
{
	int nData = 10, nNewData = 20;
	int nResult = 10;

	printf("%d\n", nData == nResult);//==:같다. 참
	printf("%d\n", nData != nResult);//!=:다르다. 거짓
	printf("%d\n", nData > nResult);//거짓
	printf("%d\n", nData < nResult);//거짓
	printf("%d\n", nData >= nResult);//참
	printf("%d\n", nData <= nResult);//참
	return 0;
}