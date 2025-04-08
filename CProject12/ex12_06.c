#include<stdio.h>
int main()
{
	char animal[][10] = {"cat","dog","tiger","lion","monkey"};//animal[5][10]
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("%5s\n", animal[i]);
	}

	//animal[0][0]='C'; 
	for (i = 0; i < 5; i++)
	{
		printf("%5s\n", animal[i]);
	}
	return 0;
}
/*
문자열은 변경이 불가능하다 다만 cat=Cat는 아스키 코드값으로 변경 가능하다.
2차원 배열에서 문자열을저장할때 열은 글자수이고 ""마다 전부 행이다. 문자열 일때만 
만약 5문자의 문자열을 저장할려면 열에 6이라고 해야한다 마지막 null까지 넣어지기 때문 
*/