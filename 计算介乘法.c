#define _CRT_SECURE_NO_WARNINGS //表述不提醒更改编译器自更警告

//int num2 = 20;//全局变量定义在代码块（{}）外的变量称之为全局变量
#include<stdio.h>
#include<string.h>
#include<windows.h>//sleep头文件
#include<stdlib.h>//system头文件
#include<math.h>//数学头文件
//写一个函数计算字符串长度
int Facl(int n){
	int i = 0;
	int ret = 1;
	for(i=1;i<=n;i++){
		ret *= i;
	}
	return ret;
}
int Fac2(int n){
	if(n<=1)
		return 1;
	else 
		return n*Fac2(n-1);
}
int main(){
	int n = 0;
	int ret = 0;
	scanf("%d",&n);
	ret = Facl(n);
	printf("%d\n",ret);
	return 0;
}
