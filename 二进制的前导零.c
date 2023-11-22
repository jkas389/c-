#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <math.h>
int main()
{
	int n;
	scanf("%d",&n);
	int count = 0;
	if(n<0){
		count=32;
	}
	else if(n==0){
		count=0; 
	}
	else if(n>0){
		while(n>1){
			n/=2;
			count++;
		}
		count++;
	}
	printf("%d",32-count);
	return 0;
}

