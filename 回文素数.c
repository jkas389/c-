#define _CRT_SECURE_NO_WARNINGS //表述不提醒更改编译器自更警告

//int num2 = 20;//全局变量定义在代码块（{}）外的变量称之为全局变量
#include<stdio.h>
#include<string.h>
#include<windows.h>//sleep头文件
#include<stdlib.h>//system头文件
#include<math.h>//数学头文件
int is_P(int n)
{
	for(int i=2;i<n;i++){
		if(n%i==0){
			return i;
		}
	}
}
int is_H(int n)
{
	int z=0;
	while(n!=0)
	{
		z = z*10+n%10;
		n /= 10;
	}
	return z;
}
int main()
{
	int num;
	scanf("%d",&num);
	for(int i=10;i<num;i++)
	{
		if(is_H(is_P(i))==i)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}

