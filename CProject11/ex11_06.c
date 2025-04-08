#include<stdio.h>
double get_item(double*);
int main()
{
	double ary[] = { 0.1,0.3,0.5,0.7,0.9 };
	double res;
	res = get_item(ary);
	printf("첫번째 호출할 때:%.1lf\n", res);//0.1
	res = get_item(ary);
	printf("두번째 호출할 때:%.1lf\n", res);//0.3
	return 0;
}

double get_item(double*ap)
{
	static int i = 0;
	double temp;
	temp = *(ap + i);
	i++;
	return temp;
}
/*
배열은 함수에 전달될 때 포인터로 전달:ary가 배열첫번째 주소를 나타내는 포인터 역활을함
배열값에 접근하려면 배열 시작 주소를 받아야 하기 때문에 doble*ap로 작성
C 언어에서는 배열을 함수에 전달할 때 전체 배열을 복사하지 않고, 배열의 시작 주소(포인터)만 전달
따라서
포인터 ap가 배열의 시작 주소를 가리키고 있어서 특정요소를 가르킬려면 인덱스가 붙어야함
즉 ap==&ary[0]인것이다.

if를 쓰는 이유:
배열 ary의 크기는 5 배열 유효 인덱스는 0~4 반복하는 회수가 정해져 있어 if문을 사용함

강사님은 if문을 안쓴 이유:
static int i이기 때문에 숫자가 초기화 되지 않고 0~4를 반복하는게 아닌 인덱스 숫자 0과 1을 받는
코드여서 안서도 된다. get_item 함수가 호출되는 횟수가 배열의 크기를 초과하지 않을 것이라는 
설계상의 전제때문

return을 temp로 하는 이유:
temp는 ap[i]를 임시로 저장하는 변수 ap[i]는 배열i번째 요소를 가르킴 배열에서 해당 값을가져와 
temp에 저장후 반환 
*/