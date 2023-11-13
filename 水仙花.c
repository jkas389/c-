//水仙花
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<math.h>
int main(){
	int n,b,c,a;
	scanf("%d",&n);
	for(int i=100;i<=n;i++){
	a=i%10;//个位
	b=i/10%10;//十位
	c=i/100;
		if(i==a*a*a+b*b*b+c*c*c){
			printf("%6d",i);
		}
	}
	return 0;
}
