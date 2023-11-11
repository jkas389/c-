#define _CRT_SECURE_NO_WARNINGS //表述不提醒更改编译器自更警告

//int num2 = 20;//全局变量定义在代码块（{}）外的变量称之为全局变量
#include<stdio.h>
#include<string.h>
#include<windows.h>//sleep头文件
#include<stdlib.h>//system头文件
#include<math.h>//数学头文件
//描述第n个斐波那契数的时候
//int count = 0;
//int Fib(int n){
//	if(n==3){
//		count++;
//	}
//	if(n<=2)
//		return 1;
//	else 
//		return Fib(n-1)+Fib(n-2);
//	
//}


//int main(){
//	int n=0;
//	int ret = 0;
//	scanf("%d",&n);
//	ret = Fib(n);//TDD-驱动开发
//	printf("%d\n",ret);
//	printf("%d\n",count);
//	return 0;
//}
int Fib(int n){
	int a = 1;
	int b = 1;
	int c = 0;
	while(n>2){
		c = a+b;
		a=b;
		b=c;
		n--;
	}
	return c;
}
int main(){
	int n=0;
	int ret = 0;
	scanf("%d",&n);
	ret = Fib(n);//TDD-驱动开发
	printf("%d\n",ret);
	return 0;
}
