#include<stdio.h>
#include<stdlib.h>

int main()
{
	int* ip = 0;// int* ip = NULL;
	int i, sum = 0;
	ip = (int*)malloc(5*sizeof(int));
	if (ip == 0)
	{
		printf("�޸𸮰� �����մϴ�.");
		return 1;//1=������������ �����ߴ�. 0�� ���������� �����ߴ�.
	}
	printf("�ټ� ���� ���̸� �Է��ϼ���:");
	for (i = 0; i < 5; i++)
	{
		//scanf_s("%d", &ip[i]); �迭�� ��Ÿ����
		//sum += ip[i];
		scanf_s("%d", ip+i);
		sum += *(ip + i);//�����ͷ� ��Ÿ����
	}
	printf("�ټ����� ��ճ���:%.1lf", sum/5.0 );
	free(ip);

	return 0;
}