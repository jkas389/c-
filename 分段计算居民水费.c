#define _CRT_SECURE_NO_WARNINGS //表述不提醒更改编译器自更警告

//int num2 = 20;//全局变量定义在代码块（{}）外的变量称之为全局变量
#include<stdio.h>
#include<string.h>
#include<windows.h>//sleep头文件
#include<stdlib.h>//system头文件
#include<math.h>//数学头文
double fun(double x){
	double y=0;
	if(x<=15){
		y=4*x/3;
	}
	else{
		y=2.5*x-17.5;
	}
	return y;
}
int main(){
	int x;
	scanf("%d",&x);
	printf("%.2lf",fun(x));
	return 0;
}
