#include<stdio.h>

int main()
{
	int ninput = 0;
	char chCreate;

	scanf_s("%d", &ninput);//0~100

	switch (ninput/10)//상술연산:+,-,*,/
	{
	case 10:
	case 9:
		chCreate = 'A';
		//printf("chCreate:%c\n", chCreate);
		break;
	case 8:
		chCreate = 'B';
		//printf("chCreate:%c\n", chCreate);
		break;
	case 7:
		chCreate = 'C';
		//printf("chCreate:%c\n", chCreate);
		break;
	case 6:
		chCreate = 'D';
		//printf("chCreate:%c\n", chCreate);
		break;
	default:
		chCreate = 'E';
		//printf("chCreate:%c\n", chCreate);
	}
	printf("chCreate:%c\n", chCreate);
	return 0;
}