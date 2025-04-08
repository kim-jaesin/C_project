#include<stdio.h>

int main()
{
	int Iot;

	printf("당첨 번호를 입력하세요:");
	scanf_s("%d", &Iot);//1,2,3

	switch (Iot)
	{
	case 1:
		printf("김서방\n");//1 실수값은 안됨 반드시 정수 값이나 문자를 쓴다.
		break;
	case 2://case뒤에 오는값은 정수만 된다.
		printf("홍가네\n");//2 문자'2'의 정수값
		break;
	case 3:
		printf("안산댁\n");//3 
		break;//마지막은 안해도 된다.
	default: //해당되는 값이 없을때
		printf("당첨자가 없습니다.");
	}



	return 0;
}

//swtich~case:스위치 케이스문=