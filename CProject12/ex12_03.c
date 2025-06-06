#include<stdio.h>
int main()
{
	//int nums[3][4] = { 1,2,3,4,5,6,7,8 };
	//int nums[3][4] = { {1,2,3,4},{5,6,7,8} };//안쪽 중괄호 하나가 행을 의미한다.
	int nums[3][4] = { {1},{2,3,4},{5,6,7,8} };// 
	for (int i = 0; i < 3; i++) //0~2까지 반복을 제어한다. 제어변수
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d ", nums[i][j]);//index(i가 제어와index둘다 쓰인다.)
		}
		printf("\n");
	}
	return 0;
}
/*
 nums[j][i]가 오류인 경우
 대괄호 앞은 행 뒤는 열이다. (외운다.)
 nums[j][i] j가 4행이 되는데 우리는 변수 선언에서  nums[3][4]행을 3행이라고
 지정해 오류가 난다.

 int nums[3][4] = { {1},{2,3,4},{5,6,7,8} }
 를 출력하면 
 1 0 0 0
 2 3 4 0 
 5 6 7 8 이 나온다. {{},{},{}}이걸 잘 알아둬야 한다.
*/