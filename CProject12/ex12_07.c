#include<stdio.h>
int main()
{
	/*
	char ptr_ary[5];
	ptr_ary[0] = 'A';
	printf("%c", ptr_ary[0]);
	*/
	//double num;
	//double* ptr_ary = &num;
	char* ptr_ary[5];//포인터 배열
	ptr_ary[0] = "tiger";
	ptr_ary[1] = "lion";
	printf("%s\n", ptr_ary[0]);
	//printf("%s\n", ptr_ary);
	printf("%p\n", ptr_ary);//배열의 시작주소
	printf("%p\n", ptr_ary[0]);// 타이거의 주소
	return 0;
}
/*
char* ptr_ary = &num;
&=시작 주소값
char*: 포인터 변수가 가르키는 타입
char* ptr_ary[5];=포인터 배열 ,ptr_ary[5]이배열이 가르키는 곳의 타입이 문자이다.
포이터 변수는 각 주소값마다 문자열이 들어간다.-특징 
배열 요소가 주소로 구성된 배열 =포인터 배열
포인터=주소
*/