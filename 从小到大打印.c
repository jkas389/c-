#define _CRT_SECURE_NO_WARNINGS //表述不提醒更改编译器自更警告

//int num2 = 20;//全局变量定义在代码块（{}）外的变量称之为全局变量
#include<stdio.h>
#include<string.h>
#include<windows.h>//sleep头文件
#include<stdlib.h>//system头文件
#include<math.h>//数学头文件
void print(int n){
	if(n>9){
		print(n/10);
	}
	printf("%d", n%10);
}
int main(){
	unsigned int num = 0;
	scanf("%d",&num);
	print(num);
	return 0;
}
