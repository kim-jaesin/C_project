#include<stdio.h>

int main()
{
	char szData[] = "Test String";
	int arr[5] = { 1,2 };
	int len;
	int i;
	
	puts(szData);
	printf("%s\n", szData);
	puts(szData);

	printf("%c %c\n", szData[0], szData[11]);//0번째와 11번째 값을 출력 0=T 11=\n
	len = sizeof(arr) / sizeof(int); //
	//배열의 요소 개수를 계산하는 코드 
	

	//len을 이용한 배열의 arr값을 출력
	for (i = 0; i < len; i++)
	{
		printf("%d", arr[i]);
		printf("\n");
	}
	//1,2,0,0,0 나오는 이유 arr 은 int타입이라 4바이트*5=20 그걸 /int=4바이트 20/4=5이니 5개의 값이 나와야 하는데 초기화된 요소가 
	// 1과 2밖에 없으니 나머지000이 나온다.
	return 0;
}