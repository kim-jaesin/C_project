#include<stdio.h>
double err(double*);
int main()
{
	double arr[] = {1.2,1.5,1.9};
	double res;
	res = err(arr);
	printf("1¹ø %.1lf\n", res);
	res = err(arr);
	printf("1¹ø %.1lf\n", res);
	return 0;
}

double err(double*op)
{
	static int i;
	double temp;
	temp = *(op + i);
	i++;
	return temp;
}
