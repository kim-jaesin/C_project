#include<stdio.h>
#include<stdlib.h>
void selectionSort(int* arr, int n)
{
	int i, j, min_idx, temp;
	for (i = 0;i<n-1;i++)
	{
		min_idx = i;
		for(j=i+1;j<n;j++)
		{
			if (arr[min_idx] > arr[j])
			{//인덱스만 바꿈 
				min_idx = j;//가장 낮은 숫자가 들어감 
			}
		}
		temp = arr[i];
		arr[i] = arr[min_idx];
		arr[min_idx] = temp;
	}
}
int main()
{
	int n, i;
	int* arr;
	printf("배열의 크기를 입력하세요:");
	scanf_s("%d", &n);// 동적할당
	arr=(int)malloc(n * sizeof(int));//입력값을 이용하여 동적할당을 한다. 
	if (arr == NULL)
	{
		printf("메모리 할당 실패");
		return 1;
	}
	printf("%d개의 정수를 입력 하세요:\n",n);
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	selectionSort(arr, n);
	printf("정렬된 배열:");
	for (i = 0; i < n; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
	free(arr);
	return 0;
}
