#include<stdio.h>
void user_strcpy(char*, char*);
int main()
{
	char fruiit[20];
	user_strcpy(fruiit, "strawberry");
	printf("�迭�� ����� ���ڿ�:%s\n", fruiit);
	return 0;
}

void user_strcpy(char* des, char* src)
{
	while (*src != '\0')
	{
		*des = *src;
		src++;
		des++;

	}
	*des = '\0';
}
/*
src[i] / src[0]�� ���ڿ� ���翡 �ƹ� �ǹ̰� ����.
if�� ���ʿ��� ������ if�� Ư�� ���ǿ� �¾ƾ߸�����ȴ�.
�������� �� ����(\0)�� ���� ������
����ġ ���� ��(������ ��)�� ��µǰų�, ���α׷��� �浹�� �� �ִ�.
*des = '\0';�� while���� Ż���ϰ� �������� null���ڰ� �߰��� �ȴ�. 


���⼭ 
des++;src++;�̰� �����Ͱ� �ƴ� ������ �ּҰ��� �ø��°� �ƴ϶�  des�� �迭�����̰�  src���ڶ���
*/