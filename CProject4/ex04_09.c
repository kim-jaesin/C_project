#include<stdio.h>

int main()
{
	int nlnput = 0;

	scanf_s("%d", &nlnput);

	if (nlnput >= 10)
	{
		puts("10�̻�");//printf("10�̻�\n") puts�� ����
		//puts("dangling:���չ���");
	}
	else
		puts("10�̸�");
	
	


	return 0;
}
//puts�� else�̶� ���� ��ħ �Ȱ�ĥ���� {}�� ��� 
//if�� �߰�ȣ�� ������ puts("10�̻�");�� if�� �����϶� ���°� ����puts�� �߰�ȣ�� ���
// �׻� ����ȴ�.
//else������������ �������� �ڵ��̴�. 