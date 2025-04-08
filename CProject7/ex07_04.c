#include<stdio.h>

int main()
{
	double nums[5] = { 1.0,2.0 };
	int nums2[] = { 1,3,7,15,31,100,89,90 }; //선언과 동시에 초기화 할때는 배열 수를 안적어도 된다.
	int i;
	for (i = 0; i < 5; i++)
	{
		printf(" % lf", nums[i]);
	}
	printf("\n");
	for (i = 0; i <sizeof(nums2)/ sizeof(nums2[0]); i++)//i < 8이건 사람이 했을때 sizeof:크기를구해주는 연산자
	{
		printf(" %d ", nums2[i]);//
	}

	return 0;
}
//sizeof(nums2)=32(byte)
//32(byte)/4(byte)=8   nums2[]의 함수 계수
//4(byte)=int=nums2[0]
//sizeof로 배열을 크기로 변환