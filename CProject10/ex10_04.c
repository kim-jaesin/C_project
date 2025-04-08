#include<stdio.h>

int main()
{
	char* fruit = "strawberry";
	int i=0;
	while (*fruit!='\0')
	{
		printf("%s\n", fruit);
		fruit = fruit + 1;
	}
	return 0;
}