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

	ary2 = ary1; ���� ����: �ּҰ�(���)=�ּҰ�(���),10=20(x)   
	����ü ������ ���Կ������� ��� ������� ���� �� �� �ִ�*/
	struct vision robot;
	printf("�κ�Ʈ�� �÷��� �Է��ϼ���(��,��):");
	scanf_s("%lf %lf", &robot.left, &robot.right);
	//��� ���� �����ڴ� �ּ� �����ں��� �켱������ ����.
	robot = exchange(robot);
	printf("�ٲ� �κ�Ʈ�� �÷�(��,��):%.1lf,%.1lf\n", robot.left, robot.right);

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
