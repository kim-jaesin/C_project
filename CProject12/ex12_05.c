#include<stdio.h>
int main()
{
	char animal[5][20];/*char���� ���� �ִ� ���� ���� ���Ѵ�.  animal[i][20]���� 20���� ������
	                                                           Ư�� ��ġ���� ��Ÿ�� ������ ����*/
	int i;
	for (i=0;i<5;i++)
	{
		scanf_s("%s\n", animal[i],20);
		//scanf_s("%s\n", animal[i][20],20);
	}
	for (i = 0; i < 5; i++)
	{
		printf("%s\m", animal[i]);
		//printf("%s\m", animal[i][20]);
	}
	return 0;
}