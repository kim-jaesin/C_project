#include<stdio.h>

int main()
{
	int ary[] = { 3,5,7,8,10,12,15,15,6,5,13,15,16,17,13,
				 12,7,19,4,7,16,20,19 };//23 92
	int i;
	int size;
	int n;
	int count = 0;
	printf("ã�⸦ ���ϴ� ���ڸ� �Է��ϼ���(1~20) :");
	scanf_s("%d", &n);
	size = sizeof(ary) / sizeof(ary[0]);
	for (i=0;i< size; i++)
	{
		if (ary[i] == n)// (i==0)�̶�� ������ �ε��� �ȿ� �ִ¼��ڿ� ���ϴ°�
		{
			count++;
		}
	}
	printf("����%d�� �迭�� %d�� �ֽ��ϴ�\n.", n, count);

	return 0;
}