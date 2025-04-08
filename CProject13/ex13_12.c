#include<stdio.h>
#include<string.h>
//void*:가르키는 자료형에 대한 정보가 없으므로 사용할 때에는 형변환하여 사용한다.
void exchange(char*, void*, void*);
int main()
{
	int a = 10, b = 20;
	double da = 1.5, db = 2.5;

	exchange("int", &a, &b);
	printf("정수값 교환 후 : %d,%d\n", a, b);
	exchange("double", &da, &db);
	printf("실수값 교환후 :%.1lf,%.1lf", da, db);
	return 0;
}

void exchange(char*type, void* vp1, void* vp2)
{
	int itp;
	double dtp;
	if (strcmp(type, "int") == 0)//-1,1,0
	{
		itp = *(int*)vp1; //  그곳의 값*(포인터함수int*)
		*(int*)vp1 = *(int*)vp2;
		*(int*)vp2 = itp;
		return vp1, vp2;
	}

	if (strcmp(type, "double") == 0)//-1,1,0
	{
		dtp = *(double*)vp1;
		*(double*)vp1 = *(double*)vp2;
		*(double*)vp2 = dtp;
		return vp1, vp2;
	}
}
/*
포인터 형변환 후 역참조를 통해 메모리 값을 읽거나 수정할 때 사용.
else if 다음에는 else 가 와야하니 else 에 들어갈 식이 없어 if문만 2번 쓴다
*/