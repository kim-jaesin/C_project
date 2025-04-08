#include<stdio.h>

int main()
{
	int nums[5];
	int max;
	int i;
	printf("다섯 개의 숫자를 입력하세요:");
	for (i = 0; i < 5; i++)
	{
		scanf_s("%d", &nums[i]);//scanf_s를1번만 쓰고 5개의 숫자를 저장할 수 있는건 int num[5];때문이다.
	}
	printf("입력된 값은:");
	for (i = 0; i < 5; i++)
	{
		printf("%d", nums[i]);//따로주는 이유는 데이터를 주는 방식이 달라진다.
	}
	max = nums[0];//첫 번째 값을 최대값으로 초기화
	for (i = 0; i < 5; i++)
	{
		if (nums[i] > max)
		{
			max = nums[i];
		}
	}
	//max를 초기화 시키고 nums에 있는 i값을 for문으로 0부터4까지 1개씩 올려 if문으로 입력값과 비교후 거짓이 될때 까지 실행한 다음 그 값을 
	//max에 저장시킨다.i의 값0=i의 입력값1이다.
	//ex) i입력값을 1,2,3,4,5로 했을때 max=0으로 초기화 i는 입력값1,2,3,4,5와 비교후 거짖 예)nums[i](1) > max(0)=참=max(1) nums1올려서 다시
	//nums[i](4) > max(3)=참=max(3)  nums[i](5) > max(4)=참=max(4)  nums[i](5까지 입력) > max(5)=거짓=max(5) 마지막 출력 5

	//i의 입력값(1,2,3,4,5)와 그냥 값(0,1,2,3,4)이랑 헷갈리면 안된다.
	printf("가장 큰 값은:%d입니다.\n", max);



	return 0;
}