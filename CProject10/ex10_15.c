#include<stdio.h>
#include<string.h>
int main()
{
	char novel[800] = {0};//��ü �ٰŸ��� ������ �迭
	char str_in[80];//�Է� ���ڿ��� ������ �迭
	
	while (1)
	{
		printf("���ڿ��� �Է��ϼ���:");
		gets_s(str_in, 80);
		if (strcmp(str_in , "��") == 0)//�Էµ� �����Ͱ��� ���ΰ�?
			break;
		strcat_s(novel, sizeof(novel), str_in);
		strcat_s(novel, sizeof(novel), " ");
		printf("������� �ٰŸ�:");
		puts(novel);
		puts("\n");
	}
	return 0;
}
/*
���ڿ� ���� ���
1�迭
2������ ����
while(~�ϴµ��� ���ѷ��� if������ ��)
for(������ ������ �� ����)
do while(�������� �� �� )

	char ch = "a";
	printf("%c\n", ch);
	char* p = "a";
	printf("%c,%p", *p, p);
	printf("%c",ch);
	printf("%d\n",1==1 );
	printf("%d\n", 'a' == 'a');
	printf("%d\n", 'b' == 98);
	printf("%d\n", 1 == "1");
	printf("%d\n", "1" == "1");
	printf("%d\n", "1" == "2");
	printf("%d\n", "a" == "a");
	printf("%d\n", "ad" == "a");
	printf("%d\n", "��" == "��");

	return 0;
	strcmp: ���ڿ��� ���ϴ� �Լ�
}
*/