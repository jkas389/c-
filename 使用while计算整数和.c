#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int main(){
	int n,sum=0,count=0;
	while(scanf("%d",&n)){
		if(n>0){
			count++;
			sum+=n;
		}
		else if(n<0){
			continue;
		}
		else{
			break;
		}
	}
	printf("sum::%d,count:%d",sum,count);
	return 0;
}
