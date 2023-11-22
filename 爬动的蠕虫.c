#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <math.h>
#include <math.h>
#include<memory.h>
#include<rasdlg.h>
#include<time.h>
int main()
{
	int n,u,d,i=0;
	scanf("%d %d %d",&n,&u,&d);
	while(n){
		n-=u,i++;
		if(n<=0){
			break;
		}
		n+=d;
		i++;
	}
	printf("%d",i);
	
	return 0;
}
