#include<stdio.h>

int main()
{
	//ascii code : 0~127,128~255
	char ch1 = 'A', ch2 = 65;
	int ch3 = 'Z', ch4 = 90;

	printf("%c%d\n", ch1, ch1);//A65
	printf("%c    %d\n", ch2, ch2);//A   65
	printf("%c%d\n", ch3, ch3); //Z90
	printf("%c    %d\n", ch4, ch4); //z   90

	return 0;
}