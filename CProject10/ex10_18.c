#include<stdio.h>
int main()
{
	char str[80];
	char ch;
	int i=0;
	printf("���ڿ��� �Է��ϼ���(����� ����):");
	while (1)
	{
		ch = getchar();//���� �ϳ� �Է�
		if (ch == '\n')//�������� üũ
			break;
		str[i] =  ch;//�Էµ� ���ڸ� �����Ѵ�.
		i++;
	}
	str[i] = '\0';
	printf("�Էµ� ���ڿ��� %s\n", str);
	return 0;
}