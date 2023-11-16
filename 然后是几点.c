#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(){
	int  n,x;
	scanf("%d%d",&n,&x);
	int y,z,m;
	y=(n/100*60+n%100+x)/60*100;
	z=(n/100*60+n%100+x)%60;
	m=y+z;
	if((n/100*60+n%100+x)/60==0){
		printf("0%d",m);
	}
	else{
		printf("%d",m);
	}
	return 0;
}
