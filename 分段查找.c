#define _CRT_SECURE_NO_WARNINGS //表述不提醒更改编译器自更警告

//int num2 = 20;//全局变量定义在代码块（{}）外的变量称之为全局变量
#include<stdio.h>
#include<string.h>
#include<windows.h>//sleep头文件
#include<stdlib.h>//system头文件
#include<math.h>//数学头文件
int binary_serach(int arr[], int k, int sz){
	int left = 0;
	int right = sz-1;
	while(left<=right){
		int mid = (left+right)/2;
		if(arr[mid]<k){
			left = mid+1;
		}
		else if(arr[mid]>k){
			right = mid-1;
		}
		else{
			return mid;
		}
	}
	return -1;
	
}
int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int k =6;
	int sz = sizeof(arr)/sizeof(arr[0]);
	int ret = binary_serach(arr,k,sz);
	if(ret == -1){
		printf("找不到参数\n");
	}
     else{
		
		printf("找到参数了,下标：%d\n",ret);
	}
	return 0;
}
