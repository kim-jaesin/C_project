#include<stdio.h>
//�迭�� ����Ͽ� ��� ���̸� ����ϴ� ���α׷�
int main()
{
	int ages[5];
	int tot = 0;
	double avg;
	int i;
	printf("�ټ����� ���̸� �Է��ϼ���:");// i < 5�� �ݺ� ȸ�� 
	for (i = 0; i < 5; i++)
	{
		scanf_s("%d", &ages[i]);
	}
	printf("�Էµ� ���̴� :");
	for (i = 0; i < 5; i++)
	{
		tot = tot + ages[i];
	}
	printf("������ ����%d", tot);
	avg = tot / 5.0;
	printf("�Էµ� �ټ����� ���� ���:");
	for (i = 0; i < 5; i++)
	{
		printf("%d", ages[i]);
	}
	printf("\n�ټ����� ��� ���̴�%.1lf", avg);
	
	return 0;
}
//�ټ����� ���̸� ������ �迭
//�� ��������
//��� ���̸� ����
//�ݺ� ���� ����

//����� ���Ҷ� avg = tot / 5.0; �ʱ�ȭ�� �ϰ� printf("������ �����%lf", avg);�̰� �ٷ� �ص� �ȴ�. 
//for���� �� ������ ����.