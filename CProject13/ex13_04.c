#include<stdio.h>

//배열 포인터:배열을 가리키는 포인터 변수
//포인터 배열:배열의 요소가 주소인 배열
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