#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <math.h>
#include <math.h>
#include<memory.h>
#include<rasdlg.h>
#include<time.h>
int su(int n){
	int x=1;
	for(int i=1;i<=n;i++){
		x*=i;
		while(x%10==0){
			x/=10;
		}
		x%=10000;
	}
	return x;
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",su(n)%10);
	return 0;
}
