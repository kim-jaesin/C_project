#include<stdio.h>
int main()
{
	/*
	char ptr_ary[5];
	ptr_ary[0] = 'A';
	printf("%c", ptr_ary[0]);
	*/
	//double num;
	//double* ptr_ary = &num;
	char* ptr_ary[5];//������ �迭
	ptr_ary[0] = "tiger";
	ptr_ary[1] = "lion";
	printf("%s\n", ptr_ary[0]);
	//printf("%s\n", ptr_ary);
	printf("%p\n", ptr_ary);//�迭�� �����ּ�
	printf("%p\n", ptr_ary[0]);// Ÿ�̰��� �ּ�
	return 0;
}
/*
char* ptr_ary = &num;
&=���� �ּҰ�
char*: ������ ������ ����Ű�� Ÿ��
char* ptr_ary[5];=������ �迭 ,ptr_ary[5]�̹迭�� ����Ű�� ���� Ÿ���� �����̴�.
������ ������ �� �ּҰ����� ���ڿ��� ����.-Ư¡ 
�迭 ��Ұ� �ּҷ� ������ �迭 =������ �迭
������=�ּ�
*/