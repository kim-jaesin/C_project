#include<stdio.h>
int main()
{
	int score[3][4];//3명의4과목 점수를 저장할 2차원 배열 많이 씀
	int i, j;//이중 for문을 위한 반복 제어 변수
	int tot; //총점을 저장할 변수 
	double avg;//평균을 저장할 변수
	for (i=0;i<3;i++)
	{
		printf("네 과목의 점수를 입력하세요:\n");
		for (j=0;j<4;j++)
		{
			scanf_s("%d", &score[i][j]);//배열에 특정 위치를 나타낼려면 &쓴다.
		}
	}
	for (i = 0; i < 3; i++)
	{
		tot = 0;//계속 tot를 초기화 해서 다음 평균을 구할때 오류가 없게 한다. 
		for (j = 0; j < 4; j++)
		{
			tot = tot + score[i][j]; //한 학생의 점수를 총점에 누적한다.
			// score[i]번째에 [j]점수를 4번 넣는다.
		}
		avg = tot / 4.0;//한명의 총점을 모두 누적한 후 평균 계산
		printf("총점%d, 평균%.1lf\n",tot, avg);
	}
	return 0;
}