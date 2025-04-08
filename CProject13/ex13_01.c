#include<stdio.h>
int main()
{
	char* ap = "success";
	char* bp = "failure";
	char* tp;
	tp = ap;
	ap = bp;
	bp = tp;
	printf("ap->%s,bp->%s\n", ap, bp);
	return 0;
}