#include<stdio.h>

int main()
{
	char word[80];
	int i=0;

	printf("단어를 입력하세요:");
	scanf_s("%s", word,20);//apple("문자열")
	//scanf_s함수는 문자열 입력 받으면 null문자를 자동으로 채워준다.
	while (word[i]!='\0')
	{
		i++;
	}
		printf("%s단어의 길이는 %d입니다.\n", word, i);
	return 0;
}
//while (word[i] != '\0') ->널 문자가 나올때 까지 반복  번역 word[i] !는\0(null)과 같지않다. 
// scanf에서 입력한 apple은 사실 apple(null)이며 apple까지 i가 총5가 올라간다.
//scanf_s함수는 문자열 입력 받으면 null문자를 자동으로 채워준다. 따라서 scanf_s로 입력받아 printf로 출력했을때
//쓰레기값이 나오지 않는다.
//!='\0'을빼도 실행이 되는 이유가 apple의 a는 아스키코드로 97이라 참이 된다. 
//그러므로 apple가 전부 내부적으로 숫자로 변환되서 자동으로 채운 null을 만나기 전까지 i가 올라가서 
//5가 나온다.
//실행해서 답이 나온다고 쓰면 되는게 아니다. !='\0'을빼면 이코드를 받은 사람은 어떤코드인지 모른다.