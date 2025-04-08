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
	에서 res=5 num=0(+1)
	printf("num=%d\n", num);
	에서 num=0(+1)이 계산되어 num=1
	출력값이1이 된다.
	
	num++는 혼자가 아니다 앞에 식이 있어야한다.*/