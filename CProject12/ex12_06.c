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
���ڿ��� ������ �Ұ����ϴ� �ٸ� cat=Cat�� �ƽ�Ű �ڵ尪���� ���� �����ϴ�.
2���� �迭���� ���ڿ��������Ҷ� ���� ���ڼ��̰� ""���� ���� ���̴�. ���ڿ� �϶��� 
���� 5������ ���ڿ��� �����ҷ��� ���� 6�̶�� �ؾ��Ѵ� ������ null���� �־����� ���� 
*/