#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20] = "apple";
	char str2[20] = "banana";
	char temp[20];
	strcpy_s(temp,10,str1);
	strcpy_s(str1, 10, str2);
	strcpy_s(str2, 10, temp);
	printf("%s\n",str1);
	printf("%s\n",str2);
	return 0;
}