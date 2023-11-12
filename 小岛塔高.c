#define _CRT_SECURE_NO_WARNINGS //表述不提醒更改编译器自更警告

//int num2 = 20;//全局变量定义在代码块（{}）外的变量称之为全局变量
#include<stdio.h>
int main() 
{
	/******** begin *******/
	double a,b;
	scanf("%lf %lf",&a,&b);
	if(a<0){
		a=-a;
	}
	if(b<0)
	{
		b=-b;
	}
	if((a-2)*(a-2)+(b-2)*(b-1)<=1)
	{
		printf("10");
	}
	else
	{
		printf("0");
	}
	return 0;
}

