#include<stdio.h>
int main()
{
	int arr[5]; //01234 imdex
	int sum = 0;
	int i;
	//printf("arr[0]=%d", arr[0]);
	arr[0] = 10, arr[1] = 20, arr[2] = 30, arr[3] = 40, arr[4] = 50;
	//배열의 위치 정보를 명시하는 인데스 값은 1이 아닌 0에서 부터 시작한다.
	printf("arr[0]=%d\n", arr[0]); //10
	printf("arr[1]=%d\n", arr[1]);
	printf("arr[2]=%d\n", arr[2]);
	printf("arr[3]=%d\n", arr[3]);
	printf("arr[4]=%d\n", arr[4]);
	for(i=0;i<5;i++)//i제어변수
		printf("arr[%d]=%d\n",i, arr[i]);//i index변수

	return 0;
}
//배열:배열 선언,순서,연속,동일 타입