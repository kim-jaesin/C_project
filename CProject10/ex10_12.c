#include<stdio.h>
#include<string.h>
//���ڿ��� ���ϴ� �Լ�(strcmp)��Ʈ�� �����
int main()
{
	char str1[20] = "banana";
	char str2[20] = "apple";
	char temp[20];
	int res;
	res = strcmp(str1, str2);//Pear>pear ���� �����Ҷ� ��ҹ��ڸ� ������.=>P(80)p(112)
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
strcmp�� ���ڿ� ��ü�� �ƽ�Ű �ڵ尪�� �ƴ϶� �񱳸� �ϴµ� �ƽ�Ű�ڵ尪�� �ٸ� ���ڰ� ������ �ٷ� �񱳸� �� �װ��� �˷��ش�. 
ex abcd�� abbd�� �ϸ� c��b�� �� �ƽ�Ű�ڵ尪�� 1���̴� ��� 1
*/