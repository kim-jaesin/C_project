#include<stdio.h>
void login();
int main()
{
	puts("ȯ���մϴ�");
	login();
	puts("�α��� �Ǿ����ϴ�.\n �ε���....");

	return 0;
}

void login()
{
	char id [20];
	char password [20];
	while (1) {
		printf("���̵� �Է��Ͻÿ�");
		gets_s(id, sizeof(id));
		printf("��й�ȣ�� �Է��Ͻÿ�");
		gets_s(password, sizeof(password));
		if (strcmp(id, "admin") == 0 && strcmp(password, "1234") == 0)
		{
			printf("�α��� �Ǿ����ϴ�.\n");
			break;
		}
		else { printf("���̵� ��й�ȣ�� Ʋ�Ƚ��ϴ�.\n"); }
	}
}
