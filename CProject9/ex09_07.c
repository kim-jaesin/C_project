#include<stdio.h>
void ShowArayElem(int*, int);
int main()
{
	int arr1[3] = { 1,2,3 };
	int arr2[5] = { 4,5,6,7,8 };
	ShowArayElem(arr1, sizeof(arr1) / sizeof(int));//sizeof(arr1) / sizeof(int)=배열의 크기
	/*
    void가 프로그램 실행이 끝이 아니라 값을 반환을 안하는
    거니까 거기서 printf를 쓰고 void가 끝나니까 다시 main으로 돌아가서
    main의 return이 나올때까지 프로그램을 실행한다.
    */
	ShowArayElem(arr2, sizeof(arr2) / sizeof(int));

	return 0;
}

void ShowArayElem(int* param, int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		printf("%d ", *(param +i));
		printf("%d\n ", param[i]);
	}
	printf("\n");
}
