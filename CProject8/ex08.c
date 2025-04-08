//포인터가 변수의 주소를 저장하고, 이를 통해 해당 변수의 값을 접근하는 코드
/*
#include<stdio.h>
int main()
{
	char c = 'A';//변수선언후 A라는 문자로 초기화
	char* p = &c;//포인터 변수 선언후 변수 주소값을 저장
	printf("%p\n", &c);//변수c의 주소값 출력
	printf("%c  %c\n", c, *&c);//변수c의 문자와 &c가 주소니까 그걸 역참조(*)해서 변수 c의 원래값을 얻는 표현  
	printf("%c\n", *p);//포인터 변수에 저장된 변수의 값
	return 0;
}*/
/*
#include<stdio.h>
int main()
{
	char q = 'F';
	char* qw = &q;
	printf("%c", *&q);
	return 0;
}*/
//포인터를 사용해 두 변수의 값을 서로 교환할 때 쓰는 코드
#include<stdio.h>
void exchange(int*, int*);//함수 선언 
int main()
{
	int cheoi = 10, metel = 20; 
	exchange(&cheoi, &metel);
	printf("cheoi=%d,metel=%d\n", cheoi, metel);
	return 0;
}
void exchange(int* cp, int* mp)
{
	int temp;
	temp = *cp;
	*cp = *mp;
	*mp = temp;
}