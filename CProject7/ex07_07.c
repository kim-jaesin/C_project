#include<stdio.h>

int main()
{
	int ary[] = { 1,2,3,4,5 };//1,2,3,4,5,6,7
	int i, r;
	int temp;
	int size;
	size = sizeof(ary) / sizeof(ary[0]);
	printf("ó�� �迭�� ����� ��:");
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
	printf("\n�ٲ� �迭�� ����� ��:");
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
 size=[4]=i���ε�����
 �ű⿡ ��� �ٲ�� i�� ���ڸ� ����
ex size - 1 - i(2) =5-1-2=2  �ε��� �� 2�� �ش��ϴ� 3
���� ary[i] = ary[r]; ���⼭ ary[i]��2��3�� �ش������� 3��3�� �ٲ�°� 
ex size - 1 - i(1) =5-1-1=3  �ε��� �� 3�� �ش��ϴ� 4
ary[i] = ary[r]; ���⼭ ary[i]��1��2�� �ش������� 4��2�� �ٲ�°�
*/


/*(i = 0; i < size - 3; i++)
i=4 i<=size ;i++
temp=ary[i]
ary[i]=temp
*/