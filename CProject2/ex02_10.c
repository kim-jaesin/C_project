#include<stdio.h>

int main()
{
	int num1 = 3, num2 = 4;//정수와 실수는구조가 다르다. 절대 같이 연산x
	double divResult; //4/2.0을 게산할때 컴픁는 4를4.0으로 계산 이걸 자동 형변환
//수동형 변환은 4앞에 double을 붙임 
	divResult = (double)num1 / num2;//0.75 int는 4바이트 수동 변환을 한다고
	//8바이트가 되지는 않음숫자만 3.0
	//3/4=0, 정수형/정수형=정수 ,3.0/4=내부적으로 자동형변환이되서 3.0/4.0이되서 계산된다. 
	printf("나눗셈 결과:%lf%\n", divResult); //0.000000 형변환 후 0.750000

	return 0;
}