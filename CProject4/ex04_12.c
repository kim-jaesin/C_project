#include<stdio.h>

int main()
{
	int age;
	printf("나이를 입력하시오.");
	scanf_s("%d", &age);
	if (age <= 6 || age >= 70)
		printf("6세 이하 어린이와 70세 이상 어른은 무료입장입니다.");
	else
		printf("요금은3,000원 입니다.");


	


	return 0;
}

//child = 0 <= 6;
//senior =
//nData = x < y ? x : y;
// int free;
//free = age <= 6 ||
//6세이하의 어린이와 70세 이상의 어른들은 무료입장
//그외에는 3,000원의 입장료를 받는다.
//if (age <= 6 || age >= 70):둘다 동시에 참이 될 수 없다
//age <= 6 이게 참 이거나  age >= 70이게 참이 되야하니 ||을 쓴다.