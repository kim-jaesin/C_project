#include<stdio.h>
#include <stdlib.h>
int main()
{
	double* hight;
	double* low;

	hight = (double*)malloc(sizeof(double));
	low = (double*)malloc(sizeof(double));
	//동적할당 실패시 NULL을 반환한다.
	if (hight == 0 || low == 0) {
		printf("동적할당 메모리가 부족합니다.\n");
		return 0;// 프로그램 종료
	}
	printf("최고기온과 최저기온을 입력하세요\n");
	scanf_s("%lf %lf", hight, low);
	printf("일교차는 %.1lf입니다.\n", *hight- *low);

	free(hight);
	free(low);
	return 0;
}
/*
동정할당이란 내가만든 프로그램이 메모리에 실행될때 그 값만큼 메모리에 만든다.
*/