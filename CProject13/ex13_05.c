#include<stdio.h>
int main()
{
	int ary[6];
	printf("ary狼 林家:%p\n", ary);
	printf("ary狼 林家:%p\n",&ary);// 笛促 鞍促 &绰 林家楷魂磊

	printf("ary狼 林家:%p\n", ary+1);
	printf("ary狼 林家:%p\n", ary + 2);
	printf("ary狼 林家:%p\n", ary + 3);
	printf("ary狼 林家:%p\n", ary + 4);
	printf("ary狼 林家:%p\n", ary + 5);

	printf("ary狼 林家:%p\n", &ary + 1); //ary+5 客 鞍促.  &ary+1=ary傈眉 农扁狼+1
	return 0;
}
/*



*/