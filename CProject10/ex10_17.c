#include<stdio.h>

int main()
{
	//�ϳ��� ���ڸ��� �������� ������ϴ� �Լ�
	//���ڵ��� �������� ������ϸ� ���ڿ��� ������� �ȴ�.
	//getchar        putchar
	char str[80];//���ڿ��� ������ �迭
	char ch;//getchar�Լ��� ���ϰ��� ������ �迭
	int i;
	printf("���ڿ��� �Է��ϼ���:");//Love
	for (i = 0; i < 4; i++)
	{
		ch = getchar();//Ű����κ��� ���ڸ� �Է¹޾� �����Ѵ�.
		str[i] = ch;//���ϵ� ���ڸ� �迭�� ���ʷ� ����
	}
	str[i] = '\0';//�������� �ι��ڸ� �����Ͽ����ڿ��� �ϼ�
	printf("�Էµ� ���ڿ�:%s\n", str);
	i = 0;
	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	str[i] = '\0';
	printf("�Էµ� ���ڿ�:%s\n", str);
	/*char ary[10] = {'L','o','v','e'};
	puts(ary);*/
	return 0;
}