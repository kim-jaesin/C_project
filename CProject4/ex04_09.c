#include<stdio.h>

int main()
{
	int nlnput = 0;

	scanf_s("%d", &nlnput);

	if (nlnput >= 10)
	{
		puts("10이상");//printf("10이상\n") puts랑 같음
		//puts("dangling:결합문제");
	}
	else
		puts("10미만");
	
	


	return 0;
}
//puts랑 else이랑 같이 겹침 안겹칠려면 {}를 사용 
//if에 중괄호가 없을때 puts("10이상");은 if가 긍정일때 쓰는것 다음puts는 중괄호가 없어서
// 항상 실행된다.
//else연관되지않은 독립적인 코드이다. 