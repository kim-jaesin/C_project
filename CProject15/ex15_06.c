#include<stdio.h>
struct vision
{
	double left;
	double right;
};
struct vision exchange(struct vision);
int main()
{
	/*int ary1[5] = {10,20,30,40,50};
	int ary2[5];

	ary2 = ary1; 에러 이유: 주소값(상수)=주소값(상수),10=20(x)   
	구조체 변수는 대입연산으로 모든 멤버들을 복사 할 수 있다*/
	struct vision robot;
	printf("로보트의 시력을 입력하세요(좌,우):");
	scanf_s("%lf %lf", &robot.left, &robot.right);
	//멤버 참조 연산자는 주소 연산자보다 우선순위가 높다.
	robot = exchange(robot);
	printf("바뀐 로보트의 시력(좌,우):%.1lf,%.1lf\n", robot.left, robot.right);

	return 0;
}

struct vision exchange(struct vision robot)
{
	double temp;
	temp = robot.left;
	robot.left = robot.right;
	robot.right = temp;
	return robot;
}
