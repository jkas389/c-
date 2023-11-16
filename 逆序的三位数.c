#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int c=n%10;
	int x=n/10%10;
	int z=n/100;
	int m=c*100+x*10+z;
	printf("%d",m);
	return 0;
}
