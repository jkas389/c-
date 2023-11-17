#define _CRT_SECURE_NO_WARNINGS //表述不提醒更改编译器自更警告

//int num2 = 20;//全局变量定义在代码块（{}）外的变量称之为全局变量
#include<stdio.h>
#include<string.h>
#include<windows.h>//sleep头文件
#include<stdlib.h>//system头文件
#include<math.h>//数学头文件
int sum(int num){
	int sum=0;
	while(num!=0){
		sum+=num%10;
		num/=10;
	}
	return sum*3+1;
}
int mian(){
	int n1=0,r=0,t=0,n=0,num2=0;
	scanf("%d",&n1);
	do{
		r=n;
		n=sum(n1);
		n1=n;
		t++;
		if(n==num2){
			printf("%d:%d\n",t,n);
			break;
		}
		printf("%d:%d\n",t,n);
	}while(r!=n1);
	return 0;
}
