#include<stdio.h>

int main()
{
	char word[50];
	word[0] = 'L';
	word[1] = 'o';
	word[2] = 'v';
	word[3] = 'e';
	word[4] = '\0';//null   문자,문자열의 끝을 의미한다.
	//'\0'가 있으면 출력시 쓰레기값이 안나온다.

	printf("%x\n", word);
	printf("%c\n", word[3]);
	printf("%c\n", word[4]);//화면에 보이지 않음
	printf("%s\n", word);
	
	return 0;
}
//16진수=0~9abcdef
//0101/1101
//8421 8421
//5=5  13=d