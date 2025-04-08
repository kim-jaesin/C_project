#include<stdio.h>

int main()
{
	char blood_type;

	printf("혈액형을 입력하세요:");
	scanf_s("%c", &blood_type,1); //입력,ab형은 제외,'A'=65
	printf("당신의 혈액형은 %c형 입니다.\n",blood_type); //65
	printf("blood_type=%d", blood_type); //65
	return 0;
}