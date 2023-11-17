#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(){
	int A,B,C;
	scanf("%d%d%d",&A,&B,&C);
	if(A==B){
		printf("C");
	}
	else if(B==C){
		printf("A");
	}
	else{
		printf("B");
	}
	return 0;
}
