#include<stdio.h>
#include<string.h>
int main()
{
	char name[10] = { 0 };//이름
	char tel[20] = { 0 };//전화번호
	char address[50] = { 0 };//주소
	char str[80] = { 0 };//입력된 데이터 연결 저장소
	printf("이름을 입력하세요:");
	gets_s(name, sizeof(name));
	strcat_s(str, sizeof(str), name);
	strcat_s(str, sizeof(str), ",");
	printf("전화번호를 입력하세요:");
	gets_s(tel, sizeof(tel));
	strcat_s(str, sizeof(str), tel);
	strcat_s(str, sizeof(str), ",");
	printf("주소를 입력하세요:");
	gets_s(address, sizeof(address));
	strcat_s(str, sizeof(str), address);
	strcat_s(str, sizeof(str), ",");
	puts( str);
	return 0;
}