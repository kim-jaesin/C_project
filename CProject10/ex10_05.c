#include<stdio.h>

int main()
{
	char str1[] = "My String";
	char* str2 = "Your string";
	printf("%s\n%s\n", str1, str2);
	printf("%p\n", str2);
	str2 = "Our String";
	printf("%s\n%s\n", str1, str2);
	printf("%p\n", str2);
	//Our=>Xur 
	str1[0] = 'X';
	//str2[0]= 'X';
	printf("%s\n%s\n", str1, str2);
	return 0;
}
