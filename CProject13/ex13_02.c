#include<stdio.h>
void exchage_ptr(char**, char**);//**은 2중 포인터 2중포인터 변수는 포인터 변수를 가르킨다.
int main()
{
	char* ap = "success";
	char* bp = "failure";

	printf("ap->%s,bp->%s\n", ap, bp);

	exchage_ptr(&ap, &bp);//함수 호출

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
