#include<stdio.h>

int main()
{
	int ary[5] = { 10,20,30,40,50 };
	int* ap;
	ap = ary;//ap=&ary[0] ary�� 0��° �ּҰ��̶� ����.
	
	printf("ù��° �迭����� �ּҰ�:%p,%p,%p\n", &ary,ary,ap);
	printf("ù��° �迭����� �� �����ͷ� ó��:%d,%d\n", *ap,ap[1]);
	ap = &ary[0] + 4;//0000007A4C7DF738,+1=42+2=46
	printf("�ټ���° �迭����� �ּҰ�:%p,%p,%p\n", ap, ary+4, &ary[0]+4);
	printf("�ټ���° �迭����� �� �����ͷ� ó��:%d\n",*ap);
	return 0;
}