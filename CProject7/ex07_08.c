#include<stdio.h>

int main()
{
	char word[50];
	word[0] = 'L';
	word[1] = 'o';
	word[2] = 'v';
	word[3] = 'e';
	word[4] = '\0';//null   ����,���ڿ��� ���� �ǹ��Ѵ�.
	//'\0'�� ������ ��½� �����Ⱚ�� �ȳ��´�.

	printf("%x\n", word);
	printf("%c\n", word[3]);
	printf("%c\n", word[4]);//ȭ�鿡 ������ ����
	printf("%s\n", word);
	
	return 0;
}
//16����=0~9abcdef
//0101/1101
//8421 8421
//5=5  13=d