#include<stdio.h>

//�迭 ������:�迭�� ����Ű�� ������ ����
//������ �迭:�迭�� ��Ұ� �ּ��� �迭
int main()
{
	int nums[5] = { 10,20,30,40,50 };
	int* ip = nums;
	printf("%d\n", *nums);//10
	printf("%d\n", *(nums+4));//50
	printf("%d\n", *(ip + 0));//10
	printf("%d\n", *(ip + 0));//50
	return 0;
}