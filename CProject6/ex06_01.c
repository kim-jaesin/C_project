#include<stdio.h>
int sum(int a, int b);
int main()
{
int a = 10, b = 20;
int res;
res = sum(a, b);
printf("결과:%d\n", res);
return 0;
}

int sum(int a,int b)//함수는 독립된 프로그램이다.  *()변수=매개변수:외부로부터 값을 받는 변수*
{
	int res;
	res = a + b;
	printf("결과:%d\n", res);
	return res;//*함수는 종료가 되면 메모리에서 없어진다.*

}





//함수(기능) :호출해야 작동한다.
//int main()//운영체제가 호출,int는 돌려주는값의 타입 리턴이 0.0으로 끝나면 더블로 나옴 
//{
	//int a = 10, b = 20;
	//int res;
	//res=sum(a, b);//sum함수 호출 sum으로 갔다가 돌아와서 밑에것 실행
	//printf("결과:%d\n", res);
	//return 0;//함수를 호출한 곳으로 0이란 값을 돌려준다.-main(),함수 (끝)이라는 뜻도 있다.
//}