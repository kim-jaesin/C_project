#include<stdio.h>
void exchage_ptr(char**, char**);//**�� 2�� ������ 2�������� ������ ������ ������ ����Ų��.
int main()
{
	char* ap = "success";
	char* bp = "failure";

	printf("ap->%s,bp->%s\n", ap, bp);

	exchage_ptr(&ap, &bp);//�Լ� ȣ��

	printf("ap->%s,bp->%s\n", ap, bp);
	return 0;
}

void exchage_ptr(char** app, char** bpp)
{
	char* temp = 0;
	temp = *app;
	*app = *bpp;
	*bpp = temp;
}
