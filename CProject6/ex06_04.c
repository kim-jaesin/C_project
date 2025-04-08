#include<stdio.h>
int Absocompare(int num1, int num2);
//절대값이 큰 정수 반한:-3<5,-7>-3,-7>2
int GatAbsoValue(int num);
//전달인자의 절대값을 반환
int main()
{
	int num1, num2;
	//int result;
	printf("두 개의 정수를 입력하시오:\n");
	scanf_s("%d %d", &num1, &num2);//-7 5
	//result = Absocompare(num1,num2);//-7  5
	//result = Absocompare(num1,num2);
	//printf("%d와%d중 절대값이 큰 정수:%d\n",num1,num2,result);
	printf("절대값이 큰 정수:%d\n", num1, num2, Absocompare(num1,num2));
	return 0;
}
int Absocompare(int num1, int num2)//-7  5
{
	//if(num1>num2)비교
	if(GatAbsoValue(num1)> GatAbsoValue(num2))//함수 안에서 다른 함수를 호출 할 수 있다.,절대값 비교
		return num1;
	else
		return num2;
}
int GatAbsoValue(int num)//음수를 양수로
{
	if (num < 0)
	{
		return num*(-1);
	}
	return num;
}
