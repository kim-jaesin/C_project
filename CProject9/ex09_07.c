#include<stdio.h>
void ShowArayElem(int*, int);
int main()
{
	int arr1[3] = { 1,2,3 };
	int arr2[5] = { 4,5,6,7,8 };
	ShowArayElem(arr1, sizeof(arr1) / sizeof(int));//sizeof(arr1) / sizeof(int)=�迭�� ũ��
	/*
    void�� ���α׷� ������ ���� �ƴ϶� ���� ��ȯ�� ���ϴ�
    �Ŵϱ� �ű⼭ printf�� ���� void�� �����ϱ� �ٽ� main���� ���ư���
    main�� return�� ���ö����� ���α׷��� �����Ѵ�.
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
