#include<stdio.h>
void login();
int main()
{
	puts("환영합니다");
	login();
	puts("로그인 되었습니다.\n 로딩중....");

	return 0;
}

void login()
{
	char id [20];
	char password [20];
	while (1) {
		printf("아이디를 입력하시오");
		gets_s(id, sizeof(id));
		printf("비밀번호를 입력하시오");
		gets_s(password, sizeof(password));
		if (strcmp(id, "admin") == 0 && strcmp(password, "1234") == 0)
		{
			printf("로그인 되었습니다.\n");
			break;
		}
		else { printf("아이디 비밀번호가 틀렸습니다.\n"); }
	}
}
