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
hope i�� �ö�� ���ڿ� ���� ���� �迭�� ���ĺ��� ���
0.0 (h) ,1.1 (o),2.2 (p),3.3 (e) 
*/