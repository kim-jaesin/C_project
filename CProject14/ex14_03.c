#include<stdio.h>
#include<stdlib.h>

int main()
{
	int* ip = 0;// int* ip = NULL;
	int i, sum = 0;
	ip = (int*)malloc(5*sizeof(int));
	if (ip == 0)
	{
		printf("메모리가 부족합니다.");
		return 1;//1=비정상적으로 종료했다. 0은 정상적으로 종료했다.
	}
	printf("다섯 명의 나이를 입력하세요:");
	for (i = 0; i < 5; i++)
	{
		//scanf_s("%d", &ip[i]); 배열로 나타낸것
		//sum += ip[i];
		scanf_s("%d", ip+i);
		sum += *(ip + i);//포인터로 나타낸것
	}
	printf("다섯명의 평균나이:%.1lf", sum/5.0 );
	free(ip);

	return 0;
}