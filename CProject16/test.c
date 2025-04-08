#include <stdio.h>
#include <string.h>

void login() {
    char username[20], password[20];
    printf("Enter username: ");
    scanf("%s", username);
    printf("Enter password: ");
    scanf("%s", password);

    if (strcmp(username, "admin") == 0 && strcmp(password, "1234") == 0) {
        printf("로그인 되었습니다.!\n");
    }
    else {
        printf("아이디 또는 비밀번호가 틀렸습니다.\n");
        login(); // 로그인 실패시 다시 로그인 
    }
}

int main() {
    printf("환영합니다!\n");
    login(); // 로그인 함수 호출
    printf("로딩중.....\n");

    // 게임 실행 로직
    return 0;
}