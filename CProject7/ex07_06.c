#include<stdio.h>

int main()
{
	int ary[] = { 3,5,7,8,10,12,15,15,6,5,13,15,16,17,13,
				 12,7,19,4,7,16,20,19 };//23 92
	int i;
	int size;
	int n;
	int count = 0;
	printf("찾기를 원하는 숫자를 입력하세요(1~20) :");
	scanf_s("%d", &n);
	size = sizeof(ary) / sizeof(ary[0]);
	for (i=0;i< size; i++)
	{
		if (ary[i] == n)// (i==0)이라고 적으면 인덱스 안에 있는숫자와 비교하는것
		{
			count++;
		}
	}
	printf("숫자%d는 배열에 %d개 있습니다\n.", n, count);

	return 0;
}