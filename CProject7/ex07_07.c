#include<stdio.h>

int main()
{
	int ary[] = { 1,2,3,4,5 };//1,2,3,4,5,6,7
	int i, r;
	int temp;
	int size;
	size = sizeof(ary) / sizeof(ary[0]);
	printf("처음 배열에 저장된 값:");
	for (i = 0; i < size; i++)
	{
		printf("%3d", ary[i]);
	}
	for (i = 0; i < size-3;i++)
	{
		r = size - 1 - i;
	    temp = ary[i];
		ary[i] = ary[r];
		ary[r] = temp;
	}
	printf("\n바뀐 배열에 저장된 값:");
	for (i = 0; i < size; i++)
	{
		printf("%3d", ary[i]);
	}
	return 0;
}
/*
temp = ary[i]; size-1-i
 0         1   temp=1
ary[i] = ary[4];
  0        5    ary[i]=5
ary[4] = temp;
  0        1    ary[4]=1


 size - 1 - i;
 ary[4]=5
 size=[4]=i의인덱스값
 거기에 계속 바뀌는 i의 숫자를 빼서
ex size - 1 - i(2) =5-1-2=2  인덱스 값 2에 해당하는 3
또한 ary[i] = ary[r]; 여기서 ary[i]의2는3에 해당함으로 3과3이 바뀌는것 
ex size - 1 - i(1) =5-1-1=3  인덱스 값 3에 해당하는 4
ary[i] = ary[r]; 여기서 ary[i]의1는2에 해당함으로 4와2가 바뀌는것
*/


/*(i = 0; i < size - 3; i++)
i=4 i<=size ;i++
temp=ary[i]
ary[i]=temp
*/