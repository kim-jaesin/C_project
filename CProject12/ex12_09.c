#include<stdio.h>
int main()
{
	char a[][10] = { "horse","fox","hippo","tiger" };
	char* pa[] = { a[0],a[1],a[2],a[3] };
	int i;
	int count;
	count = sizeof(pa) / sizeof(pa[0]);
	for (i=0;i< count;i++)
	{
		printf("%c",pa[i][i]);//hope
	}
	return 0;
}
/*
hope i가 올라는 숫자에 따라 열과 배열을 알파벳이 출력
0.0 (h) ,1.1 (o),2.2 (p),3.3 (e) 
*/