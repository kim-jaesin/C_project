#include<stdio.h>
void str_prn(char**, int);
int main()
{
	char* ptr_ary[] = { "eagle","tiger","lion","squirrel" };//������ �迭
	
	/*char ptr_ary[] = "monky";//���� �迭�� ����
	char ptr_ary2[3] = { 'a','b','c' };
	char ptr_ary3[] = {'a','b','c','\0'};
	printf("%s\n", ptr_ary);//monky
	printf("%c\n", *(ptr_ary+2));//�ε��� 2��° n���
	printf("%s\n", ptr_ary2);
	printf("%s\n", ptr_ary3);
	printf("%s\n", ptr_ary2[0]);
	*/
	int count;
	count = sizeof(ptr_ary) / sizeof(ptr_ary[0]);
	str_prn(ptr_ary, count);//�Լ� ȣ��



	return 0;
}

void str_prn(char**spp, int count)
{
	for (int i = 0; i<count; i++)
	{
		printf("%s\n", spp[i]);
		printf("%s\n", *(spp+i));
	}
}

/*
ptr_ary2 �迭�� ���ڿ��� ���� ��Ÿ���� �� ����('\0')�� ���� ������ ������ ���� ���´�.
�迭�� ��Ұ� �ּҷ� ������ �迭 =������ �迭
*/