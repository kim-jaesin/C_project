#include<stdio.h>

int main()
{
	char str[80] = "dream";//문자열의 끝에는 null이 들어감
	int count = 0;
	int i = 0; // index
	while (str[i]!='\0')
	{
		count++;
		i++;
	}
	printf("배열에 저장된 문자열의 길이:%d\n", count+1);


	return 0;
}
/*
null이라는 문자가 나오기 전까지 반복을 해서 기본 문자 값을 가져가야 하기 때문에 null이 아니다 라고 식을 써야함
str[0] < '\0'이식은 char에서 null을 아스키코드 값 0이라고 인식하고 d는 100이기에 초반부터 거짓임으로 마지막
count+1때문에 1이 나옴 

count가 올라갔으니 i가 올라가 다음을 비교해야 하기에 i++도 넣어야함
*/