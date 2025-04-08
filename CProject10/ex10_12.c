#include<stdio.h>
#include<string.h>
//문자열을 비교하는 함수(strcmp)스트링 컴페어
int main()
{
	char str1[20] = "banana";
	char str2[20] = "apple";
	char temp[20];
	int res;
	res = strcmp(str1, str2);//Pear>pear 문자 구분할때 대소문자를 따진다.=>P(80)p(112)
	printf("%d", res);
	if (res > 0)
	{
		strcpy_s(temp, 10, str1);
		strcpy_s(str1, 10, str2);
		strcpy_s(str2, 10, temp);
	}
	printf("str1:%d", res);
	printf("str2:%d", res);
	return 0;
	//str1>str2=>1
	//str1<str2=>-1
	//str1==str2=>0

}
/*
strcmp는 문자열 자체를 아스키 코드값이 아니라 비교를 하는데 아스키코드값이 다른 문자가 나오면 바로 비교를 해 그값을 알려준다. 
ex abcd와 abbd를 하면 c와b를 비교 아스키코드값이 1차이니 출력 1
*/