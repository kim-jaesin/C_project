#include<stdio.h>
int main()
{
	int ary[6];
	printf("ary�� �ּ�:%p\n", ary);
	printf("ary�� �ּ�:%p\n",&ary);// �Ѵ� ���� &�� �ּҿ�����

	printf("ary�� �ּ�:%p\n", ary+1);
	printf("ary�� �ּ�:%p\n", ary + 2);
	printf("ary�� �ּ�:%p\n", ary + 3);
	printf("ary�� �ּ�:%p\n", ary + 4);
	printf("ary�� �ּ�:%p\n", ary + 5);

	printf("ary�� �ּ�:%p\n", &ary + 1); //ary+5 �� ����.  &ary+1=ary��ü ũ����+1
	return 0;
}
/*



*/