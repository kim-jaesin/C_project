#include<stdio.h>
int main()
{
	char word[80]; 
	int i; 
	int count=0;
	printf("�ܾ �Է��ϼ���:");
	scanf_s("%s", word,20);//"apple\0"=>\0elppa
	for (i = 0; word[i]!='\0'; i++)
	{ 
		count = i;
	}
	for (i = 0; count/2; i++)//count-1-i 
	{
		word[i] = word[0];
		word[0]= word[4];
		word[4]=word[i];
	} 
	printf("�ܾ ��������:");
	for (i = 0; word[i]; i++)
	{ 
		printf("%s", word[i],20);
	
		return 0;
	}