#include<stdio.h>

int main()
{
	char* str = "watermelon";//wtreo
	int i = 0;

	while (str[i]!='\0')
	{
		if (i % 2 == 0)
		{
			printf("%c", str[i]);
		}
		i++;
	}
	return 0;
}
/*
if (i / 2 == 0)를 했을때 wa만 나오는 이유는 i의 0과1일대만 몫이 0이 되어 ==0에 참이 되고 나머지는 1이상이 나와 거짓이 된다.
i++가 if문에 있으면 무한 출력이 될 수 있어 반드시 if문 밖에 넣어야 한다.

i++가 if문이 끝나고 써야 문자열을 전체적으로 돈다 
*/