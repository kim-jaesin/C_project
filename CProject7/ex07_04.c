#include<stdio.h>

int main()
{
	double nums[5] = { 1.0,2.0 };
	int nums2[] = { 1,3,7,15,31,100,89,90 }; //����� ���ÿ� �ʱ�ȭ �Ҷ��� �迭 ���� ����� �ȴ�.
	int i;
	for (i = 0; i < 5; i++)
	{
		printf(" % lf", nums[i]);
	}
	printf("\n");
	for (i = 0; i <sizeof(nums2)/ sizeof(nums2[0]); i++)//i < 8�̰� ����� ������ sizeof:ũ�⸦�����ִ� ������
	{
		printf(" %d ", nums2[i]);//
	}

	return 0;
}
//sizeof(nums2)=32(byte)
//32(byte)/4(byte)=8   nums2[]�� �Լ� ���
//4(byte)=int=nums2[0]
//sizeof�� �迭�� ũ��� ��ȯ