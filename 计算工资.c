#define _CRT_SECURE_NO_WARNINGS //表述不提醒更改编译器自更警告

//int num2 = 20;//全局变量定义在代码块（{}）外的变量称之为全局变量
#include<stdio.h>
#include<string.h>
#include<windows.h>//sleep头文件
#include<stdlib.h>//system头文件
#include<math.h>//数学头文件
int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	float s=0,k=0;
	if(n>=5){
		if(m>40){
			k=m-40;
			s=(40*50)+(k*1.5*50);
			printf("%.2f",s);
		}
		if(m<=40){
			s=m*50;
			printf("%.2f",s);
		}
	}
    else if(n<5){
		if(m>40){
			k=m-40;
			s=(40*30)+(k*1.5*30);
			printf("%.2f",s);
		}
		else{
			s=m*30;
			printf("%.2f",s);
		}
	}

	return 0;
}
