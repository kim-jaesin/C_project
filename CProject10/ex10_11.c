#include<stdio.h>

int main()
{
	char str1[80] = "Long time no see";
	char str2[80] = "What's up?";
	int len;
	len = strlen(str1);
	len = strlen(str2);
	if (strlen(str1) > strlen(str2))
	{
		len = strlen(str1);
		printf("문자열의 길이:%d\n", len);
	}
	else
	{
		len = strlen(str2);
		printf("문자열의 길이:%d\n", len);
	}
	return 0;
}