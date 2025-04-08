#include<stdio.h>

int main()
{
	printf("1234578901234567890\n");
	printf("%10c%c\n",'A','B'); //10칸 뒤에 A바로뒤에 B가 붙음
	printf("%-10c%c\n", 'A', 'B');//A만 맨앞 B는 그대로
	//printf("%10d\n",2024);
	printf("%010d\n",2024); //2024앞에 0으로 채워짐 
	printf("%+d\n", 128);
	printf("%xd\n", 2024);//%#x일때 2024를 0x7e8d로 나타냄 (0x=16진수 표기법)
	//%x =7e8d로 나타냄
	printf("%#010x\n", 0x7d5);//#010x  
	return 0;
}