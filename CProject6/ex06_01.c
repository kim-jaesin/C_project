#include<stdio.h>
int sum(int a, int b);
int main()
{
int a = 10, b = 20;
int res;
res = sum(a, b);
printf("���:%d\n", res);
return 0;
}

int sum(int a,int b)//�Լ��� ������ ���α׷��̴�.  *()����=�Ű�����:�ܺηκ��� ���� �޴� ����*
{
	int res;
	res = a + b;
	printf("���:%d\n", res);
	return res;//*�Լ��� ���ᰡ �Ǹ� �޸𸮿��� ��������.*

}





//�Լ�(���) :ȣ���ؾ� �۵��Ѵ�.
//int main()//�ü���� ȣ��,int�� �����ִ°��� Ÿ�� ������ 0.0���� ������ ����� ���� 
//{
	//int a = 10, b = 20;
	//int res;
	//res=sum(a, b);//sum�Լ� ȣ�� sum���� ���ٰ� ���ƿͼ� �ؿ��� ����
	//printf("���:%d\n", res);
	//return 0;//�Լ��� ȣ���� ������ 0�̶� ���� �����ش�.-main(),�Լ� (��)�̶�� �浵 �ִ�.
//}