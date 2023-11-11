#define _CRT_SECURE_NO_WARNINGS //表述不提醒更改编译器自更警告

//int num2 = 20;//全局变量定义在代码块（{}）外的变量称之为全局变量
#include<stdio.h>
#include<string.h>
#include<windows.h>//sleep头文件
#include<stdlib.h>//system头文件
#include<math.h>//数学头文件
//写一个函数计算字符串长度
//int my_strlen(char* str){
//	int count = 0;
//	while(*str != '\0'){
//		count++;
//		str++;
//		
//	}
//	return count;
//}
//写法二
int my_strlen(char* str){
	if(*str != '\0')
		return 1+my_strlen(str+1);
	else
		return 0;
	
}
int main(){
	char arr[]="byrs";
	int len = my_strlen(arr);
	printf("len = %d\n",len);
	return 0;
}
