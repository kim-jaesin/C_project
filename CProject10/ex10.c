//char novel[800] = {0};��ü �ٰŸ��� ������ �迭 char str_in[80];�Է� ���ڿ��� ������ �迭
//���ڿ��� �Է��Ͽ� ���̶�� �ܾ �������� ���߰� �ϱ�
#include<stdio.h>
#include<string.h>
int main()
{
	char novel[800] = { 0 };
	char str_in[80];
	while (1)
	{
		printf("�ٰŸ��� �Է��Ͻÿ�:");
		gets_s(str_in, 80);
		if (strcmp(str_in, "��") == 0)
			break;
		strcat_s(novel, sizeof(novel), str_in);
		strcat_s(novel, sizeof(novel), " ");
		printf("������� �ٰŸ���:");
		puts(novel);
		printf("\n");
	}
	
	return 0;
}