#include<stdio.h>
#include<stdlib.h>
int main()
{
	int* arScore;
	int i, stNum;
	int sum = 0;

	printf("�л����� �Է��ϼ���:");//5��
	scanf_s("%d", &stNum);
	//�����Ҵ�
	arScore = (int*)malloc(stNum * sizeof(int));
	if (arScore == NULL)
	{
		printf("�޸𸮰� �����մϴ�.\n");
		exit(1);//���� ���� 
	}
	for (i = 0; i < stNum; i++)
	{
		printf("%d�� �л��� ������ �Է��ϼ���:", i + 1);
		scanf_s("%d", &arScore[i]);
	}
	for (i = 0; i < stNum; i++)
	{
		sum += arScore[i];
	}
	printf("\n������ %d �̰� ����� %d�� �Դϴ�.\n", sum, sum / stNum);

	return 0;
}