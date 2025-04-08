#include<stdio.h>
#include<stdlib.h>
int main()
{
	int* ip = NULL;
	double* dp= NULL;

	//void* malloc(unsigned int);//부호없는 정수를 받을수 있음
	ip=(int*)malloc(sizeof(int));
	//malloc(4): 메모리공간을 할당하고 void포인터를 반환
	//(int*):int형 을 활용하기 위한 형변환
	dp = (double*)malloc(sizeof(double));
	*ip = 10;
	*dp = 3.4;
	printf("정수형으로 사용:%d\n", *ip);
	printf("실수형으로 사용:%.1lf\n", *dp);
	//힙영역은 프로그램이 종료될 때까지 메모리공간에 유지된다.
	//따라서 끝난 동적할당 메모리는 명시적으로 반환한다.
	free(ip);
	free(dp);

	return 0;
}
/*
동적(Dynamic or Run_time)이라는 말은 빌드(컴파일+링크)된 바이너리 프로그램이 생행되고 있는 동중을 말하는 것이다. 
변수로 선언된 메모리는 컴파일 타임에 그에 대한 메모리관리가 자동으로 이루어 진다.
(int a :4byte,memory:stack)
동적으로 할당하는 메모리는 heap(힙)이라는 메모리 영역에 할당된다.
메모리의 동적 할당은 전용함수를 이용하는 것이며,존재하지않는 메모리가 생기는 것이 아니라 운영체제로부터 사용을 허가받는 것이다. 
동적할당한 메모리는 반드시 운영체제에 반환해야 한다.
*/