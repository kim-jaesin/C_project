#include<stdio.h>
void increase();
int main()
{
	int i;
	for (i = 0; i < 5; i++)//for문은 반복을 적확히 할때 좋음
	{
		increase();//함수를 5번 호출됨
	}
	return 0;
}

void increase()
{
	static int sum;
	sum++;
	printf("sum:%d\n",sum);
}
/*
초기화를 안했는데 작동이 되는 이유는 static은 자동으로 0초기화를 한다.
*/