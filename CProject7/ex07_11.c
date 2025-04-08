#include<stdio.h>

int main()
{
	char word[80];
	int i;
	int count=0;

	printf("단어를 입력하세요:");
	scanf_s("%s", word,20);//"apple\0"=>\0elppa

	for (i = 0; word[i] != '\0'; i++);
	count = i;
	printf("단어를 뒤집으면:");
	for (i = count-1; i >=0; i--)//count-1-i
	{
		printf("%c",word[i]);
	}
	return 0;
}