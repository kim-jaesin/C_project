#include<stdio.h>

int main()
{
	double a, b, res;
	char op;
	printf("����,�����ȣ,���ڸ� �Է��Ͻÿ�.\n");
	scanf_s(" %lf%c%lf", &a, &op, 1, &b);
	switch (op)
	{
	case '+':
		res = a + b;
		printf("����%.2lf�Դϴ�.", res);
		break;
	case '-':
		res = a - b;
		printf("����%.2lf�Դϴ�.", res);
		break;
	case'*':
		res = a * b;
		printf("����%.2lf�Դϴ�.", res);
		break;
	case'/':
		res = a / b;
		printf("����%.2lf�Դϴ�.", res);
		break;
	default:
		puts("�˼� ���� ���");
	}
	return 0; //10*20  
}
/*default�� �������� res=0�� �ؼ� �ʱ�ȭ��Ų�� printf("����%.2lf�Դϴ�.", res);
�� �ߺ��� �Ǵϱ� switch ������ }�ؿ� printf���ִ´�.*/

