#include<stdio.h>
int main()
{
	int ary[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
	int(* ap)[4];//�迭 ������ ���� ����
	int i, j;
	//�迭���� �迭 ������ ������ ����
	ap = ary;
	printf("ary=%p\n", ary);
	printf("(*ap)=%p\n", ap);
	for (i=0;i<3;i++)
	{
		for (j=0;j<4;j++)
		{
			printf("%5d", ap[i][j]);
		}
		printf("\n");
	}
	return 0;
}
/*
2���� �迭
���� 1���� ���� �ʿ��� ��ŭ �߶� �ؿ� ���̸� 2������ �ȴ�. 
��[]=��,��[]=��
*/