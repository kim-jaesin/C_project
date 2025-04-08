#include<stdio.h>

int main()
{
	char sel;

	printf("M오전, A오후, E저녁\n");
	printf("입력: ");
	scanf_s("%c", &sel,1);//세 번째 인자는 %c를 입력할때만 쓴다. 
	//char name[80] 이라고 함수선언을 하면 scanf_s 세 번째 인자에 80이라고 적는다. 

	switch (sel)
	{
	case 'm':
	case 'M':
		printf("Morning\n");
		break;
	case 'A':
	case 'a':
		printf("Afternoon\n");
		break;
	case 'e':
	case 'E':
		printf("Evening\n");
		break;
	default: 
		printf("잘못된 입력입니다.\n");
		break;

	}


	return 0;
}
//sel 변수가 'M' 또는 'm'일 때 case 'M': 또는 case 'm':에 해당하게 됩니다.