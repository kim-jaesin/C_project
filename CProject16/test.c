#include <stdio.h>
#include <string.h>

void login() {
    char username[20], password[20];
    printf("Enter username: ");
    scanf("%s", username);
    printf("Enter password: ");
    scanf("%s", password);

    if (strcmp(username, "admin") == 0 && strcmp(password, "1234") == 0) {
        printf("�α��� �Ǿ����ϴ�.!\n");
    }
    else {
        printf("���̵� �Ǵ� ��й�ȣ�� Ʋ�Ƚ��ϴ�.\n");
        login(); // �α��� ���н� �ٽ� �α��� 
    }
}

int main() {
    printf("ȯ���մϴ�!\n");
    login(); // �α��� �Լ� ȣ��
    printf("�ε���.....\n");

    // ���� ���� ����
    return 0;
}