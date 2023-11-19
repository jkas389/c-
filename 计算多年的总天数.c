#define _CRT_SECURE_NO_WARNINGS //表述不提醒更改编译器自更警告

//int num2 = 20;//全局变量定义在代码块（{}）外的变量称之为全局变量
#include<stdio.h>
#include<string.h>
#include<windows.h>//sleep头文件
#include<stdlib.h>//system头文件
#include<math.h>
#include <stdio.h>
int year1(int i){
	if((i%400==0)||(i%4==0&&i%100!=0))
	{
		return 366;
	}                          
	else
	{
		return 365;
	}
}
int main () 
{
	int year,n,i;
	int sum = 0
	;    scanf("%d %d",&year,&n);
	for(i=year;i<year+n;i++)
	{
		sum+=year1(i);
	}
	printf("%d",sum);
//	printf("%d",sum);
	return 0;
}
