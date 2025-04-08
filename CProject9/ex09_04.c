#include<stdio.h>

int main()
{
	int arr1[3] = { 1,2,3 };
	double arr2[3] = { 1.1,2.2,3.3 };
	printf("%d    %.1lf\n",*arr1,*arr2 );//1,1.1
	//arr1=101, arr2=120.5 둘다 첫번째 값
	*arr1 = *arr1+100;//*arr+=100;
	//*arr2 = *arr2 + 119.4;
	*arr2 += 120.5;
	printf("%d    %.1lf\n", arr1[0], arr2[0]);
	return 0;
}