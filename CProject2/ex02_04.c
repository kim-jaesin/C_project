#include<stdio.h>

int main()
{
	char blood_type;

	printf("�������� �Է��ϼ���:");
	scanf_s("%c", &blood_type,1); //�Է�,ab���� ����,'A'=65
	printf("����� �������� %c�� �Դϴ�.\n",blood_type); //65
	printf("blood_type=%d", blood_type); //65
	return 0;
}