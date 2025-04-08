#include<stdio.h>
#include<stdlib.h>
int main()
{
	int* arScore;
	int i, stNum;
	int sum = 0;

	printf("학생수를 입력하세요:");//5명
	scanf_s("%d", &stNum);
	//동적할당
	arScore = (int*)malloc(stNum * sizeof(int));
	if (arScore == NULL)
	{
		printf("메모리가 부족합니다.\n");
		exit(1);//강제 종료 
	}
	for (i = 0; i < stNum; i++)
	{
		printf("%d번 학생의 성적을 입력하세요:", i + 1);
		scanf_s("%d", &arScore[i]);
	}
	for (i = 0; i < stNum; i++)
	{
		sum += arScore[i];
	}
	printf("\n총점은 %d 이고 평균은 %d점 입니다.\n", sum, sum / stNum);

	return 0;
}