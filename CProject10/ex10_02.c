#include<stdio.h>

int main()
{
	//문자열은 메모리에 배열형태로 저장된다.
	// 문자열은 컴파일 되면 첫 번째 문자를 가리키는포인터로 변환된다.
	printf("주소값을 출력:%p\n", "dream");//주소값
	printf("첫번째 문자를 출력:%c\n", *"dream");//d
	printf("두번째 문자를 출력:%c\n", "dream"[2]);//e 배열 표기
	printf("세번째 문자를 출력:%c\n", *("dream"+2));//e 시작 주소로 부터 2칸 떨어진 곳
	return 0;
}