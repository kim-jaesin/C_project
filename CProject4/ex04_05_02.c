#include<stdio.h>

int main()
{
	int num = 0;
	int res = 0;

	res = num++ + 5;
	printf("num=%d,res=%d\n", num,res);//1 5
	res = ++num + 5;
	printf("num=%d,res=%d\n", num, res);//2 7
	res = num++ + 5;
	printf("num=%d,res=%d\n", num, res);//3 7
	res = ++num + 5;
	printf("num=%d,res=%d\n", num, res);//4 9
 

	return 0;
}
/*res = num++ + 5;
	���� res=5 num=0(+1)
	printf("num=%d\n", num);
	���� num=0(+1)�� ���Ǿ� num=1
	��°���1�� �ȴ�.
	
	num++�� ȥ�ڰ� �ƴϴ� �տ� ���� �־���Ѵ�.*/