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
			{//�ε����� �ٲ� 
				min_idx = j;//���� ���� ���ڰ� �� 
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
	printf("�迭�� ũ�⸦ �Է��ϼ���:");
	scanf_s("%d", &n);// �����Ҵ�
	arr=(int)malloc(n * sizeof(int));//�Է°��� �̿��Ͽ� �����Ҵ��� �Ѵ�. 
	if (arr == NULL)
	{
		printf("�޸� �Ҵ� ����");
		return 1;
	}
	printf("%d���� ������ �Է� �ϼ���:\n",n);
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	selectionSort(arr, n);
	printf("���ĵ� �迭:");
	for (i = 0; i < n; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
	free(arr);
	return 0;
}
