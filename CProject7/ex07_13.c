#include<stdio.h>

int main()
{
	char szData[] = "Test String";
	int arr[5] = { 1,2 };
	int len;
	int i;
	
	puts(szData);
	printf("%s\n", szData);
	puts(szData);

	printf("%c %c\n", szData[0], szData[11]);//0��°�� 11��° ���� ��� 0=T 11=\n
	len = sizeof(arr) / sizeof(int); //
	//�迭�� ��� ������ ����ϴ� �ڵ� 
	

	//len�� �̿��� �迭�� arr���� ���
	for (i = 0; i < len; i++)
	{
		printf("%d", arr[i]);
		printf("\n");
	}
	//1,2,0,0,0 ������ ���� arr �� intŸ���̶� 4����Ʈ*5=20 �װ� /int=4����Ʈ 20/4=5�̴� 5���� ���� ���;� �ϴµ� �ʱ�ȭ�� ��Ұ� 
	// 1�� 2�ۿ� ������ ������000�� ���´�.
	return 0;
}