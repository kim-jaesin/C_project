#include<stdio.h>

int main()
{
	int ary[5] = { 10,20,30,40,50 };
	int* ap;
	ap = ary;//ap=&ary[0] ary의 0번째 주소값이랑 같다.
	
	printf("첫번째 배열요소의 주소값:%p,%p,%p\n", &ary,ary,ap);
	printf("첫번째 배열요소의 값 포인터로 처리:%d,%d\n", *ap,ap[1]);
	ap = &ary[0] + 4;//0000007A4C7DF738,+1=42+2=46
	printf("다섯번째 배열요소의 주소값:%p,%p,%p\n", ap, ary+4, &ary[0]+4);
	printf("다섯번째 배열요소의 값 포인터로 처리:%d\n",*ap);
	return 0;
}