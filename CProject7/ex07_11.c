#include<stdio.h>

int main()
{
	char word[80];
	int i;
	int count=0;

	printf("�ܾ �Է��ϼ���:");
	scanf_s("%s", word,20);//"apple\0"=>\0elppa

	for (i = 0; word[i] != '\0'; i++);
	count = i;
	printf("�ܾ ��������:");
	for (i = count-1; i >=0; i--)//count-1-i
	{
		printf("%c",word[i]);
	}
	return 0;
}