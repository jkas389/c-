#define _CRT_SECURE_NO_WARNINGS //表述不提醒更改编译器自更警告

//int num2 = 20;//全局变量定义在代码块（{}）外的变量称之为全局变量
#include<stdio.h>
#include<string.h>
#include<windows.h>//sleep头文件
#include<stdlib.h>//system头文件
#include<math.h>//数学头文件
//汉诺塔

//int main(){
//	char arr[] = "abcdef";
//
//	int i= 0;
//	int len = strlen(arr);
//	for(i=0;i<len;i++){
//		printf("%c",arr[i]);
//	}
//	
//	return 0;
//	
//}
//int main(){
//	char arr[] = {1,2,3,4,5,6,7,8,9};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int i= 0;
//	for(i=0;i<sz;i++){
//		printf("%d",arr[i]);
//	}
//	return 0;
//	
//}
//int main(){
//	char arr[][4]={{1,2,3},{4,5}};
//	int i=0;
//	for(i=0;i<3;i++){
//		int j=0;
//		for(j=0;j<4;j++){
//			printf("%d",arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//	
//}
//int main(){
//	char arr[][4]={{1,2,3},{4,5}};
//	int i=0;
//	for(i=0;i<3;i++){
//		int j=0;
//		for(j=0;j<4;j++){
//			printf("%d",arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//	
//}
//void bubble_sort(int arr[],int sz){
//	for(int i=0;i<sz-1;i++){
//		for(int j=0;j<sz-1-i;j++){
//			if(arr[j]>arr[j+1]){
//				int tmp = arr[j];
//				arr[j]=arr[j+1];//列体题一
//				arr[j+1]=tmp;
//			
//			}
//		}
//
//	}
//}
//int main(){
//	int arr[]={9,8,7,6,5,4,3,2,1,0};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	for(int i=0;i<sz;i++){
//		printf("%d ",arr[i]);
//	}
//	
//	return 0;
//	
//}//冒泡排序
void bubble_sort(int arr[],int sz){//实列二
	//确定冒泡排序的趟数
	for(int i=0;i<sz-1;i++){
		int flag = 1;//假设这一趟要排序的数据已经有序
		//每趟冒泡排序
		for(int j=0;j<sz-1-i;j++){
			if(arr[j]>arr[j+1]){
				int tmp = arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
				flag = 0;//本趟排序的数据其实不完全有序
			
			}
		}
		if(flag == 1){
			break;
		}

	}
}
int main(){
	int arr[]={9,8,7,6,5,4,3,2,1,0};
	int sz=sizeof(arr)/sizeof(arr[0]);
	bubble_sort(arr,sz);
	for(int i=0;i<sz;i++){
		printf("%d ",arr[i]);
	}
}
