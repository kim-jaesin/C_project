#include<stdio.h>
int Add(int, int);
void ShowAddResuit(int);//void=반환값이 없다. 매개변수가 있다.
int Readnum(void);//매개변수가 없다. 반환값이 있다.
void HowToUseThisProg(void);//=반환값과 매개변수가 없다.
//함수 4개,함수의 종류
int main()
{
	int num1, num2, result;
	HowToUseThisProg();
	num1= Readnum();
	num2=Readnum();//다시생김
	result = Add(num1, num2);
	ShowAddResuit(result);

	return 0;
}
void HowToUseThisProg()//제목:반환값과 매개변수가 없다.
{
	printf("두 개의 점수를 입력하면 덧셈 결과가 출력됩니다.\n");
	printf("두 개의 정수를 입력하세요.\n");
}
int Readnum()//뭔가를 만들어서 리턴 시킬때:매개변수가 없다. 반환값이 있다. 
{
	int num;
	scanf_s("%d", &num);
	return num;//return을 만나면 사라짐
}
int Add(int num1, int num2)
{
	//int result;
	//result = num2 + num1;

	return num1 + num2;
}
void ShowAddResuit(int num)//받는게 있지만 주는건 없다  최종
{
	printf("더셈 결과 출력:%d\n", num);
}
//함수는 한번 만들어 놓으면 재사용이 가능하다.